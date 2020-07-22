#include<stdio.h>
#include<stdlib.h>

struct Array {
  int *A;
  int length;
  int size;
};

void Display(struct Array arr)
{
  printf("The elements are\n");
  for(int i = 0; i < arr.length; i++)
  {
    printf("%d\n",arr.A[i]);
  }
}

int Delete(struct Array *arr, int index)
{
  int i;
  int x = 0;
  if (index >= 0 && index < arr->length){
    x = arr->A[index];
  }

  for (int i = index; i < arr->length-1; i++) {
    arr->A[i] = arr->A[i+1];
  }
    return x;
}


int main()
{
  struct Array arr;
  int i,n;
  printf("Enter the size of an array");
  scanf("%d",&arr.size);

  arr.A = (int *)malloc(arr.size*sizeof(int));

  arr.length = 0;

  printf("enter the number of numbers");
  scanf("%d",&n);

  printf("Enter all elements\n");

  for (i = 0; i < n; i++)
  {
    scanf("%d",&arr.A[i]);
  }
  arr.length = n;
  Delete(&arr,2);
  Display(arr);

  return 0;
}
