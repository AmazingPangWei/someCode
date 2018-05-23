//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	int n;
//	n = str.find('E');
//	int num = 0;
//	int flag = 0;
//	if (str[n + 1] == '-')
//		flag = 1;
//	for (int i = n + 2;i < str.size();i++)
//		num = num * 10 + (str[i] - 48);
//	if (num == 0)
//	{
//		if (str[0] == '-')
//			printf("-");
//		for (int i = 1;i < n;i++)
//			printf("%c", str[i]);
//		system("pause");
//		return 0;
//	}
//	if (str[0] == '+'&&flag==1)
//	{
//		printf("0.");
//		for (int i = 1;i < num;i++)
//			printf("0");
//		printf("%c", str[1]);
//		for (int i = 3;i < n;i++)
//			printf("%c", str[i]);
//	}
//	else if (str[0] == '-'&&flag == 1)
//	{
//		printf("-");
//		printf("0.");
//		for (int i = 1;i < num;i++)
//			printf("0");
//		printf("%c", str[1]);
//		for (int i = 3;i < n;i++)
//			printf("%c", str[i]);
//	}
//	else if (flag == 0)
//	{
//		if (str[0] == '-')
//			printf("-");
//		int m = n - 3;//小数部分个数
//		printf("%c", str[1]);
//		if (num - m < 0)//-1.256E01这种情况
//		{
//			for (int i = 3;i < num + 3;i++)
//				printf("%c", str[i]);
//			printf(".");
//			for (int i = num + 3;i < m + 3;i++)
//				printf("%c", str[i]);
//		}
//		else
//		{
//			for (int i = 3;i < m + 3;i++)
//				printf("%c", str[i]);
//			for (int i = 0;i < (num - m);i++)
//				printf("0");
//		}
//	}
//	system("pause");
//	return 0;
//}