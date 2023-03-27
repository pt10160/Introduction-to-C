#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, d, root1, root2 ;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (a == 0;
        printf("Error")
    }

    else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %lf;", root1);
    }

    else {
    del > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %lf and root2 = %lf", root1, root2)
    }

    return 0;
}
