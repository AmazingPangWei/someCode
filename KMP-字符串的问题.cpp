////https://www.bilibili.com/video/av11866460/
////https://www.cnblogs.com/yjiyjige/p/3263858.html
//#include <iostream>
//#include <string>
//using namespace std;
//
//int Next[1000];
//string text;//�ı�
//string ps;  //ƥ�䴮
//void GetNext()//��ƥ�䴮��next����
//{
//	Next[0] = -1;
//	int k = -1;
//	int j = 0;
//	while (j < ps.size()-1)//�Ժ�һ���ַ�����ƥ��,�������Ƶ
//	{
//		if (k == -1 || ps[k]==ps[j])//����һ���ַ�ʱ��������kλ����jλʱ
//		{
//			Next[++j] = ++k;
//		}
//		else
//		//�Բ��͵Ľ��ͣ�
//		//ABACDABABC
//		//��k+1��3ʱ����D����j+1�ڵ�����һλ�������
//		//������ABACȥƥ��ABAB
//		//���Ե�Dƥ��ʧ��ʱ������next���飬��k�Ƶ�next[k]��λ�ã������Ż�
//		{
//			k = Next[k];
//		}
//	}
//}
//
//void kmp()
//{
//	GetNext();//���next����
//	int i = 0;//��Ӧtext�ַ���index
//	int j = 0;//��Ӧƥ�䴮index
//	int flag = 0;//�Ƿ���ƥ�䴮
//	while (i < text.size())
//	{
//		if (j == -1 || text[i] == ps[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = Next[j];
//		}
//		if (j == ps.size())//�ҵ�ƥ�䴮
//		{
//			cout << i - j << endl;//���ƥ���λ��
//			j = Next[j];//����ƥ��
//			flag = 1;
//		}
//	}
//	if(!flag)
//		cout << "δ�ҵ�ƥ�䴮" << endl;
//}
//
//int main()
//{
//	//cin >> text >> ps;
//	cin >> ps;
//	GetNext();
//	for (int i = 0; i < ps.size(); i++)
//		cout << Next[i] << ' ';
//	//kmp();
//
//	system("pause");
//	return 0;
//}