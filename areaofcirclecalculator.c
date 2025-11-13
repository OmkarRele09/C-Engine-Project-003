#include <stdio.h>
int main(){
float pi , r , area;
pi = 3.14;
printf("Enter the value of r\n");
scanf("%f" , &r);
area = pi*r*r;
printf("Area of a circle is %f" , area);
return 0;
}