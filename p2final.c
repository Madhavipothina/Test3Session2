#include<stdio.h>
typedef struct Fraction
{
int num,den;
}fraction;
fraction input_fraction()
{
  fraction f;
  printf("enter the fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}
fraction find_smallest(fraction f1,fraction f2, fraction f3)
{
  int common_denominator =f1.den*f2.den *f3.den;
  int num1=f1.num*common_denominator/f1.den;
  int num2=f2.num*common_denominator/f2.den;
  int num3=f3.num*common_denominator/f3.den;
  if(num1<num2 &&num1<num3)
    return f1;
  else
  if(num2<num1 &&num2<num3)
    return f2;
  else
  if(num3<num1 &&num3<num2)
   return f3;
} 
void output(fraction f1,fraction f2,fraction f3,fraction smallest)
{
  printf("the smallest among %d/%d, %d/%d ,%d/%d is %d/%d\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}
int main()
{
  fraction f1,f2,f3,smallest;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest=find_smallest(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
}