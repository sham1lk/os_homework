#include<stdio.h>

void quicksort(int *s_arr, int first, int last)
{
    if (first < last)
    {
        int left = first, right = last, middle = s_arr[(left + right) / 2];

       while (s_arr[left] < middle) left++;
            while (s_arr[right] > middle) right--;
            if (left <= right)
            {
                int tmp = s_arr[left];
                s_arr[left] = s_arr[right];
                s_arr[right] = tmp;
                left++;
                right--;
            }
        while (left <= right)
        {
            while (s_arr[left] < middle) left++;
            while (s_arr[right] > middle) right--;
            if (left <= right)
            {
                int tmp = s_arr[left];
                s_arr[left] = s_arr[right];
                s_arr[right] = tmp;
                left++;
                right--;
            }
        } 
        quicksort(s_arr, first, right);
        quicksort(s_arr, left, last);
    }
}

int main()
{
    int A[] = {2,1,3,4,0,6,5};
    quicksort(A,0,6);

    for(int i =0;i<7;i++)
    {
    printf("%d",A[i]);
    }
}