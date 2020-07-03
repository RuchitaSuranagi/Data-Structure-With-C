/*Implementation of stack using linked list.*/
#include<stdio.h>
#include<stdlib.h>
struct node
{  int info;
   struct node *link;
};
struct node *front=NULL;
struct node *rear=NULL;
void insert(int item)
{ struct node*tmp;
 tmp=(struct node *)malloc(sizeof(struct node));
 if(tmp==NULL)
 {   printf("MEMORY NOT AVAILABLE\n") ;
     return;
 }
 tmp->info=item;
 tmp->link=NULL;
 if(front==NULL)
  front=tmp;
 else
  rear->link=tmp;
  rear=tmp;
}
int del()
{   int item;
    struct node *tmp;
 if(isempty())
 {  printf("UNDERFLOW\n");
   exit(1);
 }
 tmp=front;
 item=front->info;
 front=front->link;
 free(tmp);
 return item;
}
int isempty()
{   if(front==NULL)
       return 1;
    else
       return 0;
}
int peek()
{   if(isempty())
      { printf("QUEUE UNDERFLOW");
         exit(0);
       }
  printf("%d \n",front->info);
}
void display()
{ struct node *p;
   if(isempty())
  {  printf("QUEUE EMPTY");
    return ;
 }
 p=front;
 while(p!=NULL)
  {    printf("%d\t",p->info);
        p=p->link;
   }
}
void main()
{  int i ,n ,info;
    printf("Enter the choice \n");
 do{printf("1.Insert \n2.Del \n3.Peek \n4.Display \n5.EXIT\nENTER CHOICE:");
	scanf("%d",&n);
	switch(n)
	{
 	case 1:printf("Enter the number\n");
 	scanf("%d",&i);
 	insert(i);
 	break ;
 	case 2:del();
 	break ;
 	case 3: peek();
 	break ;
 	case 4: display();
 	break ;
 	case 5: exit(1);
 	break ;
 	default : printf("WRONG CHOICE\n");
	}
	printf("\n");
   }while(i!=5);
}
