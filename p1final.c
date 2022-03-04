#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("enter numerators of two numbers\n");
  scanf("%d %d",num1,num2);
  printf("enter denominator of two numbers\n");
  scanf("%d %d",den1,den2);
}
void add(int num1, int den1,int num2,int den2,int *num3,int *den3)
{
 int gcd,lcm,i;
  *num3=(num1*den2)+(num2*den1);
  *den3=(den1*den2);
  for(i=1;i<=den1 && i<=den2;++i)
    {
      if(den1%i==0 && den2%i==0)
        gcd=i;
    }
  *num3=*num3/gcd;
  *den3=*den3/gcd;    
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf(" sum of %d/%d + %d/%d = %d/%d \n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}