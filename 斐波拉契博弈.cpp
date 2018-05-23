////有一堆石子，A和B轮流从中取一定的石子，但规定：
////第一次不能取完，至少一个；从第二次开始，每个人取的石子数至少为1, 
////至多为对手刚取的石子数的两倍。A先取，问A是否会胜？
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a[100];
//	a[1] = 1;
//	a[2] = 2;
//	for (int i = 3; i < 100; i++)
//		a[i] = a[i - 1] + a[i - 2];
//	int n;
//	cin >> n;
//	for(int i=1;i<100;i++)
//		if (a[i] == n)
//		{
//			cout << "Sha" << endl;
//			return 0;
//		}
//	cout << "Xian" << endl;
//	system("pause");
//	return 0;
//}