//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	double array[100002];
//	int N, p;
//	cin >> N >> p;
//	for (int i = 0;i < N;i++)
//		cin >> array[i];
//	sort(array, array+N);
//	int ans = 0;//数组长度
//	int max = 0;
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = i;j < N;j++)
//		{
//			if (j+max+1<=N && array[i] * p - array[j + max + 1] >= 0)//先j+max+1<=N，再array[i] * p - array[j + max + 1] >= 0
//				ans++;
//			else
//				break;
//		}
//		if (max < ans)
//			max = ans;
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}