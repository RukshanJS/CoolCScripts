#include <stdio.h>

int main() {
    for (int i=0; i<15; i++){
        if (i == 0 || i == 14){
            for (int j=0; j<15; j++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for (int j=0; j<15; j++){
                if (j == 0){
                    printf("*");
                }
                else if (j == 14){
                    printf("*\n");
                }
                else{
                    printf(" ");
                }
            }
        }

    }
}