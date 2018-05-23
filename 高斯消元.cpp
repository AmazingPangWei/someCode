//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int Guass(int A[][105], int m, int n)
//{
//	int i = 0, j = 0, k, r, u;
//	while (i < m && j < n)
//	{
//		r = i;
//		for (k = i; k < m; k++)
//			if (A[k][j])
//			{
//				r = k;
//				break;
//			}
//		if (A[r][j])
//		{
//			if (r != i)
//				for (k = 0; k <= n; k++)
//					swap(A[r][k], A[i][k]);
//			for (u = i + 1; u < m; u++)
//				if (A[u][j])
//					for (k = i; k <= n; k++)
//						A[u][k] ^= A[i][k];
//			i++;
//		}
//		j++;
//	}
//	return i;
//}
//
//int main()
//{
//	int a[105][105];
//	a[1][0] = 1;
//	a[1][1] = 1;
//	cout << Guass(a,2,3) << endl;
//	system("pause");
//	return 0;
//}
