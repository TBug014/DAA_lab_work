// Write two different  c programs to sorting the following sequence with time complexity O (n).
// 10    20    30    40    50    60    70    80

#include <stdio.h>
int main()
{
 int key;
 int A[8]={10,20,30,40,50,60,70,80};
 for(int i=2; i<=8; i++)
 {
 key=A[i];
 for(int j=i-1; j>0 && A[j]>key; j--)
 {
 A[j+1]=A[j];
 A[j+1]=key;
 }
 }
 printf("The sorted sequence is: ");
 for(int k=0;k<8;k++)
 {
 printf("%d ",A[k]);
 }
 return 0;
}
