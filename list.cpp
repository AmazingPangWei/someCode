////list˫������
//#include<algorithm> 
//#include<list>
//#include<iostream>
//#include<functional>
//#include <iterator> 
//using namespace std;
//int main() {
//	ostream_iterator<int>output(cout, " ");   //�����������output����������еڶ�����" "��ʾ�ÿո�ָ�����������
//	int ia[18] = { 47,29,5,37,13,23,11,61,7,31,41,2,59,19,17,53,43,3 };
//	list<int> list1(ia, ia + 18); //��������list1;list����7�����캯��,����3�� 
//								  //list(),���������յ�list;list(n),����������n��Ԫ�ص�list�� 
//								  //list(first,last),��������һ��list�� 
//								  //��Ԫ�صĳ�ֵ�Ǵ�����[first,last)��ָ���������е�Ԫ�ظ��ƶ����ģ�
//	list<int> list2(18);
//	if (list1.empty())
//		cout << "list1��" << endl;
//	else
//	{
//		cout << "list1���գ�" << "list1�е�Ԫ�أ�" << endl;
//		unique_copy(list1.begin(), list1.end(), output);
//		cout << endl;
//	}
//	list1.sort(greater<int>());//��������
//							   //sort(list1.begin(), list1.end(), greater<int>());
//	cout << "list1�е�Ԫ�ؽ������У�" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	cout << "�÷�ת���������list1�е�Ԫ�أ�" << endl;
//	unique_copy(list1.rbegin(), list1.rend(), output);
//	cout << endl;
//	cout << "��1��Ԫ�أ�" << list1.front() << endl;
//	cout << "���1��Ԫ�أ�" << list1.back() << endl;
//	cout << "ԭlist2�е�Ԫ�أ�" << endl;
//	unique_copy(list2.begin(), list2.end(), output);
//	cout << endl;
//	//swap(list1, list2);
//	list2.swap(list1);//����list1��list2
//	cout << "������list2�е�Ԫ�أ�" << endl;
//	unique_copy(list2.begin(), list2.end(), output);
//	cout << endl;
//	cout << "��list1�е�Ԫ�ؿ��ˣ�" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	//list1=list2;
//	list1.assign(list2.begin(), list2.end());
//	cout << "��list2��Ԫ�ظ���list1�У�" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list2.resize(10);
//	cout << "list2�е�Ԫ��Ӧʣ10����" << endl;
//	unique_copy(list2.begin(), list2.end(), output);
//	cout << endl;
//	list1.pop_back();//������β��һ������
//	cout << "��list1�е�Ԫ�أ�" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list1.pop_front();//������ͷ��һ������
//	cout << "��list1�е�Ԫ�أ�" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list1.push_back(ia[17]);//push_backΪ�ڱ�β����һ��Ԫ��
//	cout << "��ԭlist1������Ԫ�����²���Ԫ����ͬ��δ���������룺" << endl; //ia[17] == 3��������һ��Ԫ����ͬ
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list1.push_front(ia[0]);//�ڱ�ͷ����һ��47
//	cout << "��list1�е�Ԫ�أ�" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	system("PAUSE");
//	return 0;
//}
