# Karatsuba Algoritması

Karatsuba algoritması, büyük sayıların çarpılmasında kullanılan hızlı bir algoritmadır. Klasik çarpma algoritmasından daha verimli bir çözüm sunarak, çok büyük sayıların çarpılmasını hızlandırır. Bu algoritma, **böl ve fethet (divide and conquer)** stratejisini kullanır.

## İçerik

- [Algoritmanın Ne Yaptığı](#algoritmanın-ne-yaptığı)
- [Kategori ve Çözüm Yolu](#kategori-ve-çözüm-yolu)
- [Ne Zaman ve Neden Kullanılır?](#ne-zaman-ve-neden-kullanılır)
- [Zaman ve Uzay Karmaşıklığı](#zaman-ve-uzay-karmaşıklığı)
- [Algoritmanın Adımları](#algoritmanın-adımları)
- [Kullanım Yerlerine Ait Örnekler](#kullanım-yerlerine-ait-örnekler)
- [Avantajlar ve Dezavantajlar](#avantajlar-ve-dezavantajlar)
- [Kaynakça](#kaynakça)

---

## Algoritmanın Ne Yaptığı

Karatsuba algoritması, **büyük sayıların çarpımını daha hızlı yapabilmek** amacıyla geliştirilmiş bir algoritmadır. Klasik çarpma yönteminde, iki sayının çarpımı için $O(n^2)$ karmaşıklığında işlem yapılırken, Karatsuba algoritması bunu daha düşük bir karmaşıklığa indirir. Bu algoritma, sayıları daha küçük parçalara bölerek sadece 3 çarpma işlemi yapar ve sonrasında bu çarpımlarla sonucu birleştirir.

---

## Kategori ve Çözüm Yolu

- **Kategori**: Karatsuba algoritması, **böl ve fethet** (divide and conquer) yaklaşımını kullanır. Bu yaklaşımda, problemi daha küçük alt problemlere böleriz ve her birini ayrı ayrı çözerek sonuca ulaşırız.

- **Çözüm Yolu**:
  - Sayılar ikiye bölünür.
  - 3 temel çarpma işlemi yapılır.
  - Ara işlemlerle çözüm bulunur.
  - Sonuçlar uygun basamağa yerleştirilerek toplanır.

---

## Ne Zaman ve Neden Kullanılır?

### **Ne Zaman Kullanılır?**
- **Büyük sayıların çarpılması gerektiğinde** kullanılır. Örneğin, 512 basamaktan uzun sayılarla çalışıyorsanız, Karatsuba algoritması klasik çarpma yöntemine göre çok daha hızlı sonuç verir.
- Genellikle **kriptografi**, **bilimsel hesaplamalar** ve **büyük sayı aritmetiği** gibi alanlarda kullanılır.

### **Neden Kullanılır?**
- Klasik çarpma algoritması $O(n^2)$ karmaşıklığa sahipken, Karatsuba algoritması sadece $O(n^{1.585})$ karmaşıklığına sahiptir. Bu sayede, çok büyük sayılarla yapılan işlemlerde önemli bir hız avantajı sağlar.
- Karatsuba, sayı büyüklüğü arttıkça verimliliği daha belirgin hale gelir.

---

## Zaman ve Uzay Karmaşıklığı

### **Zaman Karmaşıklığı**
- Karatsuba algoritması, klasik çarpma yöntemine göre daha hızlıdır.
- **Zaman Karmaşıklığı**: $O(n^{1.585})$ (n, sayı basamağı sayısıdır).

### **Uzay Karmaşıklığı**
- **Uzay Karmaşıklığı**: $O(n)$'dir. Rekürsif yapısı ve ara verilerin saklanması nedeniyle biraz daha fazla bellek kullanır.

---

## Algoritmanın Adımları

1. **Sayının ikiye bölünmesi**:
   - Verilen sayılar $x$ ve $y$ ikiye ayrılır:
     - $x = a \cdot 10^m + b$
     - $y = c \cdot 10^m + d$

2. **3 küçük çarpma yapılır**:
   - $ac$, $bd$ ve $(a + b)(c + d)$ hesaplanır.

3. **Ara çarpım**:
   - $ad + bc$, $(a + b)(c + d) - ac - bd$ işlemi ile bulunur.

4. **Sonuç birleştirilir**:
   - $x \cdot y = ac \cdot 10^{2m} + (ad + bc) \cdot 10^m + bd$

5. **Rekürsif olarak daha küçük sayı çarpımları yapılır**.

---

## Kullanım Yerlerine Ait Örnekler

Karatsuba algoritması genellikle şu alanlarda kullanılır:

1.  **Kriptografi**:
    -   **RSA ve Diffie-Hellman** gibi şifreleme algoritmalarında çok büyük asal sayıların çarpılması gerekir.
    -   Örneğin, RSA anahtar üretiminde kullanılan büyük asal sayıların çarpımı Karatsuba ile hızlandırılabilir.

2.  **Büyük Sayı Aritmetiği**:
    -   **BigInteger** kütüphanelerinde (Java, Python vb.) büyük sayılarla yapılan işlemler Karatsuba algoritmasıyla optimize edilir.
    -   Örneğin, Python'da 1000 basamaklı sayılarla yapılan işlemler Karatsuba ile daha hızlı gerçekleşir.

3.  **Bilimsel Hesaplamalar**:
    -   Büyük sayılarla yapılan hesaplamalarda, örneğin **astrofizik** veya **genetik hesaplamalar** gibi alanlarda kullanılır.

4.  **Matematiksel Yazılımlar**:
    -   **Mathematica**, **MATLAB** gibi yazılımlar, büyük sayıların çarpılması gereken işlemlerde Karatsuba algoritmasını kullanarak performansı artırabilir.

---

## Avantajlar ve Dezavantajlar

### **Avantajlar**:
- **Daha Hızlı Çarpma**: Karatsuba algoritması, klasik çarpma yönteminden çok daha hızlıdır (zaman karmaşıklığı $O(n^{1.585})$).
- **Daha Az Çarpma**: 4 çarpma yerine sadece 3 çarpma yapılır.
- **Paralel İşleme Uygunluğu**: Rekürsif yapısı, paralel işleme teknikleriyle daha da hızlandırılabilir.
- **Eğitimsel Katkı**: Algoritma, **böl ve fethet** stratejisinin anlaşılmasında çok iyi bir örnek oluşturur.

### **Dezavantajlar**:
- **Küçük Sayılar İçin Verimsiz**: Eğer sayılar küçükse (örneğin 3-4 basamaktan oluşuyorsa), klasik yöntem daha hızlı olabilir.
- **Daha Fazla Toplama ve Çıkarma**: Çarpma işlemleri azalır, ancak toplamalar ve çıkarma işlemleri artar, bu da bazı durumlarda dezavantaj olabilir.
- **Karmaşıklık**: Uygulaması daha karmaşıktır. Özellikle rekürsif yapılar, başlangıç seviyesindeki kullanıcılar için kafa karıştırıcı olabilir.
- **Bellek Kullanımı**: Rekürsif çağrılar nedeniyle daha fazla bellek kullanımı gerekebilir.

---

## Kaynakça 
- Wikipedia - Karatsuba algorithm: [https://en.wikipedia.org/wiki/Karatsuba_algorithm](https://en.wikipedia.org/wiki/Karatsuba_algorithm)
- Introduction to Algorithms (MIT Press)

