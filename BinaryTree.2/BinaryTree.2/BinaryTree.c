#include "BinaryTree.h"
#include "Queue.h"

BTNode* BuyTreeNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	node->_data = x;
	node->_left = node->_right = NULL;
	return node;
}
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (*pi >= n)
	{
		return NULL;
	}
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	BTNode* node = BuyTreeNode(a[*pi]);
	(*pi)++;
	node->_left = BinaryTreeCreate(a, n, pi);
	node->_right = BinaryTreeCreate(a, n, pi);
	return node;
}
// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	//后序遍历
	if (*root == NULL)
	{
		return;
	}
	BinaryTreeDestory(&(*root)->_left);
	BinaryTreeDestory(&(*root)->_right);
	free(*root);
	*root = NULL;
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->_left == NULL && root->_right == NULL)
	{
		return 1;
	}
	return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
}
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	k--;
	return BinaryTreeLevelKSize(root->_left, k) + BinaryTreeLevelKSize(root->_right, k);
}
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->_data == x)
	{
		return root;
	}
	BTNode* ret = BinaryTreeFind(root->_left, x);
	if (ret)
	{
		return ret;
	}
	ret = BinaryTreeFind(root->_right, x);
	if (ret)
	{
		return ret;
	}
	return NULL;
}
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	BinaryTreePrevOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_right);
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
	printf("%c ", root->_data);
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		BTNode* tmp = QueueFront(&q);
		printf("%c ", tmp->_data);
		QueuePop(&q);
		if (tmp->_left)
		QueuePush(&q, tmp->_left);
		if (tmp->_right)
		QueuePush(&q, tmp->_right);
	}
	QueueDestroy(&q);
}
// 判断二叉树是否是完全二叉树
bool BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, root);
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
			QueuePush(&q, front->_left);
			QueuePush(&q, front->_right);
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
	QueueDestroy(&q, root);
	return true;
}
//深度
int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int left = TreeHeight(root->_left);
	int right = TreeHeight(root->_right);
	return left > right ? left + 1 : right + 1;
}