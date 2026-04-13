#include<stdio.h>
int main(){char gender;scanf("%c",&gender);switch(gender){case 'M':case 'm':puts("Male");break;case 'F':case 'f':puts("Female");break;default:puts("Unspecified Gender");}}
