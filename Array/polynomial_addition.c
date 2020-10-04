#include<stdio.h>
void main()
{
 int i,j,sizePoly[2],polynomials[2][100],maxSize=0;
 
 for(i=0;i<2;i++)
 {
  printf("Enter number of terms in Polynomial %d\n",i+1);
  scanf("%d",&sizePoly[i]);
  printf("Enter Elements of Polynomial %d\n",i+1);
  for(j=0;j<sizePoly[i];j++)
  {
   printf("Enter x^%d Co-Efficient of Polynomial %d\n",j,i+1);
   scanf("%d",&polynomials[i][j]);
  }
  if(maxSize<sizePoly[i])
  maxSize=sizePoly[i];
 }
 int sum[maxSize];
 for(i=0;i<maxSize;i++)
 {
  sum[i]=0;
 }
 
 for(i=0;i<2;i++)
 {
  for(j=0;j<sizePoly[i];j++)
  {
   sum[j]+=polynomials[i][j];
  }
 }
 for(i=maxSize-1;i>=0;i--)
 {
  if(i!=0)
  {
   printf("%d x^%d + ",sum[i],i);
  }
  else
  {
   printf("%d x^%d\n",sum[i],i);
  }
 }
}