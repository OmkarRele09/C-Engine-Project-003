#include <stdio.h>
int main(){
int base , height;
float a , area;
a = 0.5;
printf("Enter the value of base\n");
scanf("%d" , &base);
printf("Enter the value of height\n");
scanf("%d" , &height);
area = a*base*height;
printf("Area of a triangle is %f" , area);
return 0;
}