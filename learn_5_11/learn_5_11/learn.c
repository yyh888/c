#include<stdio.h>
#include<stdlib.h>
#include<math.h>



typedef int BTDateType;

typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDateType date;
}BTNode;


void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->date);
	PrevOrder(root->left);
	PrevOrder(root->right);
}



void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	else
	{
		InOrder(root->left);
		printf("%d ", root->date);
		InOrder(root->right);
		printf("%d ", root->date);
	}
}




void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL");
		return;
	}
	else
	{
		PostOrder(root->left);
		PostOrder(root->right);
		printf("%d ", root->date);
	}
}



BTNode* CreatTreeNode(BTDateType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	node->left = NULL;
	node->right = NULL;
	node->date = x;
	return node;
}


int BTSize(BTNode* root)
{
	return root == NULL ? 0 : BTSize(root->left) + BTSize(root->right) + 1;
}


int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == root->right)
	{
		return 1;
	}
	else
	{
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}
}




int TreeKLevelSize(BTNode* root, BTDateType k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeKLevelSize(root->left, k - 1) +
		TreeKLevelSize(root->right, k - 1);
}


BTNode* TreeFind(BTNode* root, BTDateType x)
{

}



int main()
{
	BTNode* A = CreatTreeNode('A');
	BTNode* B = CreatTreeNode('B');
	BTNode* C = CreatTreeNode('C');
	BTNode* D = CreatTreeNode('D');
	BTNode* E = CreatTreeNode('E');
	BTNode* F = CreatTreeNode('F');
	A->left = B;
	A->right = C;
	B->left = D;
	C->left = E;
	C->right = F;
	//PrevOrder(A);
	//InOrder(A);
	//printf("%d", BTSize(A));
	//printf("%d", TreeLeafSize(A));
	return 0;
}
