//#include <iostream>
//#include <set>
//#include <cstring>
//#include <iterator>
//using namespace std;
//
//typedef long long LL;
//set<LL> num;
//
//
//
//int main()
//{
//	long long n;
//	long long k;
//	long long i;
//	cin >> n >> k;
//	long long sum = 1;
//	if (k == 1)
//	{
//		cout << 1 << endl;
//		return 0;
//	}
//	LL t = n;
//	for (LL i = 2; i <= t; i++)//·Ö½â
//		if (t%i == 0)
//		{
//			num.insert(i);
//			t /= i;
//			i = 1;
//		}
//	set<LL>::iterator j;
//	for (LL i = 2; i <= n; i++)
//	{
//		j = num.begin();
//		for (j; j != num.end(); j++)
//		{
//			if (i % (*j) == 0)
//				break;
//		}
//		if (j == num.end())
//			sum++;
//		if (sum == k)
//		{
//			cout << i << endl;
//			break;
//		}
//	}
////	system("pause");
//	return 0;
//}