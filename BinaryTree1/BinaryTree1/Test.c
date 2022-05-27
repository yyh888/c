#include"Queue.h"


typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;



void PrevOrder(BTNode* x)
{
	if (x == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", x->data);
	PrevOrder(x->left);
	PrevOrder(x->right);
}




void InOrder(BTNode* x)
{
	if (x == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(x->left);
	printf("%c ", x->data);
	InOrder(x->right);
}



void PostOrder(BTNode* x)
{
	if (x == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(x->left);
	InOrder(x->right);
	printf("%c ", x->data);
}


BTNode* CreatNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	node->data = x;
	node->left = NULL;
	node->right = NULL;
	return node;
}



int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + TreeSize(root->left) + TreeSize(root->right);
}


int LeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return LeafSize(root->left) + LeafSize(root->right);
}



int TreeLevelSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeLevelSize(root->left, k - 1) + TreeLevelSize(root->right, k - 1);
}



BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == x)
	{
		return root;
	}
	BTNode* left = TreeFind(root->left, x);
	if (left)
	{
		return left;
	}
	BTNode* right = TreeFind(root->right, x);
	if (right)
	{
		return right;
	}
	return NULL;
}



void TreeDestroy(BTNode** pproot)
{
	if (*pproot == NULL)
	{
		return;
	}
	TreeDestroy(&(*pproot)->left);
	TreeDestroy(&(*pproot)->right);
	free(*pproot);
	*pproot = NULL;
}


void TreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}


	QueueDestroy(&q);
}



bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		if (front == NULL)
		{
			break;
		}
		else
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
	}

	while (!QueueEmpty(&q))
	{
		BTNode* cur = QueueFront(&q);
		QueuePop(&q);
		if (cur)
		{
			QueueDestroy(&q);
			return false;
		}
	}
	QueueDestroy(&q);
	return true;
}




int main()
{
	BTNode* A = CreatNode('A');
	BTNode* B = CreatNode('B');
	BTNode* C = CreatNode('C');
	BTNode* D = CreatNode('D');
	BTNode* E = CreatNode('E');
	BTNode* F = CreatNode('F');
	BTNode* G = CreatNode('G');
	A->left = B;
	B->left = D;
	B->right = G;
	A->right = C;
	C->left = E;
	C->right = F;
	/*PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");*/
	printf("%d\n", TreeSize(A));
	printf("%d\n", LeafSize(A));
	printf("k = %d\n", TreeLevelSize(A, 2));
	printf("%p\n", TreeFind(A, 'C'));
	TreeLevelOrder(A);
	printf("\n");
	printf("%d\n", BinaryTreeComplete(A));


	TreeDestroy(&A);
	return 0;
}