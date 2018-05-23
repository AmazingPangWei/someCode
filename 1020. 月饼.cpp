//#include <iostream>
//#include <algorithm>
//#include <iomanip>
//using namespace std;
//bool comp(float a,float b)
//{
//	return (a > b);
//}
//int main()
//{
//	int n, m, i,t=0;
//	float sum = 0;
//	cin >> n >> m;
//	float *p, *q, *j,*k;
//	p = new float[n];
//	q = new float[n];
//	j = new float[n];
//	k = new float[n];
//	for (i = 0;i < n;i++)
//		cin >> p[i];
//	for (i = 0;i < n;i++)
//		cin >> q[i];
//	for (i = 0;i < n;i++) {
//		j[i] = q[i] / p[i];
//		k[i] = j[i];
//	}
//	sort(j, j + n,comp);
//	while (m > 0)
//	{
//		for (i = 0;i < n;i++)
//			if (j[t] == k[i])
//				break;
//		if (m >= p[i]) {
//			m = m - p[i];
//			sum = sum + q[i];
//		}
//		else {
//			sum = sum + k[i] * m;
//			m = 0;
//		}
//		t++;
//		if (t == n)
//			break;
//	}
//	cout << fixed <<setprecision(2) << sum << endl;
//	system("pause");
//	return 0;
//}