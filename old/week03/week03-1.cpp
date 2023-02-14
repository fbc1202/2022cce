#include <stdio.h>
int main()
{
    int a, b;
    printf("請輸入2個數字: ");
    scanf("%d%d", &a, &b);

    printf("%d+%d是%d\n", a, b, a+b);
    printf("%d-%d是%d\n", a, b, a-b);
    printf("%d*%d是%d\n", a, b, a*b);
    printf("%d/%d是%d\n", a, b, a/b);
    printf("%d除法%d的餘數是%d\n", a, b, a%b);
}
