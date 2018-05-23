//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct Node
//{
//	char c='\0';
//	int x = 1;
//};
//
//bool comp(Node a, Node b)
//{
//	if (a.x == b.x)
//		return a.c < b.c;
//	return a.x > b.x;
//}
//
//int main()
//{
//	char a[1000];
//	Node t[500];
//	int m = 0;
//	gets_s(a);
//	for (int i = 0;i < strlen(a);i++)
//	{
//		if (a[i] >= 'A'&&a[i] <= 'Z')
//			a[i] = a[i] + 32;
//	}
//	sort(a, a + strlen(a));
//	for (int i = 0;i < strlen(a);i++)
//	{
//		if(a[i]>='a'&&a[i]<='z')
//		{
//			t[m].c = a[i];
//			if (a[i] == a[i + 1])
//			{
//				t[m].x++;
//			}
//			else
//				m++;
//		}
//	}
//	sort(t, t + m, comp);
//	cout << t[0].c<<' '<<t[0].x << endl;
//	system("pause");
//	return 0;
//}