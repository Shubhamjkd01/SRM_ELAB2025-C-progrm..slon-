#include <stdio.h>
int main()
{
int seconds, days, hours, minutes;
scanf("%d",&seconds);
if(seconds < 100 || seconds > 455000)
printf("Invalid input.\n");
else
{
days = seconds / 86400;
seconds = seconds % 86400;
hours = seconds / 3600;
seconds = seconds % 3600;
minutes = seconds / 60;
seconds = seconds % 60;
printf("The Duration is %d days %d hours %d minutes %d seconds\n",days,hours,minutes,seconds);
}
return 0;}
