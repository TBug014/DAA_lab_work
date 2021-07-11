// Write two different  c programs to sorting the following sequence with time complexity O (n).
// 10    20    30    40    50    60    70    80

#include<stdio.h>

#define max 8

int a[11] = {20, 60, 50, 40, 10, 90, 80, 30, 100};
int b[10];

void merging(int low, int mid, int high)
{
   int l1, l2, i;

   for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
   {
      if (a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }

   while (l1 <= mid)
      b[i++] = a[l1++];

   while (l2 <= high)
      b[i++] = a[l2++];

   for (i = low; i <= high; i++)
      a[i] = b[i];
}

void sort(int low, int high)
{
   int mid;

   if (low < high)
   {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid + 1, high);
      merging(low, mid, high);
   }
   else
   {
      return;
   }
}

int main()
{
   int i;

   printf("Enter sorting number :\n");

   for (i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nAfter sorting\n");

   for (i = 0; i <= max; i++)
      printf("%d ", a[i]);
}
