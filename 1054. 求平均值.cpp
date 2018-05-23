//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//
//bool jugde(string s)
//{
//	int x = 0, index = 0;//小数点数量与位置
//	int i = 0;
//	if (s[0] == '-')
//		i++;
//	for (i; i < s.size(); i++)
//	{
//		if ((x == 1 && s[i]=='.') || (i - index > 2 && x==1))
//			return false;
//		if (s[i] == '.')
//		{
//			if (i == 1 && s[0] == '-')
//				return false;
//			if (i == 0)
//				return false;
//			x++;
//			index = i;
//		}
//		else if (s[i]<'0' || s[i]>'9')
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	string s[100];
//	double a[100];
//	for (int i = 0; i < n; i++)
//		cin >> s[i];
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (jugde(s[i]))
//		{
//			double temp= std::stod(s[i]);
//			if (temp > 1000 || temp < -1000)
//			{
//				printf("ERROR: %s is not a legal number\n", s[i].c_str());
//			}
//			else 
//			{
//				a[sum] = temp;
//				sum++;
//			}
//
//		}
//		else
//		{
//			printf("ERROR: %s is not a legal number\n", s[i].c_str());
//		}
//	}
//	if (sum > 0)
//	{
//		double ave, DOU = 0;
//		for (int i = 0; i < sum; i++)
//			DOU += a[i];
//		ave = DOU / sum;
//		if (sum == 1)
//			printf("The average of 1 number is %.2lf\n", ave);
//		else
//			printf("The average of %d numbers is %.2lf\n", sum, ave);
//	}
//	else
//	{
//		if(n!=0)
//		printf("The average of 0 numbers is Undefined\n");
//	}
//	system("pause");
//	return 0;
//}