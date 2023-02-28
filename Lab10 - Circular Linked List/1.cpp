#include <stdio.h>
#include <stdlib.h>

struct list
{
	int data;
	struct list *next;
};
typedef struct list node;
//node *tail;

void insert_from_beg(node **tail,int item)
{
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = item;

	if (*tail == NULL)
	{
		//*tail = temp;
		//(temp->next) = temp;
		temp->next = temp;
		*tail = temp;
		
	}
	else
	{
		temp->next = (*tail)->next;
		(*tail)->next = temp;
	}
}

void insert_from_end(node **tail, int item)
{
	node *temp;
	temp = (node *)malloc(sizeof(node));
	temp->data = item;

	if (*tail = NULL)
	{
		*tail = temp;
		temp->next = *tail;
//		temp->next = NULL;
//		*tail = temp;
	}
	else
	{
		temp->next = (*tail)->next;
		(*tail)->next = temp;
		*tail = temp;
	}
}

void insert_from_sp_pos(node **tail, int item, int pos)
{
	int i;
	node *temp, *temp1;
	temp = (node *)malloc(sizeof(node));
	temp->data = item;
	temp1 = (*tail)->next;

	for (i = 1; i < pos - 1; i++)
	{
		temp1 = temp1->next;
	}

	temp->next = temp1->next;
	temp1->next = temp;
}

int del_from_beg(node **tail)
{
	int item = -1;
	node *temp;

	if (*tail == NULL)
	{
		printf("List is empty.\n");
	}
	else if ((*tail)->next == *tail)
	{
		temp = *tail;
		item = temp->data;
		free(temp);
		*tail = NULL;
	}
	else
	{
		temp = *tail;
		*tail = temp->next;
		item = temp->data;
		free(temp);
	}
	return item;
}

int del_from_end(node **tail)
{
	int item = -1;
	node *temp, *temp1;

	if (*tail == NULL)
	{
		printf("List is empty:\n");
	}
	else if ((*tail)->next == *tail)
	{
		temp = *tail;
		item = temp->data;
		free(temp);
		*tail = NULL;
	}
	else
	{
		temp1 = (*tail)->next;

		while (temp->next != *tail)
			temp1 = temp1->next;

		temp1->next = (*tail)->next;
		temp = *tail;
		*tail = temp;
		item = temp->data;
		free(temp);
	}
}

int del_from_sp_pos(node **tail, int pos)
{
	int i, item = -1;
	node *temp, *temp1;
	temp = (*tail)->next;

	for (i = 1; i < pos; i++)
	{
		temp1 = temp;
		temp = temp->next;
	}

	temp1->next = temp->next;
	item = temp->data;
	free(temp);

	return item;
}

void search(node **tail, int item)
{
	node *temp;
	temp = *tail;
	printf("Your searched element is ");

	if (item == temp->data)
	{
		printf("found.");
	}

	while (temp != NULL)
	{
		if (item == temp->data)
		{
			printf("found.");
		}
		temp = temp->next;
	}
}

//void traverse(node **tail)
//{
//	node *temp;
//	temp = *tail;
//	printf("Elements in Circular Singly Linked List:\n");
//	
//	if(temp==NULL)
//		printf("List is empty\n");
//	
//	else {
//		while (temp!= temp->next)
//		{
//			printf("%d\n", temp->data);
//			temp = temp->next;
//		}
//		printf("%d\n", temp->data);
//	}
//}

void traverse(node **tail){  
    node *temp = *tail;  
    if(temp == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
            printf("%d ", temp->data);  
            temp = temp->next;  
        }while(temp != *tail);  
        printf("\n");  
    }  
}  

int main()
{
	node *tail;
	int ch, item, pos;
	tail = NULL;
	while (1)
	{
		printf("Enter your choice:\n");
		printf("1.Insert from Front\n2.Insert from End\n3.Insert from nth position\n4.Delete from Front\n5.Delete from End\n6.Delete from nth position \n7.Search a Valie:\n8.Display \n9.Exit\n");
		scanf("%d", &ch);

		switch (ch)
		{

		case 1:
			printf("Enter data:");
			scanf("%d", &item);
			insert_from_beg(&tail, item);
			break;

		case 2:
			printf("Enter data:");
			scanf("%d", &item);
			insert_from_end(&tail, item);
			break;

		case 3:
			printf("Enter position:");
			scanf("%d", &pos);
			printf("Enter data:");
			scanf("%d", &item);
			insert_from_sp_pos(&tail, item, pos);
			break;

		case 4:
			item = del_from_beg(&tail);
			printf("%d is deleted\n", item);
			break;

		case 5:
			item = del_from_end(&tail);
			printf("%d is deleted\n", item);
			break;

		case 6:
			printf("Enter position to be deleted:");
			scanf("%d", &pos);
			item = del_from_sp_pos(&tail, pos);
			printf("%d is deleted\n", item);
			break;

		case 7:
			printf("Enter seraching value:");
			scanf("%d", &item);
			search(&tail, item);
			break;

		case 8:
			traverse(&tail);
			break;

		case 9:
			exit(0);

		default:
			printf("Invalid choice.\n");
		}
	}
	return 0;
}
