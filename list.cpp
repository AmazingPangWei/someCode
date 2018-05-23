////list双向链表
//#include<algorithm> 
//#include<list>
//#include<iostream>
//#include<functional>
//#include <iterator> 
//using namespace std;
//int main() {
//	ostream_iterator<int>output(cout, " ");   //用输出迭代子output来输出，其中第二参数" "表示用空格分隔各个整数。
//	int ia[18] = { 47,29,5,37,13,23,11,61,7,31,41,2,59,19,17,53,43,3 };
//	list<int> list1(ia, ia + 18); //数据填入list1;list共有7个构造函数,常用3个 
//								  //list(),用以声明空的list;list(n),用以声明有n个元素的list； 
//								  //list(first,last),用以声明一个list， 
//								  //其元素的初值是从区间[first,last)所指定的序列中的元素复制而来的；
//	list<int> list2(18);
//	if (list1.empty())
//		cout << "list1空" << endl;
//	else
//	{
//		cout << "list1不空，" << "list1中的元素：" << endl;
//		unique_copy(list1.begin(), list1.end(), output);
//		cout << endl;
//	}
//	list1.sort(greater<int>());//降序排列
//							   //sort(list1.begin(), list1.end(), greater<int>());
//	cout << "list1中的元素降序排列：" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	cout << "用反转迭代子输出list1中的元素：" << endl;
//	unique_copy(list1.rbegin(), list1.rend(), output);
//	cout << endl;
//	cout << "第1个元素：" << list1.front() << endl;
//	cout << "最后1个元素：" << list1.back() << endl;
//	cout << "原list2中的元素：" << endl;
//	unique_copy(list2.begin(), list2.end(), output);
//	cout << endl;
//	//swap(list1, list2);
//	list2.swap(list1);//交换list1和list2
//	cout << "交换后list2中的元素：" << endl;
//	unique_copy(list2.begin(), list2.end(), output);
//	cout << endl;
//	cout << "现list1中的元素空了：" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	//list1=list2;
//	list1.assign(list2.begin(), list2.end());
//	cout << "将list2的元素赋到list1中：" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list2.resize(10);
//	cout << "list2中的元素应剩10个：" << endl;
//	unique_copy(list2.begin(), list2.end(), output);
//	cout << endl;
//	list1.pop_back();//弹出表尾的一个数据
//	cout << "现list1中的元素：" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list1.pop_front();//弹出表头的一个数据
//	cout << "现list1中的元素：" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list1.push_back(ia[17]);//push_back为在表尾插入一个元素
//	cout << "因原list1中最后的元素与新插入元素相同，未能真正插入：" << endl; //ia[17] == 3，与最后的一个元素相同
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	list1.push_front(ia[0]);//在表头插入一个47
//	cout << "现list1中的元素：" << endl;
//	unique_copy(list1.begin(), list1.end(), output);
//	cout << endl;
//	system("PAUSE");
//	return 0;
//}
