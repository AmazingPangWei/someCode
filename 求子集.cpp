//#include <iostream>
//using namespace std;
//
////��Ϊȫ�ֱ���
//char set[] = { 'a', 'b', 'c', 'd' };
//bool isVisited[4] = { false };
//int Size = 4;
//
//void getAllSubset(int depth)
//{
//	if (depth == Size)//���������ȫ������ӡ�����б����Ϊtrue��Ԫ��
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
//		getAllSubset(depth + 1);//Ѱ����һ��Ԫ��
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
