#include <windows.h> 
#include <stdio.h> 

int main()
{
    SetConsoleCP(1251);     
    float a, b, d, c, y;

    printf("A=");     
    scanf_s("%f", &a);     
    printf("B=");     
    scanf_s("%f", &b);     
    printf("D=");     
    scanf_s("%f", &d);     
    printf("C=");     
    scanf_s("%f", &c);
    y = a * d / b + 3 * (a * a) - b / (b * b * b) + c;     
    printf("%f", y);     
    return 0;
}
