//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 21;
//	cout.setf(ios::showbase);//��ʾ��������(0x��)
//	cout << "dec:" << a << endl;         //Ĭ����ʮ������ʽ���a
//	cout.unsetf(ios::dec);         //��ֹʮ���Ƶĸ�ʽ����
//	cout.setf(ios::hex);           //������ʮ�����������״̬
//	cout << "hex:" << a << endl;         //��ʮ��������ʽ���a
//	cout.unsetf(ios::hex);         //��ֹʮ�����Ƶĸ�ʽ����
//	cout.setf(ios::oct);           //�����԰˽��������״̬
//	cout << "oct:" << a << endl;         //�԰˽�����ʽ���a
//	cout.unsetf(ios::oct);
//	char *pt = "China";              //ptָ���ַ���"China"
//	cout.width(10);                //ָ�����Ϊ
//	cout << pt << endl;                //����ַ���
//	cout.width(10);                //ָ�����Ϊ
//	cout.fill('*');                //ָ���հ״���'*'���
//	cout << pt << endl;                //����ַ���
//	double pi = 22.0 / 7.0;            //���piֵ
//	cout.setf(ios::scientific);    //ָ���ÿ�ѧ���������
//	cout << "pi=";                   //���"pi="
//	cout.width(14);                //ָ�����Ϊ
//	cout << pi << endl;                //���piֵ
//	cout.unsetf(ios::scientific); //��ֹ��ѧ������״̬
//	cout.setf(ios::fixed);        //ָ���ö�����ʽ���
//	cout.width(12);               //ָ�����Ϊ
//	cout.setf(ios::showpos);      //���������+����
//	cout.setf(ios::internal);     //�������������
//	cout.precision(6);            //����λС��
//	cout << pi << endl;               //���pi,ע��������+����λ��
//	system("pause");
//	return 0;
//}