#include <stdio.h>
// 1    0
//True  false
//      0

// not !

int birver(int Kuzkuzkuzey, int ardarda) {
    int c = Kuzkuzkuzey * ardarda;
    return c;
}

int kuzey(int kuzey, int arda) {
    int t = kuzey - arda;
    return t;
}




int main() {

    // int a;
    // scanf("%d",&a);
    // if (a) {
    //     printf("Dogru\n");
    // }
    // else {
    //     printf("Yanlis\n");
    // }
    int b = 25;
    int c = 5;
    int a = kuzey(b,c);
    printf("%d\n", a);

    return 1;
}