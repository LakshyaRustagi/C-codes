#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};
struct node* insertfirst(struct node *head,int data)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=head;
ptr->data=data;
return ptr;	
}

struct node* insertend(struct node* head,int data)
{
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node* p=head;
	{
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=ptr;
		ptr->next=NULL;
		return head;
	}
}
struct node * insertafter(struct node* head,struct node* prevnode,int data)
{
	struct node * ptr =(struct node*)malloc(sizeof(struct node));
	
	ptr->data=data;
	ptr->next=prevnode->next;
	prevnode->next=ptr;
	return head;
}
	

void traverse(struct node * ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	struct node*head;
	struct node*sec;
	struct node*third;
	head=(struct node*)malloc(sizeof(struct node));
    sec=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    head->data=12;
    head->next=sec;
    sec->data=34;
    sec->next=third;
    third->data=56;
    third->next=NULL;
    //head=insertafter(head, sec , 1);
    //head=insertend(head,45);
    //head = insertfirst(head,69);
    traverse(head);
    return 0;
}
