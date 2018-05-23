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
//		cout << "员工号：" << num << endl
//			<< "姓名：" << name << endl
//			<< "出勤率：" << rateOfAttend << endl
//			<< "基本工资：" << basicSal << endl
//			<< "奖金：" << prize << endl;
//	}
//	void OutputWage()
//	{
//		cout << "实得工资：" << wage << endl;
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
//		cout << "提成比例：" << deductRate << endl
//			<< "个人销售额：" << personAmount << endl;
//	}
//	void OutputWage()
//	{
//		cout << "实得工资：" << wage << endl;
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
//		cout << "提成比例：" << totalDeductRate << endl
//			<< "总销售额：" << totalAmount << endl;
//	}
//	void OutputWage()
//	{
//		cout << "实得工资：" << wage << endl;
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
//		cout << "提成比例：" << totalDeductRate << endl
//			<< "总销售额" << totalAmount << endl;
//		cout << "提成比例：" << deductRate << endl
//			<< "个人销售额：" << personAmount << endl;
//	}
//	void OutputWage()
//	{
//		cout << "实得工资：" << wage << endl;
//	}
//};
//
//int main()
//{
//	Saleman S(0.7,2000,"2016112232","销售员",0.9,2500,1000);
//	Manager M(0.8, 2000, "2016112246", "经理", 0.9, 2500, 1000);
//	SaleManager saleManager(0.7, 2000, 0.8, 2000, "2016112202", "销售经理", 0.9, 3000, 1500);
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