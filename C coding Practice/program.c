#include <stdio.h>

int main()

{
    int sum,a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",&b);
    for (int i = a; i <=b; i++)
    {
        if (i%3 ==0)
        {
            printf("%d  " ,i);
            sum += i;
        }
        
        if (i%5 ==0)
        {
            printf("%d  " ,i);
            sum += i;
        }  
    }
    printf("\nsum is:%d",sum);
}
