#include <stdio.h>
#include <stdlib.h>

int main()
{
//    Zad1.4.1
//    printf("Podaj dwie dodatnie liczby\n");
//    unsigned int n,m;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    for(int i = 1; n * i < m;i++){
//        printf("%d\n",n*i);
//    }
//    Zad1.4.2
//    printf("Podaj dwie dodatnie liczby\n");
//    unsigned int n,m;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    for(int i = 1; i < m;i++){
//        printf("%d\n",n*i);
//    }
//    Zad1.4.3
//    printf("Podaj trzy liczby ca³kowite:\n");
//    unsigned int n,m,k;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    scanf("%d",&k);
//    for(int i = 1; n * i < k;i++){
//        if(n * i > m){
//            printf("%d\n",n*i);
//        }
//    }
//    Zad1.4.4
//    printf("Podaj liczbê nieujemn¹\n");
//    int n;
//    scanf("%d",&n);
//    if(n < 0){
//        printf("Podana liczba jest ujemna");
//    }
//    else{
//        int silnia = 1;
//        for(int i = 1; i <= n;i++){
//            silnia *= i;
//        }
//        printf("Wynik: %d",silnia);
//    }
//    Zad1.4.5
//    printf("Podaj liczbe nieujemna\n");
//    int n;
//    scanf("%d",&n);
//    if(n < 0){
//        printf("Podana liczba jest ujemna");
//    }
//    else{
//        int wynik = 0;
//        for(int i = 0; i <= n;i++){
//            wynik += i * i;
//        }
//        printf("Wynik: %d",wynik);
//    }
//    Zad1.4.6
//    printf("Podaj liczbe wieksza niz 2\n");
//    int n;
//    scanf("%d",&n);
//    if(n <= 2){
//        printf("Podana liczba nie jest wieksza od 2");
//    }
//    else{
//        int wynik = 1;
//        for(int i = 2;i <= n;i+=2){
//            wynik *= i;
//        }
//        printf("Wynik: %d",wynik);
//    }
//    Zad1.4.7
//    printf("Podaj dwie liczby calkowite\n");
//    int n,m;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    int wynik = 1;
//    for(int i = n;i<=m;i++){
//        wynik *= i;
//    }
//    printf("Wynik: %d",wynik);
//    Zad1.4.8
//    printf("Podaj nieujemna liczbe calkowita\n");
//    int n;
//    scanf("%d",&n);
//    int a = 0;
//    int b = 1;
//    for(int i = 1; i <= n;i++){
//        b += a;
//        a = b-a;
//    }
//    printf("Wynik: %d",b);
//    Zad1.4.9
//    printf("Podaj dwie dodatnie liczby calkowite\n");
//    int n,m;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    if(n > m){
//        int temp = m;
//        m = n;
//        n = temp;
//    }
//    for(int i = n;i > 0;i--){
//        if(n%i==0 && m%i==0){
//            printf("NWD: %d",i);
//            return 0;
//        }
//    }
//    Zad1.4.10
//    printf("Podaj nieujemn¹ liczbe calkowita\n");
//    unsigned int n;
//    scanf("%d",&n);
//    for(int i = 1; i < n;i++){
//        if(i * i > n){
//            printf("Wynik: %d",i-1);
//            return 0;
//        }
//    }
//    Zad1.4.11a
//    printf("Podaj cztery liczby\n");
//    double a,b,c,d;
//    scanf("%lf",&a);
//    scanf("%lf",&b);
//    scanf("%lf",&c);
//    scanf("%lf",&d);
//    int i = 0;
//        if(a < 0){
//                a *= -1;
//        }
//        while(((a * (i * i)) + (b * i) + c) <= d){
//            i++;
//        }
//        printf("Odpowiedz: %d",i);
//    Zad1.4.11b
//    printf("Podaj cztery liczby\n");
//    double a,b,c,d;
//    scanf("%lf",&a);
//    scanf("%lf",&b);
//    scanf("%lf",&c);
//    scanf("%lf",&d);
//    int i = 0;
//            while((5*(i*i)+a*i+b)>=c){
//                i++;
//            }
//            printf("Odpowiedz: %d",i);
//    Zad1.4.11c
//    printf("Podaj cztery liczby\n");
//    double a,b,c,d;
//    scanf("%lf",&a);
//    scanf("%lf",&b);
//    scanf("%lf",&c);
//    scanf("%lf",&d);
//    int i = 0;
//            while((5*(i*i)+a*i+b)>c){
//                i++;
//           }
//            printf("Odpowiedz: %d",i);
//    Zad1.4.12
//    printf("Podaj dodatnia liczbe\n");
//    unsigned int n;
//    scanf("%d",&n);
//    int suma = 0;
//    int flag = 0;
//    for(int i = 1;i < n; i++){
//        flag = 0;
//        for(int j = i; j > 1;j--){
//            if(i%j==0 && n%j==0){
//                flag = 1;
//            }
//
//        }
//        if(flag == 0){
//            suma += i;
//        }
//    }
//    printf("Suma: %d",suma);
//    Zad1.4.13
//    printf("Podaj liczbe calkowita\n");
//    unsigned int n;
//    scanf("%d",&n);
//    int suma = 1;
//    for(int i = 1; i <= n;i++){
//        int silnia = 1;
//        for(int j = 1; j <= i;j++){
//            silnia *= j;
//        }
//        suma += silnia;
//    }
//    printf("Suma: %d",suma);
    Zad1.4.14
    printf("Podaj liczbe calkowita\n");
    int n;
    scanf("%d",&n);
    for(int i = 1; i < n;i++){
        for(int j = 1;j < n;j++){
            for(int k = 1; k < n;k++){
                if((i*i)+(j*j) == (k*k)){
                    printf("%d^2 + %d^2 = %d^2\n",i,j,k);
                }
            }
        }
    }
    return 0;
}
