///*
//��n������a1,a2,...an��ÿ����ai�������Ӳ�����2000. �ִ���ѡȡһЩ�������ǵĳ˻��պ���ƽ������
//���ж�������ѡ������ �ٶ�n<=300, ai<=2000
//�⣺
//	ƽ����Ϊ������ż�η��˻������磺
//	36=6^2=2^2*3^2
//	����
//	P1^r1*P2^r2*P3^r3����
//	PiΪ����,riΪż��
//	
//	��n������a���������ӷֽ⣬
//	a1     a2       ... an
//P1 b11*x1 b12*x2     b1n*xn % 2=0        //biΪa1��������pi��ָ��
//P2                                 xnΪ0��1����ʾȡb��ȡ
//..
//Pn
//
//�ɴ˹��ɷ��̣���˹��Ԫ����r������Ԫ�أ���ȥһ��xȫΪ0���������Ϊ2^(n-r)-1
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
//int equ, var;///equ������ var������
//int P[303][301];///�������   1~2000��303������
//int x[1000];///�����Ŀ
//
//int Gauss(int A[][301], int m, int n)//������
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
//bool isPrime(int n)//�ж�N�Ƿ�Ϊ����
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
//	cin >> n;//n��Ԫ��
//	var = n;
//	equ = 303;
//	a = new int[n];
//	for (int i = 0;i < n;i++)
//		cin >> a[i];
//	int T = 2;//��T��������
//	int temp = 0;
//	for (;T <= 2000;T++)
//	{
//		if (isPrime(T))//T������
//		{
//			for (int j = 0;j < n;j++)
//			{
//				int t = 0;//t����ָ��
//				while (a[j]%T==0)
//				{
//					a[j] = a[j] / T;
//					t++;
//				}
//				P[temp][j] = t % 2;//ʹϵ����Ϊ1��0���ڼ���
//			}
//			temp++;
//		}
//	}
//	int r = Gauss(P,temp,n);//��˹��ʽ�������ɱ�Ԫ����
//	int ans = (int(pow(2, n - r)) - 1) % 1000000007;
//
//	cout << ans << endl;
//	delete[]a;
////	system("pause");
//	return 0;
//}