//#include <iostream>
//using namespace std;
//
////作为全局变量
//char set[] = { 'a', 'b', 'c', 'd' };
//bool isVisited[4] = { false };
//int Size = 4;
//
//void getAllSubset(int depth)
//{
//	if (depth == Size)//如果遍历完全集，打印出所有被标记为true的元素
//	{
//		for (int i = 0; i < Size; i++)
//		{
//			if (isVisited[i])
//				cout << set[i];
//		}
//		cout << endl;
//	}
//	else
//	{
//		isVisited[depth] = true;
//		getAllSubset(depth + 1);//寻找下一个元素
//		isVisited[depth] = false;
//		getAllSubset(depth + 1);
//	}
//}
//
//int main()
//{
//
//	getAllSubset(0);
//	system("pause");
//	return 0;
//}
