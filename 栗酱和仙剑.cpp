//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while(T--)
//	{ 
//		int mhp, hp, ma, a;
//		cin >> mhp >> hp >> ma >> a;
//		int t = 0;
//		while (mhp > 0 && hp > 0)
//		{
//			if (t == 0)
//			{
//				mhp -= a;
//				t = 1;
//			}
//			else
//			{
//				hp -= ma;
//				t = 0;
//			}
//		}
//		if (mhp <= 0)
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//
////	system("pause");
//	return 0;
//}