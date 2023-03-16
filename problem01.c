#include<stdio.h>
void input(float *radius, float *height);
float find_volume(float radius, float height);
void output(float radius,float height,float volume);
int main()
{
  float radius,height,volume;
  input(&radius,&height);
  volume=find_volume(radius,height);
  output(radius,height,volume);
  return 0;
}
void input(float *radius,float *height)
{
  printf("enter the radius:\n");
  scanf("%f",radius);
  printf("enter the height:\n");
  scanf("%f",height);
}
float find_volume(float radius,float height)
{
  float volume;
  volume=2 * 3.14 * radius / height;
  return volume;
}
void output(float radius,float height,float volume)
{
  printf("The volume of the rasgulla with radius %f and height %f is %f",radius,height,volume);
}