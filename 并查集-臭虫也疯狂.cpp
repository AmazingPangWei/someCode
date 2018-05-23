//#include <cstdio>
//#include <cstring>
//int pre[2002];
//int f[2002];  //根的对象的名称
//
//void Init()
//{
//	for (int i = 1;i <= 2001;i++)
//	{
//		pre[i] = i;
//		f[i] = 0;
//	}
//}
//
//int find(int x)
//{
//	int r = x;
//	while (pre[r] != r)
//		r = pre[r];//找到根结点
//
//	//r现在为根节点
//	int i = x, j;
//	while (i != r)
//	{
//		j = pre[i];//j为中间变量
//		pre[i] = r;//将r赋予pre[i]，使i的上级就为r   压缩路径
//		i = j;
//	}
//	return r;
//}
//
//void mix(int a,int b)//把a和b的集合合并
//{
//	int fx = find(a), fy = find(b);
//	if(fx!=fy)
//		pre[fy] = fx;
//}
//
//int main()
//{
//	int c;
//	int t = 1;
//	scanf("%d", &c);
//	int flag;
//	while (c+1 != t)
//	{
//		
//		flag = 0;
//		int n, m, i;
//		scanf("%d%d", &n,&m);//臭虫数目和配对数目
//		//开始构造并查集
//		int a, b;
//		Init();
//		for (i = 1;i <= m;i++)
//		{
//			if (flag == 0)
//			{
//				scanf("%d%d", &a, &b);
//				int x = find(a);
//				int y = find(b);
//				if (x == y)//属于同一个集合
//					flag = 1;
//				if (f[x] == 0 && f[y] == 0)//a,b对象还未重置
//				{
//					f[x] = y;
//					f[y] = x;
//				}
//				else if (f[x] == 0)//b建立起了性别关系，a没建立  
//				{
//					f[x] = y;//x的异性是y
//					mix(f[y], x);//x一定应该和y的原有异性进行合并，下面同理  
//				}
//				else if (f[y] == 0)//y还未建立关系
//				{
//					f[y] = x;      //y的异性是a
//					mix(f[x], y);  //
//				}
//				else//可能属于不同的集合
//				{
//					mix(f[x], y);
//					mix(f[y], x);
//				}
//			}
//			else
//				scanf("%d%d", &a, &b);
//		}
//		if (flag == 1)
//		{
//	//		cout << "testcase " << t << ':' << "发现同性恋" << endl;
//			printf("testcase %d:发现同性恋\n", t);
//			t++;
//			continue;
//		}
//	//	cout << "testcase " << t << ':' << "没有发现同性恋" << endl;
//		printf("testcase %d:没有发现同性恋\n", t);
//		t++;
//	}
////	system("pause");
//	return 0;
//}