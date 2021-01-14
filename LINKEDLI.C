#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
struct node *prev;
struct node *next;
int data;
};
struct node *head;
void insertion_begining();
void insertion_last();
void insertion_specified();
void display();
void main()
{
int choice=0;
clrscr();
while(choice!=9)
{
printf("\n*****MAIN MENU*****\n");
printf("\nchoose one option from the following list\n");
printf("\n==============================================================");
printf("\n1.insertion at the beginig\n2.insertion at the last\n3.insertion at any random location\n4.delete from beginig\n5.delete from last\n6.delte the node after the given data\n7.search\n8.show\n9.exit\n");
printf("enter your choice\n");
scanf("\n%d",&choice);
switch(choice)
{
case 1:
insertion_begining();
break;
case 2:
insertion_last();
break;
case 3:
insertion_specified();
break;
case 8:
display();
break;
case 9:
break;
default:
printf("please enter valid choice\n");
}
}
getch();
}
void insertion_begining()
{
struct node *ptr;
int item;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow");
}
else
{
printf("enter item value\n");
scanf("%d",&item);
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
ptr->data=item;
head=ptr;
}
else
{
ptr->data=item;
ptr->prev=NULL;
ptr->next=head;
head->prev=ptr;
head=ptr;
}
printf("\nnode inserted\n");
}
}
void insertion_last()
{
struct node *ptr,*temp;
int item;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("overflow");
}
else
{
printf("enter value");
scanf("%d",&item);
ptr->data=item;
if(head==NULL)
{
ptr->next=NULL;
ptr->prev=NULL;
head=ptr;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->prev=temp;
ptr->next=NULL;
}
}
printf("\n node inserted\n");
}
void insertion_specified()
{
struct node *ptr,*temp;
int item,loc,i;
ptr=(struct node *)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\noverflow");
}
else
{
temp=head;
printf("enter the location");
scanf("%d",&loc);
for(i=0;i<loc;i++)
{
temp=temp->next;
if(temp==NULL)
{
printf("\n there are lessthan %d elements",loc);
return;
}
}
printf("enter value");
scanf("%d",&item);
ptr->data=item;
ptr->next=temp->next;
ptr->prev=temp;
temp->next=ptr;
temp->next->prev=ptr;
printf("\nnode inserted\n");
}
}
void display()
{
struct node *ptr;
printf("\nprinting values.....\n");
ptr=head;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->next;
}
}
