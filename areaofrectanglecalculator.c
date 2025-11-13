#include <stdio.h>
int main(){
int area , length , breadth;
printf("Enter length\n");
scanf("%d" , &length);
printf("Enter breadth\n");
scanf("%d" , &breadth);
area = length*breadth;
printf("The area of the rectangle is %d" , area);    
return 0;
}