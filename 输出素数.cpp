//#include <iostream>
//#include <cmath>
//using namespace std;
//
//
//bool isPrime(int n)//�ж�N�Ƿ�Ϊ����
//{
//	if (n < 2) return false;
//	if (n == 2) return true;
//	if (n % 2 == 0) return false;
//	for (int i = 3; i*i <= n; i += 2)
//		if (n%i == 0) return false;
//	return true;
//}
//int fun()//���2000����������
//{
//	int i;
//	int sum = 0;
//	for (i = 2; i <= 2000; i++)
//		if (isPrime(i))
//			sum++;
//	return sum;
//}
//int main()
//{
//	cout << fun() << endl;
//	system("pause");
//	return 0;
//}