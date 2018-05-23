//#include <iostream>
//using namespace std;
//
//
//int a[1000000];
//int b[1000000];
//int main()
//{
//	int n, MAX = 0,k;
//	cin >> n;
//	cin >> k;
//	int temp;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		if (temp > MAX)
//			MAX = temp;
//		a[temp]++;    //¼ÇÂ¼
//		b[temp] = i;  
//	}
//	int time = 0;
//	int i;
//	for (i = MAX; i >= 0; i--)
//	{
//		if (a[i] != 0)
//			time++;
//		if (time == k)
//			break;
//	}
//	cout << b[i] << endl;
//
////	system("pause");
//	return 0;
//}