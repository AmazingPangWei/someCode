//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char a[100000][10];
//	int b[100000];
//	memset(b, 0, sizeof(b));
//	int n,t=0,i=0,x=0,max;
//	cin >> n;
//	max = n;
//	getchar();
//	while (n > 0)
//	{
//		gets_s(a[i]);
//		i++;
//		n--;
//	}
//	i = 0;
//	while (i < max)
//	{
//		for (n = 0;a[i][n] != ' ';n++)
//			t = t * 10 + a[i][n] - '0';
//		for (n = n + 1;n < strlen(a[i]);n++)
//			x = x * 10 + a[i][n] - '0';
//		b[t] = b[t] + x;
//		t = 0;
//		x = 0;
//		i++;
//	}
//	max = b[0];
//	for (i = 0;i < 10000;i++)
//		if (b[i] > max)
//			max = b[i];
//	for (i = 0;i < 10000;i++)
//		if (max == b[i])
//			break;
//	cout << i << ' ' << max<<endl;
//	system("pause");
//	return 0;
//}