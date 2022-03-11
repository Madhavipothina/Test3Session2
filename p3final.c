#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  scanf("%d%d",n,r);
}
int ncr(int n,int r)
{
 int i, fact_n=1, fact_r=1, fact_n_r=1, nCr;
  for (i=1;i<=n;i++) 
    fact_n=fact_n*i;
  for (i=1;i<=r;i++)
    fact_r=fact_r*i;
  for (i=1;i<=n-r;i++)
    fact_n_r=fact_n_r*i;
  nCr=fact_n/fact_r*fact_n_r;
    return nCr;
}
void output(int n,int r,int result)
{
  printf("combinations of %d and %d is %d\n",n,r,result);
}
int main()
{
  int n,r,result;
  printf(" Enter total number of objects and number of objects you choose\n ");
  input_n_and_r(&n,&r);
  result=ncr(n,r);
  output(n,r,result);
  return 0;
}