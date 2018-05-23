//#include <iostream>
//#include <cstring>
//#include <cstdio>
//#define N 100
//#define M 2*N-1
//using namespace std;
//const int INF = 0x3f3f3f3f;
//
//typedef struct
//{
//	int weight;
//	int parent;
//	int LChild;
//	int RChild;
//	char ch;
//}HTNode, HuffmanTree[M + 1];
//
//void Select(HuffmanTree ht, int k, int *s1, int *s2)
//{
//	int i, j;
//	int min1 = INF;
//	int min2 = INF;
//	*s1 = *s2 = -1;
//	for (j = 1;j <= k;j++)
//	{
//		if (ht[j].parent != 0) //找父亲结点为 0的   
//			continue;
//		if (min1 > ht[j].weight) //找到当前最小的那个权值结点   
//		{
//			min2 = min1;
//			min1 = ht[j].weight;
//			*s2 = *s1;
//			*s1 = j;
//		}
//		else if (min1 == ht[j].weight && ht[*s1].ch > ht[j].ch)
//		{
//			min2 = min1;
//			min1 = ht[j].weight;
//			*s2 = *s1;
//			*s1 = j;
//		}
//		else if (min2 > ht[j].weight) //找到第二小的那个权值结点   
//		{
//			min2 = ht[j].weight;
//			*s2 = j;
//		}
//		else if (min2 == ht[j].weight && ht[*s2].ch > ht[j].ch)
//		{
//			min2 = ht[j].weight;
//			*s2 = j;
//		}
//	}
//}
//void CreatHuffmanTree(HuffmanTree ht, int *w, int n,char *str)//数组w中n个权值,str中n个字符
//{
//	int i, m;
//	int s1, s2;//分别储存weight最小的两个点
//	for (i = 1;i <= n;i++)
//	{
//		ht[i].weight = w[i];
//		ht[i].ch = str[i];
//		ht[i].LChild = ht[i].parent = ht[i].RChild = 0;
//	}
//	m = 2 * n - 1;
//	for (i = n + 1;i <= m;i++)
//	{
//		ht[i].weight = ht[i].LChild = ht[i].parent = ht[i].RChild = 0;
//	}
//	for (i = n + 1;i <= m;i++)
//	{
//		Select(ht, i - 1, &s1, &s2);
//		ht[i].weight = ht[s1].weight + ht[s2].weight;
//		ht[s1].parent = i;
//		ht[s2].parent = i;
//		ht[i].ch = ht[s1].ch;
//		ht[i].LChild = s1;
//		ht[i].RChild = s2;
//	}
//}//建哈夫曼树
//
//typedef char *HuffmanCode[N + 1];
//void CrtHuffmanCode(HuffmanTree ht, HuffmanCode hc, int n)
//{
//	int start, c, p;
//	char *cd;
//	cd = new char[n];
//	cd[n - 1] = '\0';
//	for (int i = 1;i <= n;i++)
//	{
//		start = n - 1;
//		c = i;//c始终为孩子坐标
//		p = ht[i].parent;//p始终为双亲坐标
//		while (p != 0)
//		{
//			start--;
//			if (ht[p].LChild == c)
//				cd[start] = '0';
//			else
//				cd[start] = '1';
//			c = p;
//			p = ht[p].parent;
//		}
//		hc[i] = new char[n - start];
//		strcpy(hc[i], &cd[start]);
//	}
//	delete[]cd;
//}
//
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, *weigh;
//		char *c;
//		weigh = new int[n + 1];
//		c = new char[n + 1];
//		if (n == 0)
//			;
//		else
//		{
//			for (i = 1;i <= n;i++)
//			{
//				getchar();
//				c[i] = getchar();
//				scanf("%d", &weigh[i]);
//			}
//			HuffmanTree tree;
//			HuffmanCode hc;
//			CreatHuffmanTree(tree, weigh, n, c);
//			CrtHuffmanCode(tree, hc, n);
//			for (int i = 1;i <= n;i++)
//				printf("%c:%s\n", tree[i].ch, hc[i]);
//			delete[]weigh;
//			delete[]c;
//		}
//	}
//	system("pause");
//	return 0;
//}