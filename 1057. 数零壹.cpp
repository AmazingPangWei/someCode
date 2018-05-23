//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int num_0 = 0, num_1 = 0;
//
//void fun(long long a, int n)//将a转化为n进制
//{
//	int temp = 0;
//	long long sum = 0;
//	while (a != 0)
//	{
//		temp = a%n;
//		if (temp == 1)
//			num_1++;
//		else
//			num_0++;
//		a = a / n;
//	}
//}
//
//int CharToInt(char c)
//{
//	if (c >= 'A'&&c <= 'Z')
//		c = c + 32;
//	char i;
//	int t = 1;
//	for (i = 'a';i <= 'z';i++)
//		if (i == c)
//			return t;
//		else
//			t++;
//	if (t > 26)
//		return 0;
//}
//
//int main()
//{
//	char a[100000];
//	gets_s(a);
//	long long sum = 0;
//	for (int i = 0;i < strlen(a);i++)
//		sum = sum + CharToInt(a[i]);
//	fun(sum, 2);
//	cout << num_0 << ' ' << num_1 << endl;
//	system("pause");
//	return 0;
//}