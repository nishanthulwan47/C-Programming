#include<stdio.h>

int main() {
    
    int firstTerm = 0, secondTerm = 1, thirdTerm = 0 , sum = 0 ;

    printf("The value of first term is: %d", firstTerm);
    printf("The Second term is: %d", secondTerm);
    for (int i = 2; i <= 10; i++)
    {
        thirdTerm = firstTerm + secondTerm;
        printf("Third term is: %d\n", thirdTerm);

        firstTerm = secondTerm;
        secondTerm = thirdTerm;

    if (thirdTerm%2 == 0)
    {
        sum += thirdTerm;
    }
    

    }

    printf("The sum is: %d", sum);



    
    
}