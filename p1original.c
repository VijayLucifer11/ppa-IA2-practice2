
#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base \n");
  scanf("%f",base);
  printf("Enter the height \n");
  scanf("%f",height);
}

void find_ar(float base,float height,float *area)
{
  *area=1/2*base*height;
}

void output(float base,float height,float area)
{
  printf("The area of triangle with base %f and height %f is %f\n",base,height,area);

}

int main()
{
  float base,height,area;
  input(&base,&height);
  find_ar(base,height,&area);
  output(base,height,area);
  return 0;
}