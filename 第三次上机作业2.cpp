////���һ��ʱ����Time��Ҫ��
////��1������ʱ(hour)����(minute)����(second)˽�����ݳ�Ա��
////��2���������캯�������ع���һʱ�������һʱ��ļӷ������ + ��
////	 ���ع���һʱ���ȥ��һʱ��ļ�������� - 
////	 ������������ << ����������� >> �ȡ�
//#include <iostream>
//using namespace std;
//
//class Time
//{
//private:
//	int hour, minute, second;
//public:
//	Time(int h = 0, int min = 0, int s = 0) :hour(h), minute(min), second(s) {}
//	Time operator+(Time & time)
//	{
//		Time t;
//		t.second = second + time.second;
//		t.minute = minute + time.second + t.second / 60;
//		t.second %= 60;
//		t.hour = hour + time.hour + t.minute / 60;
//		t.minute %= 60;
//		return t;
//	}
//	Time operator - (Time & time)
//	{
//		Time t;
//		t.second = second - time.second;
//		if (t.second < 0)
//		{
//			t.minute--;
//			t.second += 60;
//		}
//		t.minute = minute - time.minute + t.minute;
//		if (t.minute < 0)
//		{
//			t.hour--;
//			t.minute += 60;
//		}
//		t.hour = hour - time.hour + t.hour;
//		return t;
//	}
//	int Gethour()
//	{
//		return hour;
//	}
//	int Getminute()
//	{
//		return minute;
//	}
//	int Getsecond()
//	{
//		return second;
//	}
//	void Sethour(int hour)
//	{
//		this->hour = hour;
//	}
//	void Setminute(int minute)
//	{
//		this->minute = minute;
//	}
//	void Setsecond(int second)
//	{
//		this->second = second;
//	}
//};
//
//ostream & operator << (ostream & out, Time & t)
//{
//	out << t.Gethour() << "��" << t.Getminute() << "��" << t.Getsecond() << "��" << endl;
//	return out;
//}
//istream & operator >> (istream & in, Time & t)
//{
//	int hour, minute, second;
//	in >> hour >> minute >> second;
//	t.Sethour(hour);
//	t.Setminute(minute);
//	t.Setsecond(second);
//	return in;
//}
//
//int main()
//{
//	Time t(9, 52, 57), t1, t2;
//	cin >> t1;
//	cout << t + t1 << endl;
//	cin >> t2;
//	cout << t - t2 << endl;
//	system("pause");
//	return 0;
//}
