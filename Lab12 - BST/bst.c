#include <stdio.h>
#include <stdlib.h>

struct bsTree
{
	int data;
	struct bsTree *left, *right;
};
typedef struct bsTree bnode;

//bst *link = NULL;






int main()
{
	bnode *link;
	int ch, item, pos;
	link = NULL;
	
	while (1)
	{
		printf("Enter your choice for BST:\n");
		printf("1.Insert a New Node\n2.Delete a Node\n3.Pre-oredr Traversal\n4.In-order Traversal\n5.Post-order Traversal\n6.Exit");
		scanf("%d", &ch);

		switch (ch)
		{

		case 1:
			printf("Enter a node value:");
			scanf("%d", &item);
			insertNewNode(&link, item);
			break;

		case 2:
			item = deleteNode(&link);
			printf("%d is deleted\n", item);
			break;

		case 3:
			printf("Data by Pre-oredr Traversal:");
			traversePre(&link);
			break;

		case 4:
			printf("Data by In-order Traversal:");
			traverseIn(&link);
			break;

		case 5:
			printf("Data by Post-order Traversal:");
			traversePost(&link);
			break;

		case 6:
			exit(0);

		default:
			printf("Invalid choice.\n");
		}
	}
	return 0;
}
