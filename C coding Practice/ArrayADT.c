#include<stdio.h>
#include<stdlib.h>

struct Array {
  int *A;
  int length;
  int size;
};

void Display(struct Array arr)
{
  printf("The elements in the Array are\n");
  for ( int i = 0; i < arr.length; i++)
  {
      printf("%d\n",arr.A[i]);
  }

}

int main()
{
  int n, i;
  struct Array arr;
  printf("Enter size of an array");
  scanf("%d",&arr.size);

  arr.A = (int *)malloc(arr.size * sizeof(int));

  arr.length = 0;

  printf("Enter how many numbers");
  scanf("%d",&n);

  printf("Enter all elements\n");
  for ( i = 0; i < n; i++)
  {
    scanf("%d",&arr.A[i]);
  }
  arr.length = n;

  Display(arr);

  return 0;
}
