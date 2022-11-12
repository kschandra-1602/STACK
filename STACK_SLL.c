#include<stdio.h>
void st_dis();
void st_pop();
void st_push();
struct snode
{
	int d;
	struct snode *link;
};
struct snode *top=NULL;
void main()
{
	int i,ch;
	char op;
	do
	{
	printf("\nApplicatio program-STACK\n");
	printf("\n1.Push\n2.Pop\n3.Display\n");
	printf("\n Choose your choice from the above list\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("\npush-operation\n");
		    st_push();
			break;
		case 2:printf("\n pop- operation\n");
			st_pop();
			break;
		case 3:printf("\n Stack- display\n");
			st_dis();
			break;
	}
	printf("\n Ru interested to repeat (y/n)");
	//fflush(stdin);
	scanf("\n%c",&op);
    }while(op=='y');
}
void st_push()
{
	struct snode *nn;
	int item;
	nn=(struct snode*)malloc(sizeof(struct snode));
	if(nn==NULL)
	{
		printf("\n node not created- Ins not pos\n");
	}
	else
	{
		printf("\n enter the element to be inseted\n");
		scanf("%d",&item);
	    nn->d=item;
	    nn->link=top;
	    top=nn;
	}
}
void st_pop()
{
	if(top==NULL)
	{
		printf("\n Stack is empty- del not pos\n");
	}
	else
	{
		printf("\n The deleted element : %d\n",top->d);
		top=top->link;
	}
}
void st_dis()
{
struct snode *ptr;
ptr=top;
while(ptr!=NULL)
{
	printf("%d -",ptr->d);
	ptr=ptr->link;
}
}
