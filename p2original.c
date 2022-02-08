#include<stdio.h>
int input()
{
  int n;
  printf("Enter the side of the triangle\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  int scalene;
  if((a!=b)&&(b!=c))
  {
  scalene=1;
  }
  else 
  {
  scalene=0;
  }
  return scalene;
}
int output(int scalene)
{
  if(scalene==1)
{
 printf("The triangle is scalene:\n");
}
else if(scalene==0)
{
  printf("The triangle is not scalene:\n");
}
}
int main()
{
  int a,b,c,scalene;
  a=input();
  b=input();
  c=input();
  scalene=check_scalene(a,b,c);
  output(scalene);
  return 0;
}