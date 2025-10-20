#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
 double getiri, risksiz_faiz, standart_sapma, sharpe_orani;

    printf("=== Sharpe Orani Hesaplayici ===\n");
    
    printf("Yatirimin getirisini giriniz (%% olarak): ");
    scanf("%lf", &getiri);
    
    printf("Risksiz faiz oranini giriniz (%% olarak): ");
    scanf("%lf", &risksiz_faiz);
    
    printf("Portfoyun standart sapmasini (riski) giriniz (%% olarak): ");
    scanf("%lf", &standart_sapma);

    // Yüzdelikleri oran haline getiriyoruz
    getiri /= 100.0;
    risksiz_faiz /= 100.0;
    standart_sapma /= 100.0;

    if (standart_sapma == 0) {
    printf("\nHata: Standart sapma sifir olamaz (bolme hatasi)!\n");
    return 1;
    }

    // Sharpe oranı formülü
    sharpe_orani = (getiri - risksiz_faiz) / standart_sapma;

    printf("\nSharpe Orani: %.2f\n", sharpe_orani);

    if (sharpe_orani < 1)
	printf("Genel yorum: Ortalama altinda bir performans.\n");
    else if (sharpe_orani < 2)
    printf("Genel yorum: Iyi bir performans.\n");
    else if (sharpe_orani < 3)
    printf("Genel yorum: Cok iyi bir performans.\n");
    else
	printf("Genel yorum: Mukemmel bir performans!\n");
        
	return 0;
}