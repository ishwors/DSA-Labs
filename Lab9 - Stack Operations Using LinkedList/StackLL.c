#include <stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node node;

void push(node **top, int item){
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = item;
	temp->next = *top;
	*top = temp;
}


int pop(node **top){
	int item = -1;
	node *temp, *temp1;
		
	if(*top == NULL){
		printf("Stack is an Empty.\n");
	}
	
	else{
		temp = *top;
		*top = temp->next;
		item = temp->data;
		free(temp);
	}
	return item;
}

int peek(node **top){
	int item = -1;
	node *temp;
		
	if(*top == NULL){
		printf("Stack is an Empty.\n");
	}
	
	else{
		temp = *top;
	//	*top = temp->next;
		item = temp->data;
	//	free(temp);
	}
	return item;
}



void display(node **top){
	node *temp;
	temp = *top;
	printf("Elements in Dynamic Stack:\n");
	while(temp != NULL){
		printf("%d\n",temp->data);
		temp = temp->next;
	}
}

int main(){
	node *top;
	int ch, item;
	top=NULL;

	
	while(1){
		printf("Enter your choice:\n");
		printf("1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:
				printf("Enter data:");
				scanf("%d", &item);
				push(&top,item);
				break;
			
			case 2:
				item=pop(&top);
				printf("%d is popped.\n",item);
				break;
		
			case 3:
				item=peek(&top);
				printf("%d is top.\n",item);
				break;
							
			case 4:
				display(&top);
				break;
							
			case 5:
				exit(0);

			
			default:
				printf("Invalid choice.\n");
			
		}
	}
}
