#include <stdio.h>
int main()
{
    int flag = 1, temp;
    int A[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    for (int i = 1; i < 8 && flag == 1; i++)
    {
        flag = 0;
        for (int j = 1; j < 8 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }
    }
    printf("The sorted sequence is: ");
    for (int k = 0; k < 8; k++)
    {
        printf("%d ", A[k]);
    }
    return 0;
}
