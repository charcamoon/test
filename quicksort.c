#include <stdio.h>

int partition(int a[], int left, int right)
{
    int low, high, x;
    low = left;
    high = right;
    x = a[left];
    while (low < high) {
        while(low < high && a[high] >= x)
            high--;
        if (low < high) {
            a[low] = a[high];
            low++;
        }
        while(low < high && a[low] < x)
            low++;
        if (low <high) {
            a[high] = a[low];
            high--;
        }
    }
    a[low] = x;
    return low;
}

int quicksort(int a[], int low, int high)
{
    int mid;
    if (low < high) {
        mid = partition(a, low, high);
        quicksort(a, low, mid-1);
        quicksort(a, mid+1, high);
    }
}

int main()
{
    int a[] = {1,5,4,2,3,7,6,9,8};
    int i, len;
    len = sizeof(a) / sizeof(int);
    printf("before sort is : \n");
    for (i=0; i<len; i++) 
        printf("%d ", a[i]);
    printf("\n");
    printf("after sort is : \n");
    quicksort(a, 0, len-1);
    for (i=0; i<len; i++) 
        printf("%d ", a[i]);
    printf("\n");


}

