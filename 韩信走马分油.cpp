////http://blog.csdn.net/alis_xt/article/details/54604591
////http://blog.csdn.net/wr132/article/details/44411221
//#include <iostream>
//#include <vector>
//using namespace std;
//int a[3];
//bool used[100][100][100];//�Ƿ��Ѿ����ڸ�״̬
//int ini[3];
//int aim;
//
////����ƿ��ֻ�����еȵ�ƿ�ӵ��������еȵ�ƿ��Ϊ�գ�
////�еȵ�ƿ��ֻ������С��ƿ�ӵ���������С��ƿ�Ӳ�����
////��С��ƿ��ֻ��������ƿ�ӵ���������С��ƿ��������
//
////ÿ���ȶ�����ƿ�ӵ�����ƿ�Ӵ�С��ˮ���ٴ�Сƿ�ӵ���Сƿ�Ӵ�С��ˮ����ƿ��
////�൱��8X - 5Y = 6  �� �޶� X > 0 ��Y > 0 ��
//
////���������ĳһ��֮���ֻص��˳�ʼ״̬����˵�����������û�н���ġ�
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
//			ini[0] = ini[0] - a[1];//������ƿ��
//			ini[1] = a[1];
//		}
//		if (ini[2] != a[2])//Сƿ��û����
//		{
//			int n = a[2] - ini[2];//��Ҫ��ô��ˮ
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
//		if (ini[2] == a[2])//Сƿ������
//		{
//			int n = a[0] - ini[0];//��Ҫ��ô��ˮ
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