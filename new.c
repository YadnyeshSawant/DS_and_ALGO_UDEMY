#include<stdio.h>
#include<stdlib.h>
#include"linklist.h"
void sort();
void main()
{
int ch;
do
{
printf("\n1.Create");
printf("\n2.Display");
printf("\n3.Sort");
printf("\n4.Exit");
printf("\nEnter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:create();
break;
case 2:display();
break;
case 3:sort();
break;
case 4:exit(0);
}
}
while(ch!=4);
}

void sort()
{
int i,j,n,k;
struct node *temp1,*temp2;
 for(i=n-2;i>=0;i--)
	{
		temp1=head;
		temp2=temp1->next;
		for(j=0;j<=i;j++)
		{
			if(temp1->data > temp2->data)
			{
				k=temp1->data;
				temp1->data=temp2->data;
				temp2->data=k;
			}
			temp1=temp2;
			temp2=temp2->next;
		}
	}
}
