////描述
////小Hi参加了一场大型马拉松运动会，他突然发现面前有一位参赛者背后的号码竟然和自己一样，也是666。
////仔细一看，原来那位参赛者把自己号码帖反(旋转180度)了，结果号码999看上去变成了号码666。
////
////小Hi知道这次马拉松一共有N名参赛者，号码依次是1~N。你能找出所有可能因为贴反而产生歧义的号码吗？
////
////一个号码K可能产生歧义当且仅当反转之后的号码是合法的数字K'，并且满足1 ≤ K' ≤ N且K' ≠ K。  
////
////例如：
////
////3没有歧义，因为贴反之后不是合法的数字。
////
////100没有歧义，因为001以0开头，不是合法号码。
////
////101也没有歧义，因为贴反之后还是101本身。
////
////假设N = 10000000，则1025689有歧义，因为贴反之后变成6895201。
////如果N = 2000000，则1025689没有歧义，因为6895201大于N。
////
////输入
////一个整数N。(1 ≤ N ≤ 100000)
////
////输出
////从小到大输出1~N之间所有有歧义的号码。每个号码一行。
////
////样例输入
////10
////样例输出
////6
////9
//
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//char b[10] = { '0','1','2','#','#','5','9','#','8','6' };
//int N;
//char max[100];
//bool judge(int n)
//{
//	char a[100];
//	char temp[100];
//	int t = 0;
//	sprintf(a, "%d", n);
//	for (int i = strlen(a) - 1; i >= 0; i--)
//	{
//		int index = a[i] - '0';
//		if (b[index] == '#')
//			return false;
//		else
//		{
//			temp[t] = b[index];
//			t++;
//		}
//	}
//	temp[t] = '\0';
//	if (strcmp(a, temp) == 0)
//		return false;
//	else if (strlen(temp) >= 2 && temp[0] == '0')
//		return false;
//	int T = 0;
//	for (int i = 0; i < strlen(temp); i++)
//		T = T * 10 + (temp[i] - '0');
//	if(T>N)
//		return false;
//	return true;
//}
//
//int main()
//{
//	cin >> N;
//	int sum = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		if (judge(i))
//			cout << i << endl;
//	}
////	system("pause");
//	return 0;
//}