//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		string s;
//		int n;
//		cin >> s >> n;
//		int k = s.size() - n;
//		int max=0;
//		int index = 0;
//		int num = 1;
//		int cut = n;
//		while (num<=k)
//		{
//			for (int i = index; i <= cut; i++)
//			{
//				int temp = s[i] - '0';
//				if (max < temp)
//				{
//					max = temp;
//					index = i;
//				}
//			}
//			cout << max;
//			num++;
//			index++;
//			cut += index;
//			max = 0;
//			if (cut > s.size())
//				cut = s.size();
//		}
//		cout << endl;
//	}
//		
//
//
////	system("pause");
//	return 0;
//}