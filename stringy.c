#include <stdio.h>
// %d, %i normal sayi
// %s uzun string , %c tek harf
// %f noktali sayilar

int ft_strlen(char keke[]) {
    int i = 0;
    while(keke[i] != 0) {
        i++;
    }
    return i;
}

int main() {

    // printf("%s %d %d", "kuzey", 6, 100000); 
    // 'k', 'u', 'z', 'e', 'y', 0;
    char a[]= "kuzey";
    char c[] = "maya";
    printf("%s | %d\n", a, c);
    
}