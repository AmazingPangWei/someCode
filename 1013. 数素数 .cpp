//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int a[20000];
//int fun(int n)
//{
//	a[0] = 2;
//	a[1] = 3;
//	int i, j, k = 2;
//	for (i = 5;i <= n;i++) {
//		for (j = 2;j <= sqrt(i);j++)
//			if (i%j == 0)
//				break;
//		if (j >sqrt(i)) {
//			a[k] = i;
//			k++;
//		}
//	}
//	return k;
//}
//
//int main()
//{
//	int k,i,m,n,t,x;//t,x¼ÆÊý
//	cin >> m >> n;
//	k = fun(200000);
//	t = m-1;
//	x = 0;
//	for (i = m - 1;i < n;i++) {
//		cout << a[i];
//		t++;
//		x++;
//		if (x % 10 == 0)
//			cout << endl;
//		else if (t != n)
//			cout << ' ';
//	}		
//	system("pause");
//	return 0;
//}