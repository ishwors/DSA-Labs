#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct queue{
	int items[MAX];
	int rear, front;
};
typedef struct queue queue;

void enqueue(queue *q, int item){
	if((q->rear+2)%MAX == q->front)
		printf("Circular queue is full.\n");
	
	else{
		q->rear = (q->rear+1)%MAX;
		q->items[q->rear] = item;
	}
}

int dequeue(queue *q){
	int item = -1;
	
	if((q->rear+1)%MAX == q->front)
		printf("Circular queue is empty. \n");
		
	else{
		item = q->items[q->front];
		q->front =  (q->front+1)%MAX;
	}
	return item;
}

void display(queue *q){
	int i;
	printf("Elements in Circular Queue \n");
	if((q->rear+1)%MAX == q->front)
		printf("...is empty. \n");
	
	else if (q->front <= q->rear){
		for(i = q->front; i <= q->rear; i++)
		printf("%d \n", q->items[i]);
	}
	else{
		for(i=q->front; i<MAX; i++)
			printf("%d \n",q->items[i]);
			
		for(i=0; i<=q->rear; i++)
			printf("%d \n",q->items[i]);
	}	
}

void main(){
	queue q;
	int ch, item;
	q.front = 0;
	q.rear = -1;
	
	while(1){
		printf("Enter your choice in Circular Queue:\n");
		printf("1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY \n4.EXIT\n");
		scanf("%d", &ch);
		
		switch(ch){
			
			case 1:
				printf("Enter data:");
				scanf("%d", &item);
				enqueue(&q, item);
				break;
			
			case 2:
				item = dequeue(&q);
				printf("%d is dequeued.\n",item);
				break;
			
			case 3:
				display(&q);
				break;
			
			case 4:
				exit(0);
			
			default:
				printf("Invalid choice.\n");
			
		}
	}
}
