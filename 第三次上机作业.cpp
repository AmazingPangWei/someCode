//#include <iostream>
//using namespace std;
//
//class Data
//{
//private:
//	int year, month, day;
//public:
//	Data() {};
//	Data(int y,int m,int d):year(y),month(m),day(d){}
//	Data operator +(Data & d)
//	{
//		Data t;
//		t.day = day + d.day;
//		t.day = t.day % 30;
//		t.month = month + d.month + t.day/30;
//		t.month = t.month % 12;
//		t.year = year + d.year + t.month / 12;
//		return t;
//	}
//	Data operator +(int d)
//	{
//		Data t;
//		t.day = day + d;
//		t.day = t.day % 30;
//		t.month = month + d + t.day / 30;
//		t.month = t.month % 12;
//		t.year = year + d + t.month / 12;
//		return t;
//	}
//	Data operator -(Data & d)
//	{
//		Data t;
//		t.day = day - d.day;
//		if (t.day < 0) {
//			t.month--;
//			t.day += 30;
//		}
//		t.month = month - d.month;
//		if (t.month < 0)
//		{
//			year--;
//			t.month += 12;
//		}
//		t.year = year - d.year;
//		return t;
//	}
//	Data operator -(int d)
//	{
//		Data t;
//		t.day = day - d;
//		if (t.day < 0) {
//			t.month--;
//			t.day += 30;
//		}
//		t.month = month - d;
//		if (t.month < 0)
//		{
//			year--;
//			t.month += 12;
//		}
//		t.year = year - d;
//		return t;
//	}
//	int Getyear()
//	{
//		return year;
//	}
//	int Getmonth()
//	{
//		return month;
//	}
//	int Getday()
//	{
//		return day;
//	}
//	void Setyear(int year)
//	{
//		this->year = year;
//	}
//	void Setmonth(int month)
//	{
//		this->month = month;
//	}
//	void Setday(int day)
//	{
//		this->day = day;
//	}
//
//};
//
//ostream & operator<<(ostream & cout, Data & d) 
//{
//	cout << d.Getyear() << "��" << d.Getmonth() << "��" << d.Getday() << "��" << endl;
//	return cout;
//}
//istream & operator>>(istream & cin, Data & d)
//{
//	int year, month, day;
//	cin >> year >> month >> day;
//	d.Setyear(year);
//	d.Setmonth(month);
//	d.Setday(day);
//	return cin;
//}
//
//
//int main()
//{
//	Data d(2008, 8, 18),s;					// �������ڶ���
//
//	cout << "����:" << d << endl;			// �������
//	cout << "����+10:" << d + 10 << endl;	// �������
//	cout << "����-10:" << d - 10 << endl;	// �������
//	cout << "��������:";
//	cin >> s;							// �������
//	cout << "����:" << s << endl;			// �������
//	system("pause");
//	return 0;
//}