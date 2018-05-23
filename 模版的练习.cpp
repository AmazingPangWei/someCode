//#include <iostream>
//using namespace std;
//
//template<typename T>
//class Goods
//{
//private:
//	T water;
//	T food;
//	T book;
//public:
//	T getWater() const
//	{
//		return this->water;
//	}
//	T getFood() const
//	{
//		return this->food;
//	}
//	T getBook() const
//	{
//		return this->book;
//	}
//	void setWater(T water)
//	{
//		this->water = water;
//	}
//
//	void setFood(T food)
//	{
//		this->food = food;
//	}
//
//	void setBook(T book)
//	{
//		this->book = book;
//	}
//
//	Goods<T> operator +(const Goods<T> &b)
//	{
//		Goods<T> t;
//		t.setWater(getWater() + b.getWater());
//		t.setFood(getFood() + b.getFood());
//		t.setBook(getBook() + b.getBook());
//		return t;
//	}
//
//	Goods<T> operator -(const Goods<T> &b)
//	{
//		Goods<T> t;
//		t.water = water - b.water;
//		t.food = food - b.food;
//		t.book = book - b.book;
//		return t;
//	}
//	template <typename t>
//	friend ostream& operator << (ostream &, Goods<t> &);
//};
//
//template <typename t>
//ostream& operator << (ostream& out, Goods<t>& a)
//{
//	out << "water = " << a.getWater() << endl;
//	out << "food = " << a.getFood() << endl;
//	out << "book = " << a.getBook() << endl;
//	return out;
//}
//
//int main()
//{
//	Goods <double> A;
//	A.setWater(2.2);
//	A.setFood(5.2);
//	A.setBook(10.2);
//
//	Goods <double> B;
//	B.setWater(3.2);
//	B.setFood(2.2);
//	B.setBook(12.2);
//
//	cout.precision(2);
//	cout.setf(ios::fixed);
//
//	Goods <double> C = A + B;
//	cout << C << endl;
//
//	Goods <double> D = B - A;
//	cout << D << endl;
//
//	system("pause");
//	return 0;
//}