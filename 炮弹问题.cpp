//#include <iostream>
//using namespace std;
//
//typedef struct Node   //dataΪ���ݣ�GΪ�б��Ƿ񱻱�����0Ϊδ������1Ϊ����
//{
//	int data;
//	int G;
//}shell;
//
//void TX(shell *p, int n)
//{
//	int time = 0, sum = 0, i , t ;//time��ʾ�ܴ�����sum��ʾ������G������,tΪ�����±���м����
//	while (sum != n) 
//	{
//		t = 0;
//		while (p[t].G == 1)
//			t++;
//		time++;
//		for (i = t;i < n;i++)
//		{
//			if (p[i].G == 0 && p[t].data >= p[i].data)
//			{
//				p[i].G++;
//				sum++;
//				t = i;
//			}
//		}
//	}
//	cout << time << endl;
//
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	while (n!=-1)
//	{
//		shell *p;
//		int i;
//		p = new shell[n];
//		for (i = 0;i < n;i++) {
//			cin >> p[i].data;
//			p[i].G = 0;
//		}
//		TX(p, n);
//		delete[] p;
//		cin >> n;
//	}
//	system("pause");
//	return 0;
//}