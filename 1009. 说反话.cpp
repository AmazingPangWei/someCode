//#include <iostream>
//#include <stdio.h>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int i, j, t = 0, k = 0, x = 0;
//	char a[80], b[80][80];
//	gets_s(a);
//	for (i = 0;i < strlen(a);i++) 
//	{
//		if (a[i] == ' ') 
//		{
//			for (j = k;j < i;j++) 
//			{
//				b[t][x] = a[j];
//				x++;
//			}
//			k = i + 1;
//			b[t][x] = '\0';
//			t++;
//		}
//		if (a[i+1] == '\0')
//		{
//			for (j = k;j <= i;j++)
//			{
//				b[t][x] = a[j];
//				x++;
//			}
//			k = i + 1;
//			b[t][x] = '\0';
//			t++;
//		}
//		x = 0;
//	}
//	//cout << t<<endl;
//	for (i = t - 1;i >= 0;i--)
//	{
//		cout << b[i];
//		if(i!=0)
//		cout << ' ';
//	}
//	/*cout << b[t-1];
//	cout << ' ';*/
//		
//	system("pause");
//	return 0;
//}