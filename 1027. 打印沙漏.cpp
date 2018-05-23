//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	int n,j,i,k,t,sum=1,temp=0;
//	char x;
//	cin >> n;
//	cin >> x;
//	if (n >= 1 && n < 7) {
//		cout << x << endl;
//		cout << n - 1;
//	}
//	else {
//		for (i = 3;;i = i + 2)
//		{
//			if (sum + i * 2 <= n)
//				sum = sum + i * 2;
//			else
//				break;
//		}
//		sum = n - sum;
//		t = i - 2;
//		for (i = t;i >= 1;i = i - 2) {
//			for (k = 0;k < temp;k++)
//				cout << ' ';
//			for (j = 0;j < i;j++)
//				 cout<< x;
//			temp = temp + 1;
//			cout << endl;
//		}
//		temp = temp - 2;
//		for (i = i + 4;i <= t;i=i+2) {
//			for (k = 0;k < temp;k++)
//				cout << ' ';
//			for (j = 0;j < i;j++)
//				cout << x;
//			cout << endl;
//			temp -= 1;
//		}
//		cout << sum ;
//	}
//	system("pause");
//	return 0;
//}