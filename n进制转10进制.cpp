////n进制化十进制：按位乘n的i次方后相加，小数点左边第一位0次方,第二位1次方，以此类推
////比如n进制数字1234，换成10进制后为4×n^0+3×n^1+2×n^2+1×n^3
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int fun(int a, int n)
//{
//	int sum = 0, temp = 0;
//	while (a != 0)
//	{
//		sum = sum + (a % 10)*pow(n, temp);
//		temp++;
//		a = a / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	cout << fun(1010, 2);
//	system("pause");
//	return 0;
//}