////0的时候的处理？
//#include <iostream>
//#include <cstring>
//#include <string>
//#include <cmath>
//using namespace std;
//
//void showchar(string str, int n)//将a转化为n进制
//{
//	int a = 0, i;
//	int t[100];
//	int temp = 0;
//	for (i = 0;i < str.size();i++)
//		a = a * 10 + str[i] - '0';
//	while (a != 0)
//	{
//		t[temp] = a%n;
//		a = a / n;
//		temp++;
//	}
//	for (i = temp - 1;i >= 1;i--)
//	{
//		if (t[i] == 0)
//		{
//			cout << "tret ";
//		}
//		else if (t[i] == 1)
//		{
//			cout << "tam ";
//		}
//		else if (t[i] == 2)
//		{
//			cout << "hel ";
//		}
//		else if (t[i] == 3)
//		{
//			cout << "maa ";
//		}
//		else if (t[i] == 4)
//		{
//			cout << "huh ";
//		}
//		else if (t[i] == 5)
//		{
//			cout << "tou ";
//		}
//		else if (t[i] == 6)
//		{
//			cout << "kes ";
//		}
//		else if (t[i] == 7)
//		{
//			cout << "hei ";
//		}
//		else if (t[i] == 8)
//		{
//			cout << "elo ";
//		}
//		else if (t[i] == 9)
//		{
//			cout << "syy ";
//		}
//		else if (t[i] == 10)
//		{
//			cout << "lok ";
//		}
//		else if (t[i] == 11)
//		{
//			cout << "mer ";
//		}
//		else if (t[i] == 12)
//		{
//			cout << "jou ";
//		}
//	}
//	if (t[0] == 0)
//	{
//		//cout << "tret" << endl;
//		cout << endl;
//	}
//	else if (t[0] == 1)
//	{
//		cout << "jan" << endl;
//	}
//	else if (t[0] == 2)
//	{
//		cout << "feb" << endl;
//	}
//	else if (t[0] == 3)
//	{
//		cout << "mar" << endl;
//	}
//	else if (t[0] == 4)
//	{
//		cout << "apr" << endl;
//	}
//	else if (t[0] == 5)
//	{
//		cout << "may" << endl;
//	}
//	else if (t[0] == 6)
//	{
//		cout << "jun" << endl;
//	}
//	else if (t[0] == 7)
//	{
//		cout << "jly" << endl;
//	}
//	else if (t[0] == 8)
//	{
//		cout << "aug" << endl;
//	}
//	else if (t[0] == 9)
//	{
//		cout << "sep" << endl;
//	}
//	else if (t[0] == 10)
//	{
//		cout << "oct" << endl;
//	}
//	else if (t[0] == 11)
//	{
//		cout << "nov" << endl;
//	}
//	else if (t[0] == 12)
//	{
//		cout << "dec" << endl;
//	}
//}
//
//void shownum(string str, int n)//将n进制转为10进制
//{
//	string str1;
//	int a[100];
//	int temp = 0;
//	while (!str.empty())
//	{
//		str1.append(str, 0, 3);
//		str.erase(0, 4);
//		if (str1 == "tam") {
//			a[temp] = 1;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "hel") {
//			a[temp] = 2;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "maa") {
//			a[temp] = 3;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "huh") {
//			a[temp] = 4;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "tou") {
//			a[temp] = 5;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "kes") {
//			a[temp] = 6;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "hei") {
//			a[temp] = 7;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "elo") {
//			a[temp] = 8;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "syy") {
//			a[temp] = 9;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "lok") {
//			a[temp] = 10;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "mer") {
//			a[temp] = 11;
//			temp++;
//			a[temp] = 0;
//		}
//		else if (str1 == "jou") {
//			a[temp] = 12;
//			temp++;
//			a[temp] = 0;
//		}
//		if (str1 == "jan")
//			a[temp] = 1;
//		else if (str1 == "feb")
//			a[temp] = 2;
//		else if (str1 == "mar")
//			a[temp] = 3;
//		else if (str1 == "apr")
//			a[temp] = 4;
//		else if (str1 == "may")
//			a[temp] = 5;
//		else if (str1 == "jun")
//			a[temp] = 6;
//		else if (str1 == "jly")
//			a[temp] = 7;
//		else if (str1 == "aug")
//			a[temp] = 8;
//		else if (str1 == "sep")
//			a[temp] = 9;
//		else if (str1 == "oct")
//			a[temp] = 10;
//		else if (str1 == "nov")
//			a[temp] = 11;
//		else if (str1 == "dec")
//			a[temp] = 12;
//		str1.clear();
//	}
//	int sum = 0, t = 0;
//	for (int i = temp;i >= 0;i--)
//	{
//		sum = sum + a[i] * pow(n, t);
//		t++;
//	}
//	cout << sum << endl;
//}
//
//
//void NumToChar(string str)
//{
//	int t = 0, i;
//	for (i = 0;i < str.size();i++)
//		t = t * 10 + str[i] - '0';
//	char p[20];
//	strcpy(p, str.c_str());
//	sprintf(p, "%d", t);
//	str = p;
//
//}
//
//int main()
//{
//	int n, i;
//	cin >> n;
//	getchar();
//	string *p;
//	p = new string[n];
//	char a[50];
//	for (i = 0;i < n;i++) {
//		gets_s(a);
//		p[i] = a;
//	}
//	for (i = 0;i < n;i++)
//		if (p[i][0] >= '0'&&p[i][0] <= '9')
//		{
//			if (p[i][0] == '0')
//				cout << "tret" << endl;
//			else
//			showchar(p[i], 13);
//		}
//		else
//		{
//			shownum(p[i], 13);
//		}
//	delete[]p;
//	system("pause");
//	return 0;
//}