//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		//a b c������aΪ��ȫ����Ŀ�Ѫ�ٶ�a%/s,bΪ��ɫ�Ͱ�ȫ���ľ���
//		//cΪ���Ȱ���������
//		int a, b, c;
//		cin >> a >> b >> c;
//		int cost = 6 * a;
//
//		int ans;
//		int sum = 0;
//		int life = 100;
//		while (1)
//		{
//			if (c < 0)
//				break;
//			for (life; life > cost + a; life -= a)
//				sum++;
//			if(c==0)
//				for (life; life > 0; life -= a)
//					sum++;
//			if (sum >= b)
//				break;
//			life = 80;
//			c--;
//		}
//		if (c >= 0)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//
//
////	system("pause");
//	return  0;
//}