PROGRAM:
#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=NULL,*temp;
void push(int data);
void pop();
void display();
void main()
{
int no,ch,e;
printf("\n 1 - Push\n 2 - Pop \n 3 - Dipslay\n 4 - Exit");
while (1)
{
printf("\n Enter choice : ");
scanf("%d",&ch);
switch (ch)
{
case 1:printf("Enter data : ");
scanf("%d", &no);
push(no);
break;
case 2:
pop();
break;
case 3:display();
break;
case 4:exit(0);
}
}
}
void push(int d)
{
temp =(struct node *)malloc(1*sizeof(struct node));
temp->data = d;
if (top == NULL)
{
temp->next = NULL;
}
else
{
temp->next = top;
}
