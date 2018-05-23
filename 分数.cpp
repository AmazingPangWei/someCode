//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int a[1000];//´æĞ¡Êı
//int jump1;
//int jump2;
//bool judge(int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (a[i] == a[n - 1] && a[i + 1] == a[n])
//		{
//			jump2 = i;
//			jump1 = n - 2;
//			return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int N, D;
//	cin >> N >> D;
//	if (N%D == 0)
//	{
//		cout << N / D << endl;
//		return 0;
//	}
//	else
//	{
//		int num = N / D;
//		int temp = N%D;
//		a[0] = temp * 10 / D;
//		temp = temp * 10 % D;
//		if (temp == 0)
//		{
//			cout << num << '.' << a[0] << endl;
//			return 0;
//		}
//		else
//		{
//			a[1] = temp * 10 / D;
//			temp = temp * 10 % D;
//			int i = 2;
//			while (temp != 0)
//			{
//				a[i] = temp * 10 / D;
//				temp = temp * 10 % D;
//				if (judge(i))
//					break;
//				i++;
//			}
//			if (temp == 0)
//			{
//				cout << num << '.';
//				for (int j = 0; j < i; j++)
//					cout << a[j];
//				cout << endl;
//			}
//			else
//			{
//				cout << num << '.';
//				for (int k = 0; k < jump2; k++)
//					cout << a[k];
//				cout << '(';
//				for (int j = jump2; j <= jump1; j++)
//					cout << a[j];
//				cout << ')' << endl;
//
//			}
//		}
//	}
////	system("pause");
//	return 0;
//}