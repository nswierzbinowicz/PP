#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int abs(int n){
    if(n < 0){
        n *= -1;
    }
    return n;
}
int silnia(int n){
    int wynik = 1;
    for(int i = 1; i <= n;i++){
        wynik *= i;
    }
    return wynik;
}
int szukaj(int n){
    for(int i = n-1; i > 2;i--){
        if(n%i==0){
            return i;
        }
    }
}
int potegaDwa(int n){
    int wynik = 1;
    for(int i = 0; i < n;i++){
        wynik *= 2;
    }
    return wynik;
}
double potegaDwaUjemna(int n){
    if(n == 0){
        return 1;
    }
    else if(n > 0){
        int wynik = 1;
        for(int i = 0; i < n;i++){
            wynik *= 2;
        }
        return wynik;
    }
    else if(n < 0){
        double wynik = 1;
        for(int i = 0; i < abs(n);i++){
            wynik *= 2;
        }
        return 1/wynik;
    }
}
int potegaZlozona(int n,int m){
    if(n != 0 || m != 0){
        if(m == 0){
            return 0;
        }
        else{
            int wynik = 1;
            for(int i = 0; i < m;i++){
                wynik *= n;
            }
            return wynik;
        }
    }
    else{
        return 0;
    }
}
double potegaZlozonaUjemna(int n,int m){
    if(n != 0 || m != 0){
        if(m == 0){
            return 0;
        }
        else if(m > 0){
            int wynik = 1;
            for(int i = 0; i < m;i++){
                wynik *= n;
            }
            return wynik;
        }
        else if(m < 0){
            m *= -1;
            double wynik = 1;
            for(int i = 0; i < m;i++){
                wynik *= n;
            }
            return 1/wynik;
        }
    }
    else{
        return 0;
    }
}
int pierwiastek(int n){
    for(int i = 1; i <= n+1;i++){
        if(i*i > n){
            if(i == 1){
                return 1;
            }
            else {
                return i - 1;
            }
        }
    }
}
int pierwiastekPodlogaNM(int m,unsigned int n){
    for(int i = 1; i <= n+1;i++){
        int dzielnik = 1;
        for(int j = 1; j <= m;j++){
            dzielnik *= i;
        }
        if(dzielnik > n){
            return i-1;
        }
    }
}
int czyWzgledniePierwsza(int m, int n){
    if(m == n){
        return 0;
    }
    else if(m > n){
        for(int i = 2;i <= n;i++){
            if(n%i==0 && m%i==0){
                return 0;
            }
        }
    }
    else if(m < n){
        for(int i = 2;i <= m;i++){
            if(n%i==0 && m%i==0){
                return 0;
            }
        }
    }
}
int sumaMniejszychWzgledniePierwszych(int s){
    int suma = 0;
    for(int i = s-1; i > 1;i--){
        if(czyWzgledniePierwsza(i,s) != 0){
            suma += i;
        }
    }
    return suma;
}
int sumaPodlogPierwiastkow(int n){
    int suma = 0;
    for(int i = 1;i <= n;i++){
        suma += pierwiastek(i);
    }
    return suma;
}
int sumaPodlogPierwiastkowNM(int m, int n){
    int suma = 0;
    for(int i = 1;i <= n;i++){
        suma += pierwiastekPodlogaNM(m,i);
    }
    return suma;
}
void rozkladKwadratowA(int n){
    for(int i = 0;i <= n;i++){
        for(int j = 0; j <= n;j++){
            if(i*i + j*j == n){
                printf("%d^2 + %d^2 = %d^2\n",i,j,n);
            }
        }
    }
}
void rozkladKwadratowB(int n){
    for(int i = 0;i <= n;i++){
        for(int j = i; j <= n;j++){
            if(i*i + j*j == n){
                printf("%d^2 + %d^2 = %d^2\n",i,j,n);
            }
        }
    }
}
void rozkladPotegaMA(int n,int m){
    for(int i = 0;i <= n;i++){
        int potegai = potegaZlozona(i,m);
        for(int j = 0; j <= n;j++){
            int potegaj = potegaZlozona(j,m);
            if(potegai + potegaj == n){
                printf("%d^%d + %d^%d = %d\n",i,m,j,m,n);
            }
        }
    }
}
void rozkladPotegaMB(int n,int m){
    for(int i = 0;i <= n;i++){
        int potegai = potegaZlozona(i,m);
        for(int j = i; j <= n;j++){
            int potegaj = potegaZlozona(j,m);
            if(potegai + potegaj == n){
                printf("%d^%d + %d^%d = %d\n",i,m,j,m,n);
            }
        }
    }
}
int liczydlo(){
    static int i = 0;
    i++;
    printf("Ilosc wywolan: %d\n",i);
}
int pseudoLos(){
    srand(time(NULL));
    int firstVal = rand() % 2;
    int poprzednia;
    int aktualna = 1 - (firstVal * firstVal);
    int i = 1;
    printf("%d liczba ciągu: %d\n",i,firstVal);
    while(1){
        printf("Kolejna liczba ciągu: %d\n",aktualna);
        poprzednia = aktualna;
        aktualna = 1 - (poprzednia * poprzednia);
    }
}
int zliczaj(){
    static int suma = 0;
    printf("Podaj liczbe calkowita: ");
    int a;
    scanf("%d",&a);
    suma += a;
    printf("Suma to: %d\n",suma);
}
int silniaRek( int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * silnia(n-1);
    }

}
int ciagRek(int n){
    if(n == 0){
        return 1;
    }
    else{
        return 2 * ciagRek(n-1) + 5;
    }
}
int ciag2Rek(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return ciag2Rek(n - 1) + 2 + ciag2Rek(n - 2) + 3;
    }
}
int fiboRek(int n){
    int a = 0;
    int b = 1;
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fiboRek(n - 1) + fiboRek(n - 2);
    }
}
int ciag3Rek(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        int a = 0;
        for(int i = 0; i < n;i++){
            a += ciag3Rek(i);
        }
        return a;
    }
}
int ciag4Rek(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else if(n % 2 != 0){
        return n + ciag4Rek(n-1);
    }
    else if(n % 2 == 0){
        return ciag4Rek(n-1) * n;
    }

}
int ciag5Rek(int n){
    if(n == 0 || n == 1 || n == 2){
        return 1;
    }
    else if(n % 3 == 0){
        return ciag5Rek(n - 1) + ciag5Rek(n - 2);
    }
    else if(n % 3 == 1){
        return 5 * (ciag5Rek(n - 1) + ciag5Rek(n - 2)) + 4;
    }
    else if(n % 3 == 2){
        return 5 * (ciag5Rek(n - 1) + ciag5Rek(n - 2)) + 4;
    }
}
int ciag6Rek(int n,int m){
    if(m == 0){
        return n;
    }
    else if(n == 0){
        return m;
    }
    else{
        return ciag6Rek(n - 1,m) + ciag6Rek(n,m-1) + ciag6Rek(n-1,m-1);
    }
}
int main()
{
//    Zad2.2.1
//    printf("Podaj liczbe calkowita\n");
//    int n;
//    scanf("%d",&n);
//    printf("%d",abs(n));
//    Zad2.2.2
//    printf("Podaj liczbe calkowita\n");
//    unsigned int n;
//    scanf("%d",&n);
//    printf("Silnia: %d",silnia(n));
//    Zad2.2.3
//    printf("Podaj liczbe calkowita\n");
//    unsigned int n;
//    scanf("%d",&n);
//    if(n <= 2){
//        return 0;
//    }
//    else {
//        printf("%d",szukaj(n));
//        return 0;
//    }
//    Zad2.2.4
//    printf("Podaj liczbe calkowita\n");
//    unsigned int n;
//    scanf("%d",&n);
//    printf("Potega dwa: %d", potegaDwa(n));
//    Zad2.2.5
//    printf("Podaj liczbe calkowita\n");
//    int n;
//    scanf("%d",&n);
//    printf("Wynik potegowania: %lf", potegaDwaUjemna(n));
//    Zad2.2.6
//    printf("Podaj dwie liczby calkowite\n");
//    unsigned int n,m;
//    scanf("%d\n",&n);
//    scanf("%d",&m);
//    printf("%d^%d = %d",n,m,potegaZlozona(n,m));
//    Zad2.2.7
//    printf("Podaj dwie liczby calkowite\n");
//    int n,m;
//    scanf("%d\n",&n);
//    scanf("%d",&m);
//    printf("%d^%d = %lf",n,m,potegaZlozonaUjemna(n,m));
//    Zad2.2.8
//    printf("Podaj liczbe dodatnia\n");
//    int n;
//    scanf("%d",&n);
//    if(n <= 0){
//        return 0;
//    }
//    else{
//        printf("Podloga pierwiastek: %d", pierwiastek(n));
//    }
//    Zad2.2.9
//    printf("Podaj liczbe calkowita\n");
//    int m;
//    scanf("%d",&m);
//    printf("Podaj liczbe nieujemna\n");
//    unsigned int n;
//    scanf("%d",&n);
//    if(m <= 1){
//        return 0;
//    }
//    else{
//        printf("Pierwiastek %d stopnia z %d to: %d",m,n, pierwiastekPodlogaNM(m,n));
//    }
//    Zad2.2.10
//    printf("Podaj liczbę nieujemna\n");
//    int n;
//    scanf("%d",&n);
//    if(n <= 0){
//        return 0;
//    }
//    else{
//        printf("%d",sumaMniejszychWzgledniePierwszych(n));
//    }
//    Zad2.2.11
//    printf("Podaj liczbę nieujemna\n");
//    int n;
//    scanf("%d",&n);
//    if(n <= 0){
//        return 0;
//    }
//    else{
//        printf("Suma: %d", sumaPodlogPierwiastkow(n));
//    }
//    Zad2.2.12
//    printf("Podaj liczbę nieujemna\n");
//    int n;
//    unsigned int m;
//    scanf("%d",&m);
//    scanf("%d",&n);
//    if(n <= 0){
//        return 0;
//    }
//    else{
//        printf("Suma: %d", sumaPodlogPierwiastkowNM(m,n));
//    }
//    Zad2.2.13
//    printf("Podaj liczbe calkowita\n");
//    int n;
//    scanf("%d",&n);
//    rozkladKwadratowA(n);
//    rozkladKwadratowB(n);
//    Zad2.2.14
//    Zad2.2.15
//    printf("Podaj dwie liczby dodatnie\n");
//    int n;
//    int m;
//    scanf("%d",&n);
//    scanf("%d",&m);
//    rozkladPotegaMA(n,m);
//    rozkladPotegaMB(n,m);
//    Zad2.2.17
//    liczydlo();
//    liczydlo();
//    liczydlo();
//    liczydlo();
//    Zad2.2.18
//    pseudoLos();
//    Zad2.2.19
//    zliczaj();
//    zliczaj();
//    zliczaj();
//    Zad2.2.20
//    printf("%d", silniaRek(5));
//    Zad2.2.21
//    printf("%d", ciagRek(0));
//    Zad2.2.22
//    printf("%d",ciag2Rek(23));
//    Zad2.2.23
//    printf("%d",fiboRek(10));
//    Zad2.2.24
//    printf("%d",ciag3Rek(3 ));
//    Zad2.2.25
//    printf("%d", ciag4Rek(6));
//    Zad2.2.26
//    printf("%d", ciag5Rek(7));
//    Zad2.2.27
    printf("%d",ciag6Rek(6,7));
}

