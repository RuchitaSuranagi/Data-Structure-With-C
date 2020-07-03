/*1. Write a menu driven program to implement following operations of stack using array.
a. Enqueue()
b. Dequeue()
c. Peek()
d. Display()
e. Size()
f. isEmpty()
g. isFull()*/
#include<stdio.h>
#include<stdlib.h>
#define max 10
void enqueue(int item);
int isfull();
int dequeue();
int isempty();
int peek();
int size();
void display();
int front=-1,rear=-1,item,q_a[max];
int main()
{ int ch,item,n,i;
do{
printf("\n\n1.Enqueue \n2.Dequeue \n3.Display \n4.Size  \n5.isempty\n6.isfull\n7.Peek\n8.Exit\nENTER CHOICE:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nEnter the number of elements to be pushed:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
     { printf("Enter item:");
       scanf("%d",&item);
       enqueue(item);
     }
       break;
case 2: printf("\nDeleted element is:%d\n",dequeue());
        break;
case 3: display();
        break;
case 4: size();
        break;
case 5:
      if(isempty())
      {printf("\nIs Empty");}
      else printf("\nNot Empty");
      break;
case 6:if(isfull())
       printf("\nIs Full");
       else printf("\nNot Full");
       break;
case 7:printf("\nThe top element is:%d\n",peek());
       break;
case 8:exit (1);
default:printf("Please enter valid option:");
    }}while(ch!=8);
    return 0;
}

void enqueue(int item)
{
if(isfull())
{ printf("OVERFLOW!");
}
else
{
front=0;
rear=rear+1;
q_a[rear]=item;
}
}

int isfull()
{
if(rear==max-1)
return 1;
else return 0;
}

int peek()
{ if(isempty())
   {printf("UNDERFLOW!");
    return 0;
   }
return q_a[front];
}
int dequeue()
{ if (isempty())
{
printf("Underflow!");
exit (1);}
item=q_a[front];
front=front+1;
return item;
}

int isempty()
{
if (front==-1||front==rear+1)
 {return 1;}
else return 0;
}
int size()
{
printf("size =%d",(rear-front)+1);
}

void display()
{int i;
if(isempty())
{
printf("\nqueue is empty");
return;
}
for(i=front;i<=rear;i++)
  {printf("%d ",q_a[i]);}
}
