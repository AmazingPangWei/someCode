//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool comp(int a, int b)
//{
//	return (a < b);
//}
//
//
//void fun(char *a,int *b)
//{
//	int i = 0, j = 0, x = 0;
//	char t = '0';
//	while (x!=10)
//	{
//		for (i = 0;i < *b;i++) {
//			a[j] = t;
//			j++;
//		}
//		b++;
//		t++;
//		x++;
//	}
//	a[j] = '\0';
//}
//int main()
//{
//	char a[51];
//	int b[10];
//	int i,k=0,t;
//	for (i=0;i < 10;i++)
//		cin >> b[i];
//	fun(a, b);
//	sort(a, a + strlen(a),comp);
//	for (i = 0;i < strlen(a);i++)
//		if (a[i] == '0')
//			k++;
//	cout << a[k];
//	for (i = 0;i < k;i++)
//		cout << '0';
//	for (i = k+1;i < strlen(a);i++)
//		cout << a[i];
//	cout << endl;
//	system("pause");
//	return 0;
//}