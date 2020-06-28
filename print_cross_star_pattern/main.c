#include <stdio.h>

int main() {
    for (int i=0; i<17; i++){
        if (i == 8){
            for (int j=0; j<17; j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for (int a=0; a<17; a++){
                if (a == 8){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");

        }
    }

    return 0;
}
