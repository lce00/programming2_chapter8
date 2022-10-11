#include<stdio.h>

int is_prime(int num)
{
    int i;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

int print_prime(int number)
{
    for (int i = 2; i <= number; i++)
    {
        if (is_prime(i) == 1) printf("%d\n", i);
    }
    return 0;
}

int main()
{
    int number;
    
    printf("input integer: ");
    scanf("%d", &number);
    
    print_prime(number);
}