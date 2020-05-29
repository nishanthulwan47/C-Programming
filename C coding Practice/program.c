#include <stdio.h>

int main()

{
    int sum = 0, a = 0,b = 0;

    for (int i = 3; i <=1000; i++)
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