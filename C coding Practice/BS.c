#include<stdio.h>
#include<stdlib.h>

struct Array {
  int *A;
  int length;
  int size;
};

void Display(struct Array arr) {
  printf("the elements in array are\n");
  for (int i = 0; i < arr.length; i++) {
    printf("%d\n",arr.A[i]);
  }
}

int binarySearch(struct Array arr,int key) {

    int low = 0;
    int high = arr.length-1;
    int mid;

    while (low <= high) {
      mid = low + high / 2;
      if (key == arr.A[mid]) {
        return mid;
      } else if (key < arr.A[mid]) {
        high = mid -1;
      } else {
        low = mid + 1;
      }
    }
    return -1;
}

int recursiveBinary(int a[], int low, int high, int key) {
  int mid;
  if (low <= high) {
     mid = low + high / 2;
    if (key == a[mid]) {
      return mid;
    } else if (key < a[mid]) {
      return recursiveBinary(a,low,mid-1,key);
    } else {
      return recursiveBinary(a,mid+1,high,key);
    }
  }
    return -1;

}

int main()
{
  struct Array arr;
  int i,n;
  printf("Enter size of an array");
  scanf("%d",&arr.size);

  arr.A = (int *)malloc(arr.size * sizeof(int));

  arr.length = 0;
  printf("Enter number of elements");
  scanf("%d",&n);

  printf("Enter all elements\n");
  for (i = 0; i < n; i++) {
    scanf("%d",&arr.A[i]);
  }
  arr.length = n;

  printf("%d\n",recursiveBinary(arr.A,0,arr.length,5));
  Display(arr);

  return 0;
}
