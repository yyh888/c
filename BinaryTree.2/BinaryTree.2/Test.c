#include "BinaryTree.h"


int main()
{
	char* a = "ABD##E#H##CF##G##";
	int i = 0;
	int sz = strlen(a);
	BTNode* root = BinaryTreeCreate(a, sz, &i);
	BinaryTreePrevOrder(root);
	printf("\n");
	printf("%d\n", BinaryTreeSize(root));
	printf("%d\n", BinaryTreeLeafSize(root));
	printf("%d\n", TreeHeight(root));
	printf("%d\n", BinaryTreeLevelKSize(root, 1));
	BTNode* ret = BinaryTreeFind(root, 'C');
	printf("%c\n", ret->_data);
	BinaryTreeLevelOrder(root);
	BinaryTreeDestory(&root);
	return 0;
}