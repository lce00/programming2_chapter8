#include<stdio.h>

int get_sum(int a, int b)
{
        return a + b;
}

int get_diff(int a, int b)
{
    return (a) > (b)? (a) - (b): (b) - (a);

}

int get_mul(int a, int b)
{
    return a * b;
}

float get_div(int a, int b)
{
    return (float) a / b;
}

int main() 
{
      int a, b; 
      printf("Type two integers: "); 
      scanf("%d %d", &a, &b); 

      printf("sum = %d\n", get_sum(a, b)); 
      printf("diff = %d\n", get_diff(a, b));  // 두 수의 차의 절대값이 나와야 함. 
      printf("mul = %d\n", get_mul(a, b)); 
      printf("div = %f\n", get_div(a,b)); // a/b가 나와야 함 (실수 형태로). 

      return 0; 
}
