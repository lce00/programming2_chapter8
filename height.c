#include<math.h>
#include<stdio.h>

int get_height()
{
    double d, a, b, degrees, radians;

    printf("변 a: ");
    scanf("%lf", &a);

    printf("각도: ");
    scanf("%lf", &d);

    radians = d * (3.141592 / 180.0);

    b = sin(radians) * a;
    printf("삼각형의 높이: %lf\n", b);

    return b;
}

int main(void)
{
    printf("&lf", get_height());
}