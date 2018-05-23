//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	int *p;
//};
//
//int main()
//{
//	int n, m, i, j;
//	int A, B;
//	int S;
//	Node *N;
//	cin >> n >> m;
//	cin >> A >> B >> S;
//	N = new Node[n];
//	for (i = 0;i < n;i++)
//	{
//		N[i].p = new int[m];
//		for (j = 0;j < m;j++)
//		{
//			cin >> N[i].p[j];
//			if (N[i].p[j] >= A&&N[i].p[j] <= B)
//				N[i].p[j] = S;
//		}
//	}
//	for(i=0;i<n;i++)
//		for (j = 0;j < m;j++)
//		{
//			cout.width(3);
//			cout.fill('0');
//			cout << N[i].p[j];
//			if (j + 1 == m)
//				cout << endl;
//			else
//				cout << ' ';
//		}
//	for (i = 0;i < n;i++)
//		delete []N[i].p;
//	delete[]N;
//	system("pause");
//	return 0;
//}