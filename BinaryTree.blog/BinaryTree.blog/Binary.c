#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;



BTNode* GreatTreeNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->val = x;
	node->left = node->right = NULL;
	return node;
}


void PreOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->val);
	PreOrder(root->left);
	PreOrder(root->right);
}


void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->val);	
	InOrder(root->right);
}



void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->val);
}


int TreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return TreeSize(root->left) + TreeSize(root->right) + 1;
}



int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
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
	if (root->val == x)
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



int main()
{
	BTNode* A = GreatTreeNode('A');
	BTNode* B = GreatTreeNode('B');
	BTNode* C = GreatTreeNode('C');
	BTNode* D = GreatTreeNode('D');
	BTNode* E = GreatTreeNode('E');
	BTNode* F = GreatTreeNode('F');
	A->left = B;
	A->right = E;
	B->left = C;
	B->right = D;
	E->right = F;
	//PostOrder(A);
	//printf("%d", TreeSize(A));
	//printf("%d", TreeLeafSize(A));
	printf("%d", TreeLevelSize(A, 3));
	return 0;
}