//#include <cstdio>
//#include <cstring>
//int pre[2002];
//int f[2002];  //���Ķ��������
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
//		r = pre[r];//�ҵ������
//
//	//r����Ϊ���ڵ�
//	int i = x, j;
//	while (i != r)
//	{
//		j = pre[i];//jΪ�м����
//		pre[i] = r;//��r����pre[i]��ʹi���ϼ���Ϊr   ѹ��·��
//		i = j;
//	}
//	return r;
//}
//
//void mix(int a,int b)//��a��b�ļ��Ϻϲ�
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
//		scanf("%d%d", &n,&m);//������Ŀ�������Ŀ
//		//��ʼ���첢�鼯
//		int a, b;
//		Init();
//		for (i = 1;i <= m;i++)
//		{
//			if (flag == 0)
//			{
//				scanf("%d%d", &a, &b);
//				int x = find(a);
//				int y = find(b);
//				if (x == y)//����ͬһ������
//					flag = 1;
//				if (f[x] == 0 && f[y] == 0)//a,b����δ����
//				{
//					f[x] = y;
//					f[y] = x;
//				}
//				else if (f[x] == 0)//b���������Ա��ϵ��aû����  
//				{
//					f[x] = y;//x��������y
//					mix(f[y], x);//xһ��Ӧ�ú�y��ԭ�����Խ��кϲ�������ͬ��  
//				}
//				else if (f[y] == 0)//y��δ������ϵ
//				{
//					f[y] = x;      //y��������a
//					mix(f[x], y);  //
//				}
//				else//�������ڲ�ͬ�ļ���
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
//	//		cout << "testcase " << t << ':' << "����ͬ����" << endl;
//			printf("testcase %d:����ͬ����\n", t);
//			t++;
//			continue;
//		}
//	//	cout << "testcase " << t << ':' << "û�з���ͬ����" << endl;
//		printf("testcase %d:û�з���ͬ����\n", t);
//		t++;
//	}
////	system("pause");
//	return 0;
//}