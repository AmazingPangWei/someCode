////��.���������㷨˼��
////(1)������ͼ��ѡȡһ��û��ǰ��(�����Ϊ0)�Ķ��㣬�����֮;
////(2)������ͼ��ɾȥ�˶����Լ���������Ϊβ�Ļ�;
////�ظ�����������ֱ��ͼ�գ�����ͼ���յ��Ҳ�����ǰ���Ķ���Ϊֹ��
////��.����ʵ��
////�����ڽӾ���ʵ�֣�map[i][j] = 0, ��ʾ�ڵ�i��jû�й���;map[i][j] = 1
////��ʾ���ڱ�<i, j>, ����j����ȼ�1;
//
//#include<iostream>
//#include<stdlib.h>
//#include<stdio.h>
//#define MAX 100
//using namespace std;
//
//void toposort(int map[MAX][MAX], int indegree[MAX], int n)//nΪ�ڵ���
//{
//	int i, j, k;
//	for (i = 0;i<n;i++) //����n��
//	{
//		for (j = 0;j<n;j++) //�ҳ����Ϊ0�Ľڵ�
//		{
//			if (indegree[j] == 0)
//			{
//				indegree[j]--;
//				cout << j << endl;
//				for (k = 0;k<n;k++) //ɾ����ýڵ�����ı�
//				{
//					if (map[j][k] == 1)
//					{
//						indegree[k]--;
//					}
//				}
//				break;
//			}
//		}
//	}
//}
//
//
//int main(void)
//{
//	int n, m; //n:�����ı�����m:�ڵ���
//	while (scanf("%d %d", &n, &m) == 2 && n != 0)
//	{
//		int i;
//		int x, y;
//		int map[MAX][MAX]; //�ڽӾ���
//		int indegree[MAX]; //���
//		memset(map, 0, sizeof(map));
//		memset(indegree, 0, sizeof(indegree));
//		for (i = 0;i<n;i++)
//		{
//			scanf("%d %d", &x, &y);
//			if (!map[x][y])
//			{
//				map[x][y] = 1;
//				indegree[y]++;
//			}
//		}
//		toposort(map, indegree, m);
//	}
//	return 0;
//}