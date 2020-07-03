/*1. Write a menu driven program to implement following operations of stack using array.
a. Push()
b. Pop()
c. Peek()
d. Display()
e. Size()
f. isEmpty()
g. isFull()  */
#include<stdio.h>
#include<stdlib.h>
#define max 10
int s[max];
int top=-1;
void push(int e);
int pop();
int isfull();
int peek();
int isempty();
void display();
int main()
{ int c,n,i,e;
do{
printf("\n\n1.Push\n2.Pop\n3.Is empty \n4.Peek\n5.Is full\n6.Size\n7.Display\n8.Exit\nENTER CHOICE:");
scanf("%d",&c);
switch(c)
{ case 1: printf("\nEnter the number of elements to be pushed:");
          scanf("%d",&n);
          for(i=0;i<n;i++)
        { printf("\nEnter Elements %d:",i+1);
          scanf("%d",&e);
          push(e);
        }
        break;
case 2: printf("\n\nPopped element is:%d\n",pop());
        break;
case 3:if(isempty()==1)
        printf("\nEMPTY\n");
        else
        printf("\nNOT EMPTY\n");
       break;
case 4:printf("\n\nThe top element is:%d\n",peek());
       break;
case 5:if(isfull()==1)
       printf("\nFULL\n");
       else printf("\nNOT FULL\n");
       break;
case 6: printf("The size is %d\n",top+1);
       break;
case 7: display();
       break;
case 8:exit (1);
 default:printf("\nINVALID INPUT\n");
}}while(c!=8);
return 0;
}

int isfull()
{        if(top==max-1)
        return 1;
        else
        return 0;
}

int isempty()
{      if(top==-1)
        return 1;
        else
        return 0;
}

void push(int e)
{
        if(isfull()==1)
        {      printf("\nFULL\n");
                exit(0);
        }
        else
        {     top++;
                s[top]=e;
        }
}

int pop()
{     int temp;
        if(isempty()==1)
                {      printf("\nEMPTY\n");
                        exit(0);
                }
                else
                {      temp=s[top];
                        top--;
                        return (temp);
           }      }
int peek()
{  if(isempty()==1)
                { printf("\nEMPTY\n");
                        exit(0);
                }
                else
                return (s[top]);
}

void display()
{int i;
if(isempty())
{printf("\nstack is empty");
return;
}
for(i=top;i>=0;i--)
{printf("%d ",s[i]);
}  }
