//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//int temp1[] = { -1,0,1 };
//int temp3[] = { -3,0,3 };
//int temp9[] = { -9,0,9 };
//int temp27[] = { -27,0,27 };
//int temp81[] = { -81,0,81 };
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	queue<int> q;
//	for(int i=0;i<3;i++)
//		for (int j = 0; j<3; j++)
//			for (int k = 0; k<3; k++)
//				for (int l = 0; l<3; l++)
//					for (int m = 0; m < 3; m++)
//					{
//						if (temp81[i] + temp27[j] + temp9[k] + temp3[l] + temp1[m] == n)
//						{
//							if (temp81[i] != 0)
//							{
//								q.push(temp81[i]);
//							}
//							if (temp27[j] != 0)
//							{
//								q.push(temp27[j]);
//							}
//							if (temp9[k] != 0)
//							{
//								q.push(temp9[k]);
//							}
//							if (temp3[l] != 0)
//							{
//								q.push(temp3[l]);
//							}
//							if (temp1[m] != 0)
//							{
//								q.push(temp1[m]);
//							}
//							if (q.front() > 0)
//								cout << q.front();
//							q.pop();
//							while (!q.empty())
//							{
//								if (q.front() > 0)
//									cout << '+' << q.front();
//								else
//									cout << q.front();
//								q.pop();
//							}
//							cout << endl;
//						}
//					}
//
////	system("pause");
//	return 0;
//}