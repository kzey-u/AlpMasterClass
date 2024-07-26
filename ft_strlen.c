#include <stdio.h> 

int ft_strlen(char a[]) {
    int i = 0;
    while(a[i] != 0) {
        i++;
    }
    return i;
}

int randomf2(char a[]) {
    int i = ft_strlen(a);
    return i;
}

int randomf1(char a[]) {
    int i = randomf2(a);
    return i;
}


int main() {
    char a[10];
    scanf("%[^\n]", a);
    int sayi = randomf1(a);
    printf("%d\n",sayi);
    return 1;
}