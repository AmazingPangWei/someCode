//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Staff
//{
//private:
//	char num[18], name[18];
//	float rateOfAttend, basicSal, prize, wage;
//public:
//	Staff(char *Num, char *Name, float RateOfAttend, float BasicSal, float Prize) :rateOfAttend(RateOfAttend), basicSal(BasicSal), prize(Prize)
//	{
//		strcpy(num, Num);
//		strcpy(name, Name);
//		wage = RateOfAttend + BasicSal*Prize;
//	}
//	void Output()
//	{
//		cout << "Ա���ţ�" << num << endl
//			<< "������" << name << endl
//			<< "�����ʣ�" << rateOfAttend << endl
//			<< "�������ʣ�" << basicSal << endl
//			<< "����" << prize << endl;
//	}
//	void OutputWage()
//	{
//		cout << "ʵ�ù��ʣ�" << wage << endl;
//	}
//};
//
//class Saleman : public Staff
//{
//protected:
//	float deductRate, personAmount, wage;
//public:
//	Saleman(float DeductRate, float PersonAmount, char *Num, char *Name, float RateOfAttend, float BasicSal, float Prize) :Staff(Num, Name, RateOfAttend, BasicSal,Prize)
//	{
//		deductRate = DeductRate;
//		personAmount = PersonAmount;
//		wage = DeductRate*PersonAmount + BasicSal + Prize*RateOfAttend;
//	}
//	void Output()
//	{
//		Staff::Output();
//		cout << "��ɱ�����" << deductRate << endl
//			<< "�������۶" << personAmount << endl;
//	}
//	void OutputWage()
//	{
//		cout << "ʵ�ù��ʣ�" << wage << endl;
//	}
//};
//
//class Manager : public Staff
//{
//protected:
//	float totalDeductRate, totalAmount, wage;
//public:
//	Manager(float TotalDeductRate, float TotalAmount, char *Num, char *Name, float RateOfAttend, float BasicSal, float Prize) :Staff(Num, Name, RateOfAttend, BasicSal, Prize)
//	{
//		totalDeductRate = TotalDeductRate;
//		totalAmount = TotalAmount;
//		wage = BasicSal + Prize*RateOfAttend + TotalDeductRate*TotalAmount;
//	}
//	void Output()
//	{
//		Staff::Output();
//		cout << "��ɱ�����" << totalDeductRate << endl
//			<< "�����۶" << totalAmount << endl;
//	}
//	void OutputWage()
//	{
//		cout << "ʵ�ù��ʣ�" << wage << endl;
//	}
//};
//
//class SaleManager :public Manager, public Saleman
//{
//private:
//	float wage;
//public:
//	SaleManager(float DeductRate, float PersonAmount, float TotalDeductRate, float TotalAmount, char *Num, char *Name, float RateOfAttend, float BasicSal, float Prize) :Saleman(DeductRate, PersonAmount, Num, Name, RateOfAttend, BasicSal, Prize), Manager(TotalDeductRate, TotalAmount, Num, Name, RateOfAttend, BasicSal, Prize)
//	{
//		wage = BasicSal + Prize*RateOfAttend + TotalDeductRate*TotalAmount + DeductRate*PersonAmount;
//	}
//	void Output()
//	{
//		Staff::Output();
//		cout << "��ɱ�����" << totalDeductRate << endl
//			<< "�����۶�" << totalAmount << endl;
//		cout << "��ɱ�����" << deductRate << endl
//			<< "�������۶" << personAmount << endl;
//	}
//	void OutputWage()
//	{
//		cout << "ʵ�ù��ʣ�" << wage << endl;
//	}
//};
//
//int main()
//{
//	Saleman S(0.7,2000,"2016112232","����Ա",0.9,2500,1000);
//	Manager M(0.8, 2000, "2016112246", "����", 0.9, 2500, 1000);
//	SaleManager saleManager(0.7, 2000, 0.8, 2000, "2016112202", "���۾���", 0.9, 3000, 1500);
//	S.Output();
//	cout << endl;
//	S.OutputWage();
//	cout << endl;
//	M.Output();
//	cout << endl;
//	M.OutputWage();
//	cout << endl;
//	saleManager.Output();
//	cout << endl;
//	saleManager.OutputWage();
//	cout << endl;
//	system("pause");
//	return 0;
//}