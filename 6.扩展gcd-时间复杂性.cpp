////��Ŀ���ݣ�
////����ѭ������ִ��Ƶ�� for (i = A; i != B; i += C) x += 1;
////����A, B, C, i����kλ�޷���������
////��������
////A B C k, ����0<k<32
////
////	�������
////	���ִ��Ƶ���������������������forever��
////
////	��������
////	3 7 2 16
////
////	�������
////	2
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//typedef long long LL;
//
//LL gcd(LL a, LL b)
//{
//	return b == 0 ? a : gcd(b, a%b);
//}
//
//LL ex_gcd(LL a, LL b, LL &x, LL &y)
//{
//	if (b == 0)
//	{
//		x = 1;
//		y = 0;
//		return a;
//	}
//	LL ans = ex_gcd(b, a%b, x, y);
//	LL temp = x;
//	x = y;
//	y = temp - a / b*y;
//	return ans;
//}
//
//int main()
//{
//	LL A, B, C, k;
//	cin >> A >> B >> C >> k;
//
//	LL a, x, b, y, n;
//	a = C;b = pow(2, k);n = B - A;
//	//ԭʽת��ΪA+t*C=B (mod 2^k)  tΪ������ΪҪ�����
//	//t*c+y*2^k=B-A     x��t
//	//����ת��  a=c,x=t,b=2^k,y=y,n=B-A
//	//��ax+by=n������x
//	LL temp = gcd(a, b);
//	if (!A&& !B && !C)
//	{
//		cout << "forever" << endl;
//		return 0;
//	}
//	if (n%temp != 0 || temp==0)
//	{
//		cout << "forever" << endl;
//		return 0;
//	}
//	ex_gcd(a, b, x, y);//���x0,y0
//	x = (n / temp)*x;//xΪ���ã�����һ��Ϊ��С����ֵ
//	LL T = b / temp;//TΪ����
//	x = ( x % T + T ) % T;//ȡ����С����ֵ
//	cout << x << endl;
////	system("pause");
//	return 0;
//}
//
