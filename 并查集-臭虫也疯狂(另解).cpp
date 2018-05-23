//#include <iostream>
//#define maxn 2005
//using namespace std;
//
//int p[maxn]; //p[i]为i的父结点(路径压缩后将指向根节点)
//int r[maxn]; //r[i]=0表示i与p[i]是同性，r[i]=1表示i与p[i]是异性 
//
//int Find(int a) {
//	if (p[a] == -1) return a;
//	int pa = p[a];
//	p[a] = Find(pa);
//	//整个过程中树的高度不会超过3层,  
//	//此处r[a]如果处于第三层,则通过它与直接父节点的性别关系计算出它与根结点的性别关系
//	//如果他处于第二层,则其与根结点的性别关系将保持不变. 
//	r[a] = (r[a] + r[pa]) % 2;
//	return p[a]; //此时p[a]已经指向了根结点，所以返回的是根结点 
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
////		pre[a] = b;//让a并于b
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