///*
//有n个整数a1,a2,...an，每个数ai的质因子不超过2000. 现从中选取一些数，它们的乘积刚好是平方数。
//问有多少种挑选方案。 假定n<=300, ai<=2000
//解：
//	平方数为质数的偶次方乘积，例如：
//	36=6^2=2^2*3^2
//	即：
//	P1^r1*P2^r2*P3^r3……
//	Pi为质数,ri为偶数
//	
//	对n个整数a做出质因子分解，
//	a1     a2       ... an
//P1 b11*x1 b12*x2     b1n*xn % 2=0        //bi为a1的质因子pi的指数
//P2                                 xn为0或1，表示取b或不取
//..
//Pn
//
//由此构成方程，高斯消元，得r个自由元素，减去一个x全为0的情况，答案为2^(n-r)-1
//*/
//
//
//
//#include <iostream>
//#include <cstring>
//#include <cstdlib>
//#include <cmath>
//using namespace std;
//
//int equ, var;///equ个方程 var个变量
//int P[303][301];///增广矩阵   1~2000有303个素数
//int x[1000];///解的数目
//
//int Gauss(int A[][301], int m, int n)//返回秩
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
//bool isPrime(int n)//判断N是否为素数
//{
//	if (n < 2) return false;
//	if (n == 2) return true;
//	if (n % 2 == 0) return false;
//	for (int i = 3; i*i <= n; i += 2)
//		if (n%i == 0) return false;
//	return true;
//}
//
//int main()
//{
//	int n, *a;
//	cin >> n;//n个元素
//	var = n;
//	equ = 303;
//	a = new int[n];
//	for (int i = 0;i < n;i++)
//		cin >> a[i];
//	int T = 2;//用T来存质数
//	int temp = 0;
//	for (;T <= 2000;T++)
//	{
//		if (isPrime(T))//T是质数
//		{
//			for (int j = 0;j < n;j++)
//			{
//				int t = 0;//t计数指数
//				while (a[j]%T==0)
//				{
//					a[j] = a[j] / T;
//					t++;
//				}
//				P[temp][j] = t % 2;//使系数仅为1与0便于计算
//			}
//			temp++;
//		}
//	}
//	int r = Gauss(P,temp,n);//高斯公式返回自由变元个数
//	int ans = (int(pow(2, n - r)) - 1) % 1000000007;
//
//	cout << ans << endl;
//	delete[]a;
////	system("pause");
//	return 0;
//}