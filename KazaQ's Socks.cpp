//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	int t = 1;
//	while (cin >> n >> k)
//	{
//		int num = 0;
//		int time, G = 0;//G�ж��Ƿ�ϴ������
//		int *c, *x;//��ʾ���Ӵ���ϴ
//		x = new int[n + 1];
//		c = new int[n + 1];
//		for (int i = 1;i <= n;i++)
//		{
//			c[i] = 1;
//			x[i] = 0;
//		}
//		time = n - 1;//time��ϴһ��
//		for (int i = 1;i < k;i++)
//		{
//			if (G == 0)
//			{
//				for (int j = 1;j <= n;j++)
//				{
//					if (c[j] == 1 && G == 0)
//					{
//						c[j] = 0;//������
//						x[j] = 1;//Ҫϴ������
//						break;
//					}
//				}
//			}
//			if (G == 1)
//			{
//				for (int j = 1;j <= n;j++)
//					if (c[j] == 0)//ϴ����
//					{
//						c[j] = 1;
//						x[j] = 0;
//					}
//					else//�Ž���ϴ������
//					{
//						c[j] = 0;
//						x[j] = 1;
//					}
//				G = 0;
//			}
//			if (i%time == 0)
//			{
//				G = 1;//��Ҫϴ������
//			}
//		}
//		for (int i = 1;i <= n;i++)
//			if (c[i] == 1)
//			{
//				cout << "Case #" << t << ": " << i << endl;
//				break;
//			}
//		t++;
//		delete[]c, x;
//	}
////	system("pause");
//	return 0;
//}