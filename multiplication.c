#include<stdio.h>
void main()
{
int a[3][3],B[3][3],C[3][3],i,j,k;
printf("Enter Matrix A:");
for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
printf("Enter Matrix B:");
for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
         scanf("%d",&B[i][j]);
        }
    }
for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
            C[i][j]=0;
            for(k=0;k<3;k++)
            {
                C[i][j] += (a[i][k]*B[k][j]);

            }
        }
    }
printf("Multiplication : ");
for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
          {
           printf("%d ",C[i][j]);
          }
     printf("\n");
    }
}
