#include<stdio.h>
#include<stdlib.h>

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





int main()
{
	BTNode* A = CreatNode('A');
	BTNode* B = CreatNode('B');
	BTNode* C = CreatNode('C');
	BTNode* D = CreatNode('D');
	BTNode* E = CreatNode('E');
	BTNode* F = CreatNode('F');
	A->left = B;
	B->left = D;
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
	return 0;
}