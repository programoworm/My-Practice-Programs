#include<stdio.h>
#include<malloc.h>
#include<conio.h>
typedef struct sll
{
	int data;
	struct sll *link;
}sll;
sll *head=NULL;//(sll*)malloc(sizeof(sll));
//sll *temp=head;
//temp->link=NULL;
int main()
{
	int ch;
	while(1){
		printf("1.Push 2.Pop 3.Show 4.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: show();
					break;
			case 4: return 0;
		}
	}
}
pop(){
	sll *temp,*temp1;
	temp=head;
	if(temp==NULL){
		printf("No element to delete");
	}
	else{
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp1=temp->link;
		free(temp1);
		temp->link=NULL;
	}
}
push()
{
	sll *temp;
	if(head==NULL)
	{
		head=(sll*)malloc(sizeof(sll));
		temp=head;
	}
	else{
		temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=(sll*)malloc(sizeof(sll));
		temp=temp->link;
	}
	printf("Enter the number: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
}
show()
{
	sll *temp;
	if(head==NULL){
		printf("No node to delete");
	}
	else{
		temp=head;
		while(temp->link!=NULL){
			printf("%d\t",temp->data);
			temp=temp->link;
		}
		printf("%d\t",temp->data);
	}
}
