//#include <iostream>
//#include <string>
//using namespace std;
//string text;
//int Next[100001];
//void GetNext()
//{
//	int k = -1;
//	int j = 0;
//	Next[0] = -1;
//	while (j<text.size()-1)
//	{
//		if (k == -1 || text[k] == text[j])
//		{
//			Next[++j] = ++k;
//		}
//		else
//		{
//			k = Next[k];
//		}
//	}
//}
//
//int main()
//{
//	cin >> text;
//	GetNext();
//	for (int i = 0; i < text.size(); i++)
//		cout << Next[i] << ' ';
//	system("pause");
//	return 0;
//}