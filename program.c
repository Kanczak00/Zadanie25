#include <stdio.h>

float a;
float b;
float h;

float obliczObjetoscProstopadloscianu(float a, float b, float h) {
    return a * b * h;
}


void menuObjetosciProstopadloscianu() {
    printf("Podaj d³ugosci prostopadloscianu\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("h: ");
    scanf("%f", &h);
    printf("ObjetoscProstopadloscianu wynosi %f", obliczObjetoscProstopadloscianu(a, b, h));
}


int main() {
    menuObjetosciProstopadloscianu();

    return 0;
}
