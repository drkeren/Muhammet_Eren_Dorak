# Karatsuba Algoritması Uygulaması (C++)

Bu depo, Karatsuba algoritmasının C++ ile bir uygulamasını içermektedir. Kullanıcıdan alınan iki büyük sayının çarpımı bu algoritma kullanılarak hesaplanır.

## Algoritma Hakkında

Karatsuba algoritması, büyük sayıların çarpımını klasik yöntemlere göre daha verimli bir şekilde gerçekleştiren bir böl ve fethet algoritmasıdır. $n$ basamaklı iki sayıyı çarpmak için yaklaşık $O(n^{1.585})$ işlem yapar, bu da büyük $n$ değerleri için $O(n^2)$ olan klasik yöntemden daha iyidir.

### Temel İde

İki sayı $x$ ve $y$ aşağıdaki gibi parçalanır ($m \approx n/2$):
$x = a \cdot 10^m + b$
$y = c \cdot 10^m + d$

Çarpım $x \cdot y$ şu şekilde hesaplanır:
$x \cdot y = ac \cdot 10^{2m} + (ad + bc) \cdot 10^m + bd$

Karatsuba, $ad + bc$ terimini $(a + b)(c + d) - ac - bd$ şeklinde hesaplayarak sadece üç çarpma işlemi kullanır.

### Adımlar

1.  Eğer sayılar yeterince küçükse, klasik çarpma kullanılır.
2.  Aksi takdirde, sayılar iki eşit (veya yaklaşık eşit) parçaya ayrılır.
3.  Üç rekürsif çarpma işlemi yapılır: $ac$, $bd$, ve $(a + b)(c + d)$.
4.  Bu sonuçlar kullanılarak $ad + bc$ hesaplanır.
5.  Nihai sonuç elde edilir.

## Kullanım
1.  `karatsuba.cpp` dosyasını bir C++ derleyicisi ile derleyin (örneğin, g++ ile: `g++ karatsuba.cpp -o karatsuba`).
2.  Çalıştırılabilir dosyayı çalıştırın (`./karatsuba`).
3.  Program sizden iki büyük sayı girmenizi isteyecektir.

## Kaynakça 

-  
    **Kaynak:** *Soviet Physics Doklady*, Cilt 7, Sayı 7, 1963, ss. 595-596.

-  
    **Yayıncı:** MIT Press, Üçüncü Baskı, 2009. (Karatsuba algoritması bölümü)

