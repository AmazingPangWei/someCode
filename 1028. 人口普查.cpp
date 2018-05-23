//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//struct Man
//{
//	int year, mon, day;
//	string name;
//};
//
//bool operator >(Man a, Man b)
//{
//	if (a.year < b.year)
//		return true;
//	else if (a.year == b.year&&a.mon < b.mon)
//		return true;
//	else if (a.year == b.year&&a.mon == b.mon&&a.day <= b.day)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	Man *man;
//	man = new Man[n];
//	Man min = { 2014 ,9,6 };
//	Man max = { 1814,9,6 };
//	Man min_age={ 1814,9,6 };
//	Man max_age= { 2014 ,9,6 };
//	char c;
//	int ans = 0;
//	int temp = 0;
//	for (int i = 0;i < (n-temp);i++)
//	{
//		cin >> man[i].name >> man[i].year >> c >> man[i].mon >> c >> man[i].day;
//		if (man[i] > min && max > man[i])
//		{
//			ans++;
//			if (man[i] > max_age)
//				max_age = man[i];
//			if (min_age > man[i])
//				min_age = man[i];
//		}
//	}
//	if (ans == 0)
//		cout << 0 << endl;
//	else
//		cout << ans << ' ' << max_age.name << ' ' << min_age.name << endl;
//
//	system("pause");
//	return 0;
//}