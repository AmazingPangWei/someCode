////��֪��n��ʳ����Ҫ���ߣ���Щʳ�Ĵ�1��n�����ų���һ��Ȧ��С���϶�ÿ��ʳ�Ķ���һ��ϲ���̶�ֵVi����Ȼ�����ViС��0��ʱ�򣬱�ʾ������������ʳ�ġ���Ϊ���Ͼ�Ҫ�����ˣ���������ֻ�ܰ�һ�Σ������ܹ���������һ�ε�ʳ�ġ�ʱ������������С���ϰɣ��������ߵ�ʳ��ϲ��ֵ�����
////
////����
////�ж���������ݣ���EOF��β����
////ÿ�����������У���һ����һ��n����ʾ��n��ʳ���ų���һ��Ȧ����1 <= n <= 50000)
////�ڶ��зֱ���n�������������϶Ե�n��ʳ�ĵ�ϲ��ֵVi��(-10 ^ 9 <= Vi <= 10 ^ 9)
////���
////���С�����ܹ����ߵ�ʳ�ĵ�ϲ��ֵ�ܺ͵����
////��������
////3
////3 - 1 2
////5
////- 8 5 - 1 3 - 9
////�������
////5
////7
//
////���Ӵ�������  ���������������
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cstdlib>
//#include <algorithm>
//#define INF 0x3f3f3f3f
//using namespace std;
//
//long long  n;
//long long a[50005];
//long long sum;
//long long solve()
//{
//	long long temp=0;
//	long long MAX = -INF;
//	long long MIN = INF;
//	for (int i = 1;i <= n;i++)
//	{
//		temp += a[i];
//		if (temp > MAX)
//			MAX = temp;
//		if (temp < 0)
//			temp = 0;
//	}
//	for (int i = 1;i <= n;i++)
//	{
//		temp += a[i];
//		if (temp < MIN)
//			MIN = temp;
//		if (temp > 0)
//			temp = 0;
//	}
//	return max(MAX, sum - MIN);
//}
//
//int main()
//{
//	while (cin>>n)
//	{
//		sum = 0;
//		memset(a, 0, sizeof(a));
//		for (int i = 1;i <= n;i++)
//		{
//			cin >> a[i];
//			sum += a[i];
//		}
//		cout << solve() << endl;
//	}
////	system("pause");
//	return 0;
//}