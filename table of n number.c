#include<stdio.h>

void main()
{
    int n, i, result;

    clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }

    getch();
}