//#include <iostream>
//using namespace std;
//
//
//double a, b, c, d;
//bool solve()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			for (int k = 0; k < 4; k++)
//			{
//				switch (i)
//				{
//				case 0:
//					switch (j)
//					{
//					case 0:
//						switch (k)
//						{
//						case 0:
//							if (a + b + c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a + b + c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a + b + c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a + b + c / d == 24)
//								return true;
//							break;
//						}
//					case 1:
//						switch (k)
//						{
//						case 0:
//							if (a + b - c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a + b - c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a + b - c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a + b - c / d == 24)
//								return true;
//							break;
//						}
//					case 2:
//						switch (k)
//						{
//						case 0:
//							if (a + b * c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a + b * c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a + b * c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a + b * c / d == 24)
//								return true;
//							break;
//						}
//					case 3:
//						switch (k)
//						{
//						case 0:
//							if (a + b / c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a + b / c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a + b / c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a + b / c / d == 24)
//								return true;
//							break;
//						}
//					}
//				case 1:
//					switch (j)
//					{
//					case 0:
//						switch (k)
//						{
//						case 0:
//							if (a - b + c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a - b + c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a - b + c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a - b + c / d == 24)
//								return true;
//							break;
//						}
//					case 1:
//						switch (k)
//						{
//						case 0:
//							if (a - b - c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a - b - c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a - b - c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a - b - c / d == 24)
//								return true;
//							break;
//						}
//					case 2:
//						switch (k)
//						{
//						case 0:
//							if (a - b * c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a - b * c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a - b * c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a - b * c / d == 24)
//								return true;
//							break;
//						}
//					case 3:
//						switch (k)
//						{
//						case 0:
//							if (a - b / c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a - b / c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a - b / c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a - b / c / d == 24)
//								return true;
//							break;
//						}
//					}
//				case 2:
//					switch (j)
//					{
//					case 0:
//						switch (k)
//						{
//						case 0:
//							if (a * b + c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a * b + c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a * b + c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a * b + c / d == 24)
//								return true;
//							break;
//						}
//					case 1:
//						switch (k)
//						{
//						case 0:
//							if (a * b - c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a * b - c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a * b - c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a * b - c / d == 24)
//								return true;
//							break;
//						}
//					case 2:
//						switch (k)
//						{
//						case 0:
//							if (a * b * c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a * b * c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a * b * c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a * b * c / d == 24)
//								return true;
//							break;
//						}
//					case 3:
//						switch (k)
//						{
//						case 0:
//							if (a * b / c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a * b / c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a * b / c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a * b / c / d == 24)
//								return true;
//							break;
//						}
//					}
//				case 3:
//					switch (j)
//					{
//					case 0:
//						switch (k)
//						{
//						case 0:
//							if (a / b + c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a / b + c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a / b + c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a / b + c / d == 24)
//								return true;
//							break;
//						}
//					case 1:
//						switch (k)
//						{
//						case 0:
//							if (a / b - c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a / b - c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a / b - c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a / b - c / d == 24)
//								return true;
//							break;
//						}
//					case 2:
//						switch (k)
//						{
//						case 0:
//							if (a / b * c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a / b * c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a / b * c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a / b * c / d == 24)
//								return true;
//							break;
//						}
//					case 3:
//						switch (k)
//						{
//						case 0:
//							if (a / b / c + d == 24)
//								return true;
//							break;
//						case 1:
//							if (a / b / c - d == 24)
//								return true;
//							break;
//						case 2:
//							if (a / b / c * d == 24)
//								return true;
//							break;
//						case 3:
//							if (a / b / c / d == 24)
//								return true;
//							break;
//						}
//					}
//				}
//			}
//	}
//	return false;
//}
//
//int main()
//{
//
//	int judge = 0;
//	cin >> a >> b >> c >> d;
//
//	cout << solve() << endl;
//
//
//	system("pause");
//	return 0;
//}