#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<limits.h>
#define CAPACITY 10000
struct stack
{
int data;
struct stack *next;
}
*top;
int size=0;
void push(int element);
int pop();
void main()
{
int choice,data;
clrscr();
while(1)
{
printf("1.push\n");
printf("2.pop\n");
printf("3.size\n");
printf("4.exit\n");
printf("5.enter yuor choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter data to push into stack:");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
if(data!=INT_MIN)
printf("data=>%d\n",data);
break;
case 3:
printf("stack size:%d\n",size);
break;
case 4:
printf("exit from app\n");
exit(0);
break;
default:
printf("invalid choice,pls try again\n");
}
printf("\n\n");
}
}
void push(int element)
{
struct stack * newNode=(struct stack *) malloc(sizeof(struct stack));
if(size>=CAPACITY)
{
printf("stack overflow");
return;
}
newNode->data=element;
newNode->next=top;
top=newNode;
size++;
printf("data pushed to stack\n");
}
int pop()
{
int data=0;
struct stack * topNode;
if(size<=0|| !top)
{
printf("stack is empty\n");
return INT_MIN;
}
topNode=top;
data=top->data;
top=top->next;
free(topNode);
size--;
return data;
}




