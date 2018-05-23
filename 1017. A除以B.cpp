//#include <iostream>
//
//using namespace std;
//
//int push = 0,temp=0;
//
//int fun(char a[], int b[],int n)
//{
//	int i,t=0;
//	int time=0;
//	for (i = 0;i < strlen(a);i++) {
//		t = t * 10 + a[i] - '0';
//		if (t < n) {
//			b[push] = 0;
//			push++;
//		}
//		else {
//			b[push] = t / n;
//			t = t%n;
//			push++;
//		}
//	}
//	return t;
//}
//
//void diy(int b[])
//{
//	int i = 0;
//	while (1)
//	{
//		if (b[i] == 0)
//			temp++;
//		else
//			break;
//		i++;
//	}
//	
//}
//
//int main()
//{
//	char a[1000];
//	int n,b[1000],t;
//	cin >> a;
//	cin >> n;
//	if (strlen(a) == 1 && (a[0] - '0') < n)
//	{
//		cout << 0 << ' ' << a[0] << endl;
//		system("pause");
//		return 0;
//	}
//	t=fun(a, b, n);
//	diy(b);
//	for (int i = temp;i < push;i++)
//		cout << b[i];
//	cout << ' ' << t;
//	system("pause");
//	return 0;
//}