#include<stdio.h>
#include <conio.h>
struct employee
{
int empno,salary;
char name[50],depname[50];
 }bd[20];
int main()
{
clrscr();
int i,n,total=0;
printf("Enter number of customers:");
scanf("%d",&n);
for(i=0; i<n; i++) {
	printf("Enter epmloyee id.:");
	scanf("%d",&bd[i].empno);
		printf("Enter employee name.:");
		scanf("%s",&bd[i].name);
	printf("Enter employee department.:");
		scanf("%s",&bd[i].depname);
	printf("Enter employee salary.:");
		scanf("%d",&bd[i].salary);
}
printf(" Empno EmpName Department Salary \n");
for(i=0; i<n; i++) 
{
printf(	"  %d     %s       %s         %d\n",bd[i].empno,bd[i].name,bd[i].depname,bd[i].salary);
}

return 0;
}
