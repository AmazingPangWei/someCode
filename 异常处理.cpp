//#include <iostream>
//using namespace std;
//
//class String
//{
//public:
//	String(const char *str = NULL) // ͨ�ù��캯��
//	{
//		if (str == NULL)
//			m_data = NULL;
//		else
//		{
//			if (m_data = new char[strlen(str) + 1])
//				strcpy(m_data, str);
//			else
//				throw('p');
//		}
//	}
//	String(const String &another)// �������캯��
//	{
//		if (another.m_data != NULL)
//		{
//			if(m_data = new char[strlen(another.m_data) + 1])
//				strcpy(m_data, another.m_data);
//		}
//		else
//		{
//			m_data = NULL;
//		}
//	}
//	~String()// ��������
//	{
//		delete[]m_data;
//	}
//	String & operator = (const String &rhs)  // ��ֵ����
//	{
//		if (rhs.m_data == NULL)
//			m_data = NULL;
//		else
//		{
//			delete[]m_data;
//			m_data = new char[strlen(rhs.m_data) + 1];
//			strcpy(m_data, rhs.m_data);
//		}
//		return *this;
//	}
//
//	char & operator [](int n)
//	{
//		if (n >= strlen(m_data))
//			throw(n);
//		else
//			return m_data[n];
//	}
//private:
//	char *m_data; // ���ڱ����ַ���
//};
//
//
//
//int main() {
//	try {
//		String str1("This is C++");
//		String str2(str1);
//		cout << str1[3] << endl;
//		cout << str2[18] << endl;
//	}
//	catch (char) {
//		cout << "�ڴ���" << endl;
//	}
//	catch (int) {
//		cout << "�±�Խ��"<<endl; 
//	}
//	system("pause");
//	return 0;
//}
