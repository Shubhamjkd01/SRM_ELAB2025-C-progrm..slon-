#include<stdio.h>
int main(){
int side1, side2, side3;
scanf("%d%d%d",&side1,&side2,&side3);
if((side1-1u>99)+(side2-1u>99)+(side3-1u>99))printf("Invalid input.");
else if(side1==side2&&side2==side3)printf("Equilateral triangle.");
else if(side1==side2||side2==side3||side1==side3)printf("Isosceles triangle.");
else printf("Scalene triangle.");
}
