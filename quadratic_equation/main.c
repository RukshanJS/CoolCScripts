#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float root1, root2, discriminant;
    printf("\nEnter the a : ");
    scanf("%d", &a);
    printf("\nEnter the b : ");
    scanf("%d", &b );
    printf("\nEnter the c : ");
    scanf("%d", &c );

    discriminant = (b * b) - (4 * a * c);

    if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("\nanswers is %f", root1);
    }
    else if (discriminant > 0) {
        root2 = (-b + sqrt(discriminant)) / (2 * a);
        root1 = (-b - sqrt(discriminant)) / (2 * a);
        printf("\nanswers are %f and %f", root1, root2);
    }
    else if (discriminant < 0) {
        printf("\nNo real solution");
    }

    return 0;
}