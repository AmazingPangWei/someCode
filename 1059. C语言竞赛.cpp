//#include <iostream>
//#include <string>
//using namespace std;
//
//bool isPrime(int n)//判断n是否为素数
//{
//	if (n < 2) return false;
//	if (n == 2) return true;
//	if (n % 2 == 0) return false;
//	for (int i = 3; i*i <= n; i += 2)
//		if (n%i == 0) return false;
//	return true;
//}
//
//struct People
//{
//	int num;//编号
//	string str = "Chocolate";
//	int X;//X为名次
//	int G = 0;//是否被检查
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	People *p;
//	p = new People[n];
//	for (int i = 0;i < n;i++)
//	{
//		cin >> p[i].num;
//		p[i].X = i + 1;
//		if (p[i].X == 1)
//			p[i].str = "Mystery Award";
//		if (isPrime(p[i].X))
//			p[i].str = "Minion";
//	}
//	int m, *q;
//	cin >> m;
//	q = new int[m];
//	int i, j;
//	for (i = 0;i < m;i++)
//		cin >> q[i];
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			if (q[i] == p[j].num&&p[j].G == 0)
//			{
//				cout.width(4);
//				cout.fill('0');
//				cout <<q[i] << ": " << p[j].str << endl;
//				p[j].G = 1;
//				break;
//			}
//			else if (p[j].G == 1 && q[i] == p[j].num)
//			{
//				cout.width(4);
//				cout.fill('0');
//				cout << q[i] << ": " << "Checked" << endl;
//				break;
//			}
//		}
//		if (j == n)
//		{
//			cout.width(4);
//			cout.fill('0');
//			cout << q[i] << ": " << "Are you kidding?" << endl;
//		}
//		
//	}
//	delete[]q;
//	delete[]p;
//	system("pause");
//	return 0;
//}