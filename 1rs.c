// bir fonksiyon yaz sum diye iki int alsin icine ve toplamini dondursun.
// bu fonksiyonu mainin icinde kullan
// ciktiyi terminale bas


#include <stdio.h>

int sum( int a , int b){
    return a+b;
}

int main() {

    int i = sum(10, 20);
    printf("%d",i);
    return 1;
}