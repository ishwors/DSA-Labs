#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct node *next;
};
typedef struct list node;

void insert_from_beg(node **head, int item){
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = item;
	temp->next = *head;
	*head = temp;
}

void insert_from_end(node **head, int item){
	node *temp, *temp1;
	temp = (node*)malloc(sizeof(node));
	temp->data = item;
	temp->next = NULL;
	
	if(*head = NULL){
		*head = temp;
	}
	
	else{
		temp1 = *head;
		
		while(temp1->next != NULL){
			temp = temp->next;
		}
		temp->next = temp;
	}
}

void insert_from_sp_pos(node **head, int item, int pos){
	int i;
	node *temp, *temp1;
	temp = (node*)malloc(sizeof(node));
	temp->data = item;
	temp1 = *head;
	
	for(i=1; i<pos-1; i++){
		temp1 = temp1->next;
	}
	
	temp->next = temp1->next;
	temp1->next =temp;
}

int del_from_beg(node **head){]
	int item = -1;
	node *item;
	
	if(*head ==NULL)
		printf("List is empty.\n");
	
	else{
		temp = *head;
		*head = temp->next;
		item = temp-data;
		free(temp);
	}
	return item;
}

int del_from_end(node **head){
	int item = -1;
	node *temp, temp1;
	
	if(*head == NULL)
		printf("List is empty:\n");
	
	else if((
	
}


void traverse(node **head){
	node *temp;
	temp = *head;
	printf("Elements in Singly Linked List:\n");
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

void main()
{
	node *head;
	int ch, item, pos;
	head=NULL;
	while(1){
		printf("Enter your choice:\n");
		printf("1.Insert from Start\n2.Insert from End\n3.Insert from nth position\n4.Delete from Start\n5.Delete from End\n6.Delete from nth position \n7.Display \n8.Exit\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:
				printf("Enter data:");
				scanf("%d", &item);
				insert_from_beg(&head, item);
				break;
			
			case 2:
				printf("Enter data:");
				scanf("%d", &item);
				insert_from_end(&head, item);
				break;
			
			case 3:
				printf("Enter position:");
				scanf("%d", &pos);
				printf("Enter data:");
				scanf("%d", &item);
				insert_from_sp_pos(&head, item, pos);
				break;
						
			case 4:
				item=del_from_beg(&head);
				printf("%d is deleted\n",item);
				break;
			
			case 5:
				item=del_from_end(&head);
				printf("%d is deleted\n",item);
				break;
			
			case 6:
				printf("Enter position to be deleted:");
				scanf("%d", &pos);
				item=del_from_sp_pos(&head, pos);
				printf("%d is deleted\n",item);
				break;
				
			case 7:
				traverse(&head);
				break;
			
			case 8:
				exit(0);
			
			default:
				printf("Invalid choice.\n");
			
		}
	}
}
