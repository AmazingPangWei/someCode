//#include <iostream>
//#define maxn 2005
//using namespace std;
//
//int p[maxn]; //p[i]Ϊi�ĸ����(·��ѹ����ָ����ڵ�)
//int r[maxn]; //r[i]=0��ʾi��p[i]��ͬ�ԣ�r[i]=1��ʾi��p[i]������ 
//
//int Find(int a) {
//	if (p[a] == -1) return a;
//	int pa = p[a];
//	p[a] = Find(pa);
//	//�������������ĸ߶Ȳ��ᳬ��3��,  
//	//�˴�r[a]������ڵ�����,��ͨ������ֱ�Ӹ��ڵ���Ա��ϵ���������������Ա��ϵ
//	//��������ڵڶ���,������������Ա��ϵ�����ֲ���. 
//	r[a] = (r[a] + r[pa]) % 2;
//	return p[a]; //��ʱp[a]�Ѿ�ָ���˸���㣬���Է��ص��Ǹ���� 
//}
//
////int find(int x)
////{
////	int r = x;
////	while (r != p[r])
////		r = p[r];
////	
////	int i = x, j;
////	while (i!=r)
////	{
////		j = p[i];
////		p[i] = j;
////		i = j;
////	}
////	return r;
////}
////
////void merge(int a,int b)
////{
////	int fx = find(a);
////	int fy = find(b);
////	if (fx != fy)
////		pre[a] = b;//��a����b
////}
//
//
//int main()
//{
//	for (int i = 1;i <= 5;i++)
//		p[i] = i;
//	int a = Find(5);
//	system("pause");
//	return 0;
//}