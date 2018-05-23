////设计一个时间类Time，要求：
////（1）包含时(hour)、分(minute)和秒(second)私有数据成员。
////（2）包含构造函数，重载关于一时间加上另一时间的加法运算符 + 、
////	 重载关于一时间减去另一时间的减加运算符 - 
////	 重载输出运算符 << 与输入运算符 >> 等。
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
//	out << t.Gethour() << "点" << t.Getminute() << "分" << t.Getsecond() << "秒" << endl;
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
