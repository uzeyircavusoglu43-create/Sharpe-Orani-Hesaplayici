# Sharpe-Orani-Hesaplayici
Kullanıcıdan alınan değerlerle Sharpe Oranı'nı hesaplayan C programı
# Sharpe Oranı Hesaplayıcı (Sharpe Ratio Calculator)

Bu proje, C programlama dilinde yazılmış, kullanıcıdan alınan finansal verilere dayanarak bir yatırımın Sharpe Oranını hesaplayan basit bir komut satırı uygulamasıdır. Proje, temel finansal analiz metriklerinin programlama ile nasıl modellenebileceğini göstermek amacıyla geliştirilmiştir.

## Projenin Amacı

Bu aracın temel amacı, bir yatırımın aldığı riske göre ne kadar iyi bir getiri sağladığını ölçen **Sharpe Oranı**'nı kolayca hesaplamaktır. Finansal analizde, iki farklı yatırım aynı getiriyi sunsa bile, bu getiriyi elde ederken aldıkları risk seviyeleri farklı olabilir. Sharpe Oranı, bu "riske göre ayarlanmış getiriyi" standart bir metrikle sunarak yatırımları daha adil bir şekilde karşılaştırmamızı sağlar.

## Konsept: Sharpe Oranı Nedir?

Sharpe Oranı, aşağıdaki formül kullanılarak hesaplanır:

$$S_p = \frac{R_p - R_f}{\sigma_p}$$

Burada:
-   $R_p$: Portföyün veya yatırımın beklenen getirisi.
-   $R_f$: Risksiz faiz oranı (örneğin, devlet tahvili faizi).
-   $\sigma_p$: Portföy getirisinin standart sapması (yani riski veya volatilitesi).

Genel olarak, oranın **1'den büyük** olması "iyi", **2'den büyük** olması "çok iyi" ve **3'ten büyük** olması "mükemmel" olarak kabul edilir. Bu oran, aldığımız her birim risk için risksiz faiz oranının üzerinde ne kadar ek getiri elde ettiğimizi gösterir.

## Özellikler

* **Kullanıcı Dostu Arayüz:** Kullanıcıdan gerekli üç temel veriyi (getiri, risksiz faiz, standart sapma) açık ve anlaşılır istemlerle alır.
* **Hata Kontrolü:** Paydada yer alan standart sapma değerinin `0` girilmesi durumunda programın çökmesini engelleyen "sıfıra bölme hatası" kontrolü içerir.
* **Net Çıktı:** Hesaplanan Sharpe Oranı'nı ondalık olarak iki basamak hassasiyetle gösterir.
* **Otomatik Yorumlama:** Hesaplanan oranın finansal olarak ne anlama geldiğine dair (İyi, Kötü, Mükemmel vb.) temel bir yorum sunar.

## Nasıl Kullanılır?

Bu programı çalıştırmak için sisteminizde bir C derleyicisi (örneğin GCC) bulunmalıdır.

1.  **Derleme:**
    Terminali veya komut istemini açın ve aşağıdaki komutu kullanarak kodu derleyin:
    ```bash
    gcc sharpe_hesaplayici.c -o sharpe_hesaplayici
    ```
    *(Not: `sharpe_hesaplayici.c` yerine kendi dosya adınızı yazmalısınız.)*

2.  **Çalıştırma:**
    Derleme başarılı olduktan sonra, programı çalıştırmak için şu komutu girin:
    ```bash
    ./sharpe_hesaplayici
    ```

### Örnek Çalıştırma

```
=== Sharpe Orani Hesaplayici ===

Yatirimin getirisini giriniz (% olarak): 15
Risksiz faiz oranini giriniz (% olarak): 5
Portfoyun standart sapmasini (riski) giriniz (% olarak): 12

Sharpe Orani: 0.83
Genel yorum: Ortalama altinda bir performans.
