#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};
typedef struct node node;


void enqueue(node **front, node **rear, int item){
	node *temp;
	temp = (node*) malloc(sizeof(node));
	temp->data = item;
	temp->next = NULL;
	
	if(*front == NULL){
		*front = temp;
		*rear = temp;
	}
	else{
		(*rear)->next = temp;
		*rear = temp;
	}
}                                                                 

int dequeue(node **front, node **rear){
	node *temp;
	int item;
	
	if(*front == NULL)
		printf("Dynamic Queue is empty. \n");
		
	else if(*front == *rear){
		*front = NULL;
		*rear = NULL;
		item = temp->data;
		free(temp);
	}
	
	else{
		*front = temp->next;
		item = temp->data;
		free(temp);
	}
	return item;
}

void display(node *front){
	node *temp;
    temp = front;
    printf("\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
	
}

void main(){
	node n;
	int ch, item;
	node *front = 0;
	node *rear = -1;
	
	while(1){
		printf("Enter your choice:\n");
		printf("1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY \n4.EXIT\n");
		scanf("%d", &ch);
		
		switch(ch){
			
			case 1:
				printf("Enter data:");
				scanf("%d", &item);
				enqueue(&front, &rear, item);
				break;
			
			case 2:
				item = dequeue(&front, &rear);
				printf("%d is dequeued.\n",item);
				break;
			
			case 3:
				display(&n);
				break;
			
			case 4:
				exit(0);
			
			default:
				printf("Invalid choice.\n");
			
		}
	}
}
