//vector��̬����  array�̶�������
//#include<algorithm>
//#include<vector> 
//#include<iostream> 
//#include<functional>
//#include <iterator>
//using namespace std;
//int main() {
//	ostream_iterator<int> output(cout, " ");   /*�����������output����������еڶ�����" "��ʾ�ÿո�ָ�����������*/
//	int ia[18] = { 47,29,5,37,13,23,11,61,7,31,41,2,59,19,17,53,43,3 };
//	vector<int> vec(ia, ia + 9); //��������vector;vector����7�����캯��,����3����
//								 //vector(),���������յ�vector;vector(n),����������n��Ԫ�ص�vector��
//								 //vector(first,last),��������һ��vector�� 
//								 //��Ԫ�صĳ�ֵ�Ǵ�����[first,last)��ָ���������е�Ԫ�ظ��ƶ����ģ� 
//	vector<int> vec2(18);
//	if (vec.empty())
//		cout << "vector��" << endl;
//	else 
//	{
//		cout << "vector���գ�" << "vector�е�Ԫ�أ�" << endl;    
//		unique_copy(vec.begin(), vec.end(), output);
//		//ȥ���ظ�Ԫ����ִ��copy����
//		//����vec�е�����ͨ����������output,�ŵ�cout�������
//		cout << endl;
//	}
//	cout << "��ǰ����Ԫ�ؿռ�����:" << vec.capacity() << endl;
//	vec.reserve(12);
//	cout << "��ǰΪvector��������С����Ԫ�ؿռ�����:" << vec.capacity() << endl; 
//	vec.erase(vec.begin(), vec.end());//ɾ��vec�е�Ԫ��
//	cout << "��ǰ����Ԫ�ؿռ�����:" << vec.capacity() << endl;
//	vec.resize(10); //����ָ����ЧԪ�صĸ���
//	cout << "��ǰ���·���Ԫ�ؿռ�����Ϊ10��ʵ�ʷ���Ԫ�ؿռ�����:" << vec.capacity() << endl;
//	vec.assign(ia + 10, ia + 16);//����ia[10]~ia[15]��Ԫ��
//	cout << "vector�������������󳤶ȣ�" << vec.max_size() << endl; 
//	cout << "vector�е�Ԫ�أ�" << endl;
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;
//	vec.assign(ia, ia + 18);//����ia����Ԫ��
//	cout << "vector�е�Ԫ�أ�" << endl;
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;   
//	sort(vec.begin(), vec.end(), greater<int>());//��������
//	cout << "vector�е�Ԫ�أ�" << endl; 
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;
//	cout << "�÷�ת���������vector�е�Ԫ�أ�" << endl; 
//	unique_copy(vec.rbegin(), vec.rend(), output);//�������
//	cout << endl;
//	cout << "��1��Ԫ�أ�" << vec.front() << endl;
//	cout << "���1��Ԫ�أ�" << vec.back() << endl;
//	cout << "��7��Ԫ�أ�" << vec[6] << endl;
//	cout << "ԭvector2�е�Ԫ�أ�" << endl;
//	unique_copy(vec2.begin(), vec2.end(), output);
//	cout << endl;
//	vec2.swap(vec);
//	cout << "������vector2�е�Ԫ�أ�" << endl; 
//	unique_copy(vec2.begin(), vec2.end(), output); 
//	cout << endl;
//	cout << "������vector�е�Ԫ�أ�" << endl;
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;
//	system("pause");
//	return 0;
//}
