#include <stdio.h>

float obliczObjetoscProstopadloscianu(float a, float b, float h) {
    return a * b * h;
}

void menuObjetosciProstopadloscianu() {
    float a;
    float b;
    float h;

    printf("Podaj dlugosci prostopadloscianu\n");
    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("h: ");
    scanf("%f", &h);

    printf("Objetosc prostopadloscianu wynosi %f", obliczObjetoscProstopadloscianu(a, b, h));
}

int main() {
    menuObjetosciProstopadloscianu();
    return 0;
}
