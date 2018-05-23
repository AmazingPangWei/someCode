////http://blog.csdn.net/alis_xt/article/details/54604591
////http://blog.csdn.net/wr132/article/details/44411221
//#include <iostream>
//#include <vector>
//using namespace std;
//int a[3];
//bool used[100][100][100];//是否已经存在该状态
//int ini[3];
//int aim;
//
////最大的瓶子只能往中等的瓶子倒；（若中等的瓶子为空）
////中等的瓶子只能往最小的瓶子倒；（若最小的瓶子不满）
////最小的瓶子只能往最大的瓶子倒；（若最小的瓶子已满）
//
////每次稳定向中瓶子倒入中瓶子大小的水，再从小瓶子导出小瓶子大小的水到大瓶中
////相当于8X - 5Y = 6  （ 限定 X > 0 ，Y > 0 ）
//
////如果当到达某一步之后，又回到了初始状态，那说明这种情况是没有结果的。
//bool cheack()
//{
//	if (used[ini[0]][ini[1]][ini[2]])
//		return false;
//	else
//		return true;
//}
//bool fun()
//{
//	while (ini[0]!=aim&&ini[1]!=aim&&ini[2]!=aim)
//	{
//		if (ini[1] == 0)
//		{
//			ini[0] = ini[0] - a[1];//倒入中瓶子
//			ini[1] = a[1];
//		}
//		if (ini[2] != a[2])//小瓶子没有满
//		{
//			int n = a[2] - ini[2];//需要这么多水
//			if (ini[1] >= n)
//			{
//				ini[1] = ini[1] - n;
//				ini[2] = a[2];
//			}
//			else
//			{
//				ini[2] = ini[2] + ini[1];
//				ini[1] = 0;
//			}
//		}
//		if (ini[2] == a[2])//小瓶子满了
//		{
//			int n = a[0] - ini[0];//需要这么多水
//			if (ini[2] >= n)
//			{
//				ini[2] = ini[2] - n;
//				ini[0] = a[0];
//			}
//			else
//			{
//				ini[0] = ini[0] + ini[2];
//				ini[2] = 0;
//			}
//		}
//		if (ini[0] == a[0] && ini[1] == a[1] && ini[2] == a[2])
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	char c;
//	cin >> a[0] >> c >> a[1] >> c >> a[2] >> c >> ini[0] >> c >> ini[1] >> c >> ini[2] >> c >> aim;
//	used[ini[0]][ini[1]][ini[2]] = true;
//	if (aim > (ini[1] + ini[0] + ini[2]))
//		cout << "N" << endl;
//	else
//		if (fun())
//			cout << 'Y' << endl;
//		else
//			cout << 'N' << endl;
////	system("pause");
//	return 0;
//}