//#include <iostream>
//using namespace std;
//
//int euler(int n) { //ŷ��������ʵ��    
//	int res = n, a = n;
//	for (int i = 2; i*i <= a; i++) {
//		if (a%i == 0) {
//			res = res / i * (i - 1);//�Ƚ��г�����Ϊ�˷�ֹ�м����ݵ����     
//			while (a%i == 0) a /= i;
//		}
//	}
//	if (a>1) res = res / a * (a - 1);
//	return res;
//}
//
//int poww(int a, int b, int mod)//a^b % mod  
//{
//	int ans = 1;
//	int base = a % mod;
//	while (b > 0)
//	{
//		if ((b & 1) == 1)
//			ans = (ans*base) % mod;
//		base = (base*base) % mod;
//		b = b >> 1;
//	}
//	return ans;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	if (n == 0 || n % 2 == 0)
//	{
//		cout << "������" << endl;
//		return 0;
//	}
//	int t = euler(n);
//	for (int i = 1; i <= t; i++)
//		if (t%i == 0 && poww(2, i, n) == 1)//ȡt��Լ��  
//		{
//			cout << i << endl;
//			//system("pause");  
//			return 0;
//		}
//	cout << "������" << endl;  
//	//system("pause");  
//	return 0;
//}