//#include <iostream>
////#include <algorithm>
//#include <stdlib.h>
//#include <cmath>
//
//using namespace std;
//int a[100000];
//int fun(int n)
//{
//	a[0] = 2;
//	a[1] = 3;
//	int i,j,k=2;
//	for (i = 5;i <= n;i++) {
//		for (j = 2;j <=sqrt(i);j++)
//			if (i%j == 0)
//				break;
//		if (j >sqrt(i)) {
//			a[k] = i;
//			k++;
//		}
//	}
//	return k;
////}
//
//int main()
//{
//	int n,i,k,m=0;
//	cin >> n;
//	k=fun(n);
//	for (i = 0;i < k;i++)
//		if (a[i + 1] - a[i] == 2)
//		//cout << a[i] << endl;
//			m++;
//	cout << m << endl;
//	system("pause");
//}