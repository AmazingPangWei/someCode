//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int Year[13] = {0, 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int R_Year[13] = { 0, 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	int tot = 0;
//	cin >> year >> month >> day;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		for (int i = 1; i < month; i++)
//			tot += R_Year[i];
//		tot += day;
//		cout << tot << endl;
////		system("pause");
//		return 0;
//	}
//	for (int i = 1; i < month; i++)
//		tot += Year[i];
//	tot += day;
//	cout << tot << endl;
////	system("pause");
//	return 0;
//}