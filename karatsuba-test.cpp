#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// Karatsuba fonksiyonunu header dosyasından veya doğrudan buradan dahil edin
string karatsubaMultiply(const string& x, const string& y); // Fonksiyon tanımı varsa

// Yardımcı: string ile çarpımı sonucu sayıyı tam sayı olarak gösterir (sadece küçük sayılar için)
string naiveMultiply(const string& a, const string& b) {
    int num1 = stoi(a);
    int num2 = stoi(b);
    return to_string(num1 * num2);
}

int main() {
    // Küçük sayılar için doğru çalışıyor mu kontrol edelim
    string a = "1234";
    string b = "5678";

    string karatsubaResult = karatsubaMultiply(a, b);
    string expected = naiveMultiply(a, b);

    cout << "Karatsuba sonucu: " << karatsubaResult << endl;
    cout << "Beklenen sonuç : " << expected << endl;

    assert(karatsubaResult == expected);  // Hatalıysa program durur
    cout << " Test geçti!" << endl;

    // Büyük sayı testi
    string x = "3141592653589793238462643383279502884197169399375105820974944592";
    string y = "2718281828459045235360287471352662497757247093699959574966967627";

    cout << "\nBüyük sayı testi:" << endl;
    string result = karatsubaMultiply(x, y);
    cout << "Sonuç (ilk 50 basamak): " << result.substr(0, 50) << "..." << endl;

    return 0;
}
