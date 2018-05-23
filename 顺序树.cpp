//#include<stdio.h>
//#include <iostream>
//using namespace std;
//typedef struct node {
//	char data;
//	int left;
//	int right;
//}node;
//int t = 0;
//node Tree[] = {  //结点存放在数组中
//	{ 'A', 1,2 },  //值1,2表示left结点是Tree[1], right结点是tree[2]
//	{ 'B', 3,4 },
//	{ 'X', -1,-1 }, //值-1表示无相应孩子结点
//	{ 'E',-1,-1 },
//	{ 'F',-1,-1 }
//};
//int inorder(node * tree, int root, char c[], int *n)
//{
//	if (root!=-1)
//	{
//		inorder(tree, tree[root].left, c, n);
//		c[*n] = tree[root].data;
//		(*n)++;
//		inorder(tree, tree[root].right, c, n);
//	}
//	return 1;
//}
////上述函数中 tree是输入的树所在数组地址，root是输入的tree数组中根结点位置，
////数组c保存中序输出的字符序列，n保存中序输出记录的字符个数。
//int main() {
//	int i, n = 0;
//	char c[100];
//	inorder(Tree, 0, c, &n);
//	for (i = 0;i<n;i++)
//		printf("%c ", c[i]);
//	system("pause");
//	return 1;
//}