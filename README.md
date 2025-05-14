# Karatsuba Algoritması

Karatsuba algoritması, büyük sayıların çarpılmasında kullanılan hızlı ve etkili bir algoritmadır. Klasik çarpma algoritmasına kıyasla daha düşük bir zaman karmaşıklığı sunarak, özellikle çok büyük sayıların çarpımını önemli ölçüde hızlandırır. Temelinde **böl ve fethet (divide and conquer)** prensibi yatar.

## İçindekiler

- [Algoritmanın Özeti](#algoritmanın-özeti)
- [Kategori ve Çözüm Yaklaşımı](#kategori-ve-çözüm-yaklaşımı)
- [Ne Zaman ve Neden Kullanılır?](#ne-zaman-ve-neden-kullanılır)
- [Karmaşıklık Analizi](#karmaşıklık-analizi)
- [Algoritmanın Adımları](#algoritmanın-adımları)
- [Örnek Uygulama Alanları](#örnek-uygulama-alanları)
- [Avantajları ve Dezavantajları](#avantajları-ve-dezavantajları)
- [Ek Kaynaklar](#ek-kaynaklar)
- [Katkıda Bulunma](#katkıda-bulunma)
- [Lisans](#lisans)

---

## Algoritmanın Özeti

Karatsuba algoritması, **büyük sayıların çarpımını daha verimli bir şekilde gerçekleştirmek** için tasarlanmıştır. Klasik çarpma yönteminin $O(n^2)$ olan zaman karmaşıklığını, $O(n^{\log_2 3} \approx n^{1.585})$ seviyesine düşürür. Bu iyileştirme, sayıların daha küçük parçalara ayrılması ve sadece üç çarpma işlemi kullanılarak sonucun elde edilmesiyle sağlanır.

---

## Kategori ve Çözüm Yaklaşımı

-   **Kategori**: $\textbf{Böl}$ $\textbf{ve}$ $\textbf{Fethet}$ (Divide and Conquer)
-   **Çözüm Yolu**:
    1.  Çarpılacak sayılar eşit büyüklükte (veya yaklaşık olarak eşit) iki parçaya ayrılır.
    2.  Üç adet daha küçük çarpma işlemi gerçekleştirilir.
    3.  Elde edilen sonuçlar, uygun kaydırmalar ve toplamalarla birleştirilerek nihai çarpım bulunur.

---

## Ne Zaman ve Neden Kullanılır?

### $\textbf{Ne Zaman Kullanılır?}$

-   **Çok büyük sayılar çarpılırken**: Özellikle yüzlerce veya binlerce basamaklı sayılarla işlem yapıldığında klasik yönteme göre belirgin bir performans avantajı sunar.
-   **Kriptografi uygulamalarında**: RSA, Diffie-Hellman gibi algoritmaların temelini oluşturan büyük sayı aritmetiğinde.
-   **Bilimsel ve mühendislik hesaplamalarında**: Yüksek hassasiyet gerektiren ve büyük sayılarla çalışılan simülasyonlarda.

### $\textbf{Neden Kullanılır?}$

-   **Performans artışı**: $O(n^{1.585})$ zaman karmaşıklığı sayesinde, büyük $n$ değerleri için klasik $O(n^2)$ yönteminden daha hızlıdır.
-   Büyük veri setleriyle çalışırken işlem süresini kısaltır.

---

## Karmaşıklık Analizi

### $\textbf{Zaman Karmaşıklığı}$:
-   $O(n^{\log_2 3}) \approx O(n^{1.585})$

### $\textbf{Uzay Karmaşıklığı}$:
-   $O(n)$ (rekürsif çağrılar ve ara sonuçların saklanması nedeniyle)

---

## Algoritmanın Adımları

İki $n$ basamaklı sayıyı ($x$ ve $y$) çarpmak için (basamak sayısı $n = 2m$ olduğu varsayılır):

1.  **Bölme**: Sayıları $m$ basamaklı iki parçaya ayırın:
    $$x = a \cdot 10^m + b$$
    $$y = c \cdot 10^m + d$$
    Burada $a, b, c, d$ yaklaşık olarak $n/2$ basamaklı sayılardır.

2.  **Üç Çarpma İşlemi**:
    -   $p_1 = a \cdot c$
    -   $p_2 = b \cdot d$
    -   $p_3 = (a + b) \cdot (c + d)$

3.  **Ara Değerin Hesaplanması**:
    -   $p_4 = p_3 - p_1 - p_2 = (a + b)(c + d) - ac - bd = ad + bc$

4.  **Sonucun Birleştirilmesi**:
    -   $x \cdot y = p_1 \cdot 10^{2m} + p_4 \cdot 10^m + p_2$

Bu adımlar, sayılar yeterince küçülene kadar rekürsif olarak uygulanır.

---

## Örnek Uygulama Alanları

1.  **Kriptografi**:
    -   Büyük asal sayıların çarpımında (örneğin RSA algoritmasında anahtar üretimi).

2.  **Büyük Sayı Kütüphaneleri**:
    -   `BigInteger` gibi sınıfların implementasyonunda, yüksek performanslı çarpma işlemleri için.

3.  **Bilimsel Hesaplamalar**:
    -   Yüksek hassasiyetli matematiksel işlemlerde.

4.  **Matematiksel Yazılımlar**:
    -   Sembolik ve sayısal hesaplama araçlarında.

---

## Avantajları ve Dezavantajları

### $\textbf{Avantajlar}$:

-   Klasik $O(n^2)$ yöntemine göre **daha düşük zaman karmaşıklığı**.
-   Büyük sayılarla yapılan çarpma işlemlerinde **önemli hızlanma**.
-   Sadece **üç çarpma işlemi** gerektirir (klasik yöntemde dört).
-   **Böl ve fethet** prensibini gösteren iyi bir örnektir.

### $\textbf{Dezavantajlar}$:

-   Küçük sayılar için (genellikle birkaç basamaklı) **klasik yöntem daha hızlı** olabilir.
-   Daha fazla **toplama ve çıkarma işlemi** gerektirir.
-   **Uygulaması klasik yönteme göre daha karmaşıktır**.
-   Rekürsif yapısı nedeniyle **biraz daha fazla bellek** kullanabilir.

---

## Ek Kaynaklar

-   [Wikipedia - Karatsuba algorithm](https://en.wikipedia.org/wiki/Karatsuba_algorithm)
-   İlgili akademik makaleler ve ders notları (buraya linkler eklenebilir).


