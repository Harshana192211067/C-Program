#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	float salary,bonus;
	char grade;
	printf("enter the grade:");
	scanf("%c",&grade);
	printf("enter the salary:");
	scanf("%f",&salary);
	if(grade=='A'||grade=='a')
	{
		if(salary>10000)
		bonus=(float)(salary*0.05);
	    else
	    bonus=(float)(salary*0.07);
} 
    if(grade=='B'||grade=='b')
    {
    	if(salary>10000)
    	bonus=(float)(salary*0.1);
    	else
    	bonus=(float)(salary*0.12);
		
	}
	salary+=bonus;
	printf("bonus=%.2f\n salary=%.2f\n",bonus,salary);
}
