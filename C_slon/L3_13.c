#include<stdio.h>
#define P printf("%d %d\n",firstnum--,++secondnum),printf("%d %d\n",firstnum++,--secondnum),
int main(){int firstnum,secondnum;scanf("%d%d",&firstnum,&secondnum);if((firstnum-1u>499)+(secondnum-1u>499))printf("Invalid input");else P P printf("%d %d",firstnum--,++secondnum);}
