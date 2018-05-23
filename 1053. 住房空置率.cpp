//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, N;
//	float Kk, K;//Kk¿ÉÄÜ¿Õ,KÎª¿Õ
//	int num_Kk, num_K;
//	int e = 0, D = 0;
//	cin >> n;
//	cin >> Kk >> K;
//	N = n;
//	while (n)
//	{
//		int num, i;
//		int temp = 0;
//		cin >> num;
//		float *p;
//		p = new float[num];
//		for (i = 0;i < num;i++)
//		{
//			cin >> p[i];
//			if (p[i] < Kk)
//				temp++;
//		}
//		if (temp > num / 2 && num > K)
//			D++;
//		if (temp > num / 2 && num <= K)
//			e++;
//		delete[]p;
//		n--;
//	}
//	cout.precision(1);
//	cout.setf(ios::fixed);
//	cout << (e / (N*1.0)) * 100 << "% " << (D / (N*1.0)) * 100 << '%' << endl;
//	system("pause");
//	return 0;
//}