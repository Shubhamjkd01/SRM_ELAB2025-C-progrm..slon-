#include<stdio.h>
int main()
{
    int firstnum,secondnum;
    scanf("%d%d",&firstnum,&secondnum);
    if((firstnum-1u>499)+(secondnum-1u>499))
        printf("Invalid input");
    else
        printf("%d %d\n%d %d\n%d %d\n%d %d\n%d %d",firstnum--,++secondnum,firstnum++,--secondnum,firstnum--,++secondnum,firstnum++,--secondnum,firstnum--,++secondnum);
}
