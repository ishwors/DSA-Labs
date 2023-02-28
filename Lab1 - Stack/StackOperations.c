#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct stack{
	int items[MAX];
	int top;
};
typedef struct stack stack;

void push(stack *s, int elt){
	if(s->top==MAX-1)
		printf("Stack is full.\n");
	
	else{
		s->top++;
		s->items[s->top]=elt;
	}
}

int pop(stack *s){
	int elt = -1;
	if(s->top==-1)
		printf("Stack is empty.\n");
	
	else{
		elt = s->items[s->top];
		s->top--;
	}
	return elt;
}

void display(stack *s){
	int i;
	printf("Elements in Stack:\n");
	for(i=s->top;i>=0;i--)
		printf("%d\n",s->items[i]);
	}

void main(){
	stack s;
	int ch, item;
	s.top=-1;
	
	while(1){
		printf("Enter your choice:\n");
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1:
				printf("Enter data:");
				scanf("%d", &item);
				push(&s,item);
				break;
			
			case 2:
				item=pop(&s);
				printf("%d is popped.\n",item);
				break;
			
			case 3:
				display(&s);
				break;
			
			case 4:
				exit(0);
			
			default:
				printf("Invalid choice.\n");
			
		}
	}
}
