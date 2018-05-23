//#include <iostream>
//#include <iterator>
//#include <stack>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	stack<int> s;
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		if (s.empty())
//		{
//			s.push(t);
//		}
//		else
//		{
//			int flag = 1;
//			while (!s.empty() && abs(s.top() -  t) == 1)
//			{
//				if (s.top() > t)
//				{
//					s.pop();
//					ans++;
//					flag = 1;
//				}
//				else
//				{
//					flag = 0;
//					ans++;
//					break;
//				}
//			}
//			if (flag)
//				s.push(t);
//		}
//	}
//	cout << ans << endl;
//	//system("pause");
//	return 0;
//}