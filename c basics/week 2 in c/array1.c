#include<stdio.h>
int main()
{ float a[2][2],b[2][2],c[2][2];
    printf("enter the element of the first mattrix\n");
    for(int i=0;i<2;i++)
    for(int j =0;j<2;j++)
    {
        printf("enter a %d%d\t", i+1,j+1);
scanf("%f",&a[i][j]);
    }
      printf("enter the element of the second mattrix\n");
    for(int i=0;i<2;i++)
    for(int j =0;j<2;j++)
    {
         printf("enter b %d%d\t", i+1,j+1);
scanf("%f",&b[i][j]);
    }
      for(int i=0;i<2;i++)
    for(int j =0;j<2;j++)
    {
c[i][j]=a[i][j]+b[i][j];
    }
     printf("sum=\n");
    for(int i=0;i<2;i++)
    for(int j =0;j<2;j++)
    {
printf("%f\t",c [i][j]);
if (j==1)
printf("\n");
    }
    return 0;
  
}