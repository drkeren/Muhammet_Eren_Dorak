# Karatsuba Algoritması

Algoritma, klasik çarpma yöntemlerine kıyasla daha hızlı çalışır ve "böl ve fethet" (divide and conquer) stratejisiyle daha az çarpma işlemi yaparak verimliliği artırır.

---

## 🔍 İçindekiler

- [1. Karatsuba Algoritması Nedir?](#1-karatsuba-algoritması-nedir)
- [2. Neden Kullanılır?](#2-neden-kullanılır)
- [3. Algoritmanın Adımları](#3-algoritmanın-adımları)
- [4. Uygulama Açıklaması](#4-uygulama-açıklaması)
- [5. Kullanım Alanları](#5-kullanım-alanları)
- [6. Zaman ve Uzay Karmaşıklığı](#6-zaman-ve-uzay-karmaşıklığı)
- [7. Avantajlar ve Dezavantajlar](#7-avantajlar-ve-dezavantajlar)
- [8. Derleme ve Çalıştırma](#8-derleme-ve-çalıştırma)
- [9. Kaynakça](#9-kaynakça)

---

## 1. Karatsuba Algoritması Nedir?

Karatsuba algoritması, 1960'larda Anatolii Karatsuba tarafından geliştirilmiş bir çarpma algoritmasıdır. Klasik çarpma yönteminde iki `n` basamaklı sayı çarpmak için `n²` işlem gerekirken, Karatsuba algoritması bu işlemi `O(n^1.585)` karmaşıklıkla yapar.

Bu verimlilik, algoritmanın sayıları parçalara ayırması ve **sadece 3 çarpma işlemi** ile sonucu oluşturmasından kaynaklanır.

---

## 2. Neden Kullanılır?

- Klasik algoritmalar, büyük sayılar için yavaş çalışır.
- Karatsuba algoritması, büyük sayılarla yapılan işlemlerde çok daha hızlıdır.
- Özellikle **kriptografi**, **bilimsel hesaplamalar** ve **yüksek hassasiyetli aritmetik** gerektiren durumlarda tercih edilir.

---

## 3. Algoritmanın Adımları

1. Verilen iki sayı `x` ve `y`, ortadan ikiye bölünür.
2. 3 çarpma işlemi yapılır: `ac`, `bd` ve `(a + b)(c + d)`
3. Ortak terim çıkarılarak `ad + bc` hesaplanır.
4. Sonuç şu şekilde birleştirilir:
   - `x * y = ac * 10^(2m) + (ad + bc) * 10^m + bd`
5. Bu işlem sayı küçük olana kadar rekürsif olarak tekrarlanır.

---

## 4. Uygulama Açıklaması

Bu projede iki dosya yer alır:

- `karatsuba.cpp`: Karatsuba algoritmasının tanımı yer alır.
- `karatsuba-test.cpp`: Kullanıcıdan iki sayı alır ve algoritmayı kullanarak sonucu gösterir.

Test kodunda kullanıcıdan klavye ile iki sayı girmesi istenir. Bu sayılar Karatsuba algoritmasıyla çarpılır ve ekrana yazdırılır.

---

## 5. Kullanım Alanları

- **Kriptografi**: RSA gibi algoritmalarda büyük sayı çarpımı gerekir.
- **Bilimsel Hesaplamalar**: Astrofizik, genetik gibi alanlarda kullanılır.
- **Büyük Sayı Aritmetiği**: BigInteger veri yapılarında verim sağlar.
- **Yazılım Kütüphaneleri**: Java, Python gibi dillerin bazı kütüphanelerinde Karatsuba temel alınır.

---

## 6. Zaman ve Uzay Karmaşıklığı

- **Zaman Karmaşıklığı**: `O(n^1.585)`
- **Uzay Karmaşıklığı**: `O(n)` — Rekürsif yapı nedeniyle bellek kullanımı artabilir.

---

## 7. Avantajlar ve Dezavantajlar

### ✅ Avantajlar

- Daha az çarpma işlemiyle hızlı sonuç
- Büyük sayılarla daha verimli
- Matematiksel olarak şık ve paralel işleme uygun

### ❌ Dezavantajlar

- Küçük sayılar için klasik yöntem daha basittir
- Uygulaması biraz daha karmaşıktır
- Fazladan toplama ve çıkarma yapılır

---

## 8. Derleme ve Çalıştırma

### Linux/macOS:
```bash
g++ karatsuba.cpp karatsuba-test.cpp -o test
./test
```

### Windows:
```bash
g++ karatsuba.cpp karatsuba-test.cpp -o test.exe
test.exe
```

---

## 9. Kaynakça

[1] Karatsuba, A. A. & Ofman, Y. (1962). *Multiplication of Multidigit Numbers on Automata*. Soviet Physics Doklady, 7(7), 595–596.

[2] Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). *Introduction to Algorithms* (3rd ed.). MIT Press.

[3] GeeksforGeeks. (n.d.). *Karatsuba Algorithm for Fast Multiplication using Divide and Conquer*. Erişim adresi: https://www.geeksforgeeks.org/kartsuba-algorithm-for-fast-multiplication-using-divide-and-conquer-algorithm/

[4] Wikipedia. (n.d.). *Karatsuba algorithm*. Erişim adresi: https://en.wikipedia.org/wiki/Karatsuba_algorithm
