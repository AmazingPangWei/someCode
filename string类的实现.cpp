//#include <iostream>
//#include <string.h>
//using namespace std;
//
//class String
//{
//private:
//	char *m_data; // ���ڱ����ַ���   �������
//public:
//	String(const char *str = NULL);// ���캯��
//	String &operator = (const String &rhs);
//	String operator + (const String &rhs);
//	bool operator < (const String &rhs);
//	friend ostream & operator <<(ostream &out, String & S)
//	{
//		out << S.m_data;
//		return out;
//	}
//};
//
//String::String(const char *str)//ͨ�ù��캯��
//{
//	if (str == NULL)
//		m_data = NULL;
//	else {
//		m_data = new char[strlen(str) + 1];
//		strcpy(m_data, str);
//	}
//}
//
//String & String ::operator = (const String & rhs)//����'='�����
//{
//	if (m_data)//����Ѵ���m_data������delete
//		delete[] m_data;
//	if (rhs.m_data) {//���и�ֵ
//		m_data = new char[strlen(rhs.m_data) + 1];
//		strcpy(m_data, rhs.m_data);
//      return *this;
//	}
//	return *this;  
//}
//String String::operator + (const String &rhs)
//{
//	char *str;
//	str = new char[strlen(m_data) + strlen(rhs.m_data)+1];
//	strcpy(str, m_data);
//	strcat(str, rhs.m_data);
//	String temp(str);
//	delete[] str;
//	return temp;
//}
//bool String::operator < (const String &rhs)
//{
//	if (strcmp(m_data, rhs.m_data) < 0)
//		return true;
//	else
//		return false;
//}
//
//int main()//������
//{
//	String str1("����"), str2("˳��");
//	String s("���Ͱɣ������ͷ���");
//	if ((s<str1))
//		s = str1 + str2;
//	cout << s << endl;
//	system("pause");
//	return 0;
//}