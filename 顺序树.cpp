//#include<stdio.h>
//#include <iostream>
//using namespace std;
//typedef struct node {
//	char data;
//	int left;
//	int right;
//}node;
//int t = 0;
//node Tree[] = {  //�������������
//	{ 'A', 1,2 },  //ֵ1,2��ʾleft�����Tree[1], right�����tree[2]
//	{ 'B', 3,4 },
//	{ 'X', -1,-1 }, //ֵ-1��ʾ����Ӧ���ӽ��
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
////���������� tree������������������ַ��root�������tree�����и����λ�ã�
////����c��������������ַ����У�n�������������¼���ַ�������
//int main() {
//	int i, n = 0;
//	char c[100];
//	inorder(Tree, 0, c, &n);
//	for (i = 0;i<n;i++)
//		printf("%c ", c[i]);
//	system("pause");
//	return 1;
//}