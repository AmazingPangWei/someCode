//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct goods
//{
//	string name;
//	int price;
//};
//
//bool comp(goods s1, goods s2)
//{
//	if (s1.price > s2.price)
//		return true;
//	else if (s1.price < s2.price)
//		return false;
//	if (s1.name > s2.name)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	int time = 1;
//	while (T + 1 != time)
//	{
//		int N;
//		cin >> N;
//		goods s[1200];
//		for (int i = 0; i < N; i++)
//		{
//			cin >> s[i].name >> s[i].price;
//		}
//		int n;
//		cin >> n;
//		sort(s, s + N, comp);
//		cout << '#' << time << ": " << s[n - 1].name << ' ' << s[n - 1].price << endl;
//		time++;
//	}
//	system("pause");
//	return 0;
//}