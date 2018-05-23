//#include <iostream>
//#include <string>
//using namespace std;
//
//char fun(int x)
//{
//	switch (x)
//	{
//	case 0:return '1';
//	case 1:return '0';
//	case 2:return 'X';
//	case 3:return '9';
//	case 4:return '8';
//	case 5:return '7';
//	case 6:return '6';
//	case 7:return '5';
//	case 8:return '4';
//	case 9:return '3';
//	case 10:return '2';
//	}
//}
//
//int main()
//{
//	int n, i, sum = 0,t=0;
//	int *p;
//	int Q[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
//	cin >> n;
//	string str;
//	char a[100][19];
//	p = new int[n];
//	for (i = 0;i < n;i++)
//	{
//		cin >> str;
//		for (int j = 0;j < 17;j++)
//			sum = sum + (str[j] - '0')*Q[j];
//		if (str[17] == fun(sum % 11))
//			;
//		else
//		{
//			strcpy(a[t], str.c_str());
//			t++;
//		}
//		sum = 0;
//		str[0] = '\0';
//	}
//	if (t == 0)
//		cout << "All passed" << endl;
//	else
//	{
//		for (i = 0;i < t;i++)
//			cout << a[i] << endl;
//	}
//	system("pause");
//	return 0;
//}