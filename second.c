#include <stdio.h>
// kosullar
// if , else if , else

int main() {

    while(1) {
        int silah_kodu;
        printf("Lutfen bir silah kodu giriniz: ");
        scanf("%d",&silah_kodu);

        if (silah_kodu == 0) {
            printf("Spectre\n");
        }
        else if (silah_kodu == 1) {
            printf("vandal\n");  
        }
        else if (silah_kodu == 2) {
            printf("odin\n");  
        }
        else if (silah_kodu >= 9) {
            break;
        }
        else {
            printf("Bu bir silah degildir\n");
        }
    }
    printf("Program bitti\n");
    return 0;
}