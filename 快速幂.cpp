//#include <iostream>
//using namespace std;
//
//int pow(int a, int b) //求a^b  EX：3^11 = 3^1 * 3^2 * 3^8
//{                     //1011
//	int base = a;
//	int ans = 1;
//	while (b > 0)
//	{
//		if (b & 1 == 1) //求得二进制时第一位是0还是1
//		{
//			ans = ans * base;
//		}
//		base = base * base;
//		b = b >> 1;    
//	}
//	return ans;
//}
//int main()
//{
//	cout << pow(2, 11) << endl;
//	system("pause");
//	return 0;
//}