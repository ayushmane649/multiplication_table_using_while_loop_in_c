#include <stdio.h>
int main()
{
    int a;
    int b=1;
    printf("enter the number:-\n");
    scanf("%d", &a);
    printf("multiplication table of %d is :-\n\n", a);
    while (b<=10)
    {
        printf("%d X %d = %d\n", a, b, (a*b));
        // b=b+1;
        b++;
    }
    
    return 0;
}
