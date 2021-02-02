#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct btnode
{
int value;
struct btnode *1;
struct btnode *r;
}
*root=NULL,*temp=NULL,*t2,*t1;
void insert();
void create();
void search(struct btnode *t)
int flag=1;
void main()
{
int ch;
printf("\nOperetions");
printf("1.Insert an element in to tree");
printf("2.Exit");
while(1)
{
printf("\nenter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
exit(0);
default:
printf("wrong choice,please enter correct choice");
break;
}
}
}
void insert()
{
create();
if(root==NULL)
root=temp;
else
search(root);
}
void create()
{
int data;
printf("Enter data of node to be inserted:");
scanf("%d",&data);
temp=(struct btnode *)malloc(1 *sizeof(struct btnode));
temp->value=data;
temp->1=temp->r=Null;
}
void search(struct btnode *t)
{
if((temp->value>t->value)&&(t->r!=NULL))
search(t->r);
else if((temp->value>t->value)&&(t->r==NULL))
t->r=temp;
else if((temp->value<t->value)&&(t->1!=NULL))
search(t->1);
else((temp->value<t->value)&&(t->1==NULL))
t->1=temp;
}

