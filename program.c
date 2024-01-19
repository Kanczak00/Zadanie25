#include <stdio.h>
#define PI 3.14

float obliczObjetoscProstopadloscianu(float a, float b, float h) {
    return a * b * h;
}

float obliczObjetoscWalca(float r, float h) {
    return PI * r * r * h;
}

void menuObjetosciProstopadloscianu() {
    float a, b, h;

    printf("Podaj dlugosci prostopadloscianu\n");
    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("h: ");
    scanf("%f", &h);

    printf("Objetosc prostopadloscianu wynosi %f\n", obliczObjetoscProstopadloscianu(a, b, h));
}

void menuObjetosciWalca() {
    float r, h;

    printf("Podaj parametry walca\nPromien: ");
    scanf("%f", &r);
    printf("Wysokosc: ");
    scanf("%f", &h);

    printf("Objetosc walca wynosi %f", obliczObjetoscWalca(r, h));
}

int main() {
    menuObjetosciProstopadloscianu();
    menuObjetosciWalca();
    return 0;
}
