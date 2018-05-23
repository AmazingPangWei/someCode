//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int fun(int n, int m)
//{
//	int a=1;
//	int b=1;
//	for (int i = n; i >= m+1; i--)
//		a *= i;
//	for (int i = m-1; i >= 1; i--)
//		b *= i;
//	return a / b;
//}
//
//
//int a[10000];
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int wrong;
//	wrong = fun(N, M);
//	for (int i = 0; i < M; i++)
//		a[i] = i;
//	int tot = 0;
//	do 
//	{
//		int i;
//		for (i = 0; i < M; i++)
//			if (a[i] == i)
//				break;
//		if (i == M)
//			tot++;
//	} while (next_permutation(a, a + M));
//	cout << tot * wrong << endl;
////	system("pause");
//	return 0;
//}