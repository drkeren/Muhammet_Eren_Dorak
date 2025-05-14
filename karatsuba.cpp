#include <iostream>
#include <cmath>  // log10 ve pow için

// Karatsuba algoritması ile çarpma yapan fonksiyon
int karatsuba(int x, int y) {
    // Eğer sayılar tek basamaklıysa direkt çarp (temel durum)
    if (x < 10 || y < 10)
        return x * y;

    // Basamak sayısını bul (kaç basamaklı olduklarını hesapla)
    int n = std::max((int)log10(x) + 1, (int)log10(y) + 1);

    // Sayıyı ortadan bölmek için m basamak
    int m = n / 2;

    // 10^m hesapla (bölme için)
    int power = pow(10, m);

    // x = a * 10^m + b şeklinde böl (a: sol, b: sağ kısım)
    int a = x / power;
    int b = x % power;

    // y = c * 10^m + d şeklinde böl
    int c = y / power;
    int d = y % power;

    // Karatsuba'nın alt parçaları:
    int ac = karatsuba(a, c);               // a * c
    int bd = karatsuba(b, d);               // b * d
    int ab_cd = karatsuba(a + b, c + d);    // (a + b) * (c + d)

    // (a + b)(c + d) - ac - bd ifadesi ara çarpımı verir
    int ad_plus_bc = ab_cd - ac - bd;

    // Karatsuba formülünün tamamı:
    // x * y = ac * 10^(2m) + (ad + bc) * 10^m + bd
    int result = ac * pow(10, 2 * m) + ad_plus_bc * power + bd;

    return result;
}

int main() {
    int num1, num2;

    // Kullanıcıdan iki sayı al
    std::cout << "Birinci sayıyı girin: ";
    std::cin >> num1;

    std::cout << "İkinci sayıyı girin: ";
    std::cin >> num2;

    // Karatsuba fonksiyonu ile çarpımı hesapla
    int result = karatsuba(num1, num2);

    // Sonucu ekrana yazdır
    std::cout << "Çarpım sonucu: " << result << std::endl;

    return 0;
}
