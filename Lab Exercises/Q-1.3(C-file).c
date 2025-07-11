#include<stdio.h>
/*
Q-1.3. Write two small programs: one using Procedural Programming (POP) to calculate the area
of a rectangle, and another using Object-Oriented Programming (OOP) withaclass and object for
the same task.

In this file : I used C approach.
*/
int main()
{
	int len,wid,area;
	printf("\nEnter the length of the rectangle : ");
	scanf("%d",&len);
	printf("\nEnter the width of the rectangle : ");
	scanf("%d",&wid);
	
	area = len * wid;
	
	printf("\nThe area of the rectangle is = %d units.",area);
	return 0;
}
