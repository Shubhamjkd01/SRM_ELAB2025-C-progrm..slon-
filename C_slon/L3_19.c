#include<stdio.h>
#include<math.h>
int main(){int a,b,c,d;float r1,r2,x,y;scanf("%d%d%d",&a,&b,&c);if(a<-20||a>20||b<-20||b>20||c<-20||c>20)printf("Invalid input.");else{d=b*b-4*a*c;switch((d>0)-(d<0)){case 1:r1=(-b+sqrt(d))/(2.0*a),r2=(-b-sqrt(d))/(2.0*a),printf("%.2f and %.2f",r1,r2);break;case 0:r1=r2=-b/(2.0*a),printf("Two equal and real roots exists: %.2f and %.2f",r1,r2);break;case -1:x=-b/(2.0*a),y=sqrt(-d)/(2.0*a),printf("%.2f + i%.2f and %.2f - i%.2f",x,y,x,y);break;}}}
