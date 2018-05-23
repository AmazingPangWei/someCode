//vector动态数组  array固定的数组
//#include<algorithm>
//#include<vector> 
//#include<iostream> 
//#include<functional>
//#include <iterator>
//using namespace std;
//int main() {
//	ostream_iterator<int> output(cout, " ");   /*用输出迭代子output来输出，其中第二参数" "表示用空格分隔各个整数。*/
//	int ia[18] = { 47,29,5,37,13,23,11,61,7,31,41,2,59,19,17,53,43,3 };
//	vector<int> vec(ia, ia + 9); //数据填入vector;vector共有7个构造函数,常用3个。
//								 //vector(),用以声明空的vector;vector(n),用以声明有n个元素的vector；
//								 //vector(first,last),用以声明一个vector， 
//								 //其元素的初值是从区间[first,last)所指定的序列中的元素复制而来的； 
//	vector<int> vec2(18);
//	if (vec.empty())
//		cout << "vector空" << endl;
//	else 
//	{
//		cout << "vector不空，" << "vector中的元素：" << endl;    
//		unique_copy(vec.begin(), vec.end(), output);
//		//去除重复元素再执行copy运算
//		//向量vec中的数据通过流迭代器output,放到cout输出流中
//		cout << endl;
//	}
//	cout << "当前分配元素空间数量:" << vec.capacity() << endl;
//	vec.reserve(12);
//	cout << "当前为vector保留的最小分配元素空间数量:" << vec.capacity() << endl; 
//	vec.erase(vec.begin(), vec.end());//删除vec中的元素
//	cout << "当前分配元素空间数量:" << vec.capacity() << endl;
//	vec.resize(10); //重新指定有效元素的个数
//	cout << "当前重新分配元素空间数量为10，实际分配元素空间数量:" << vec.capacity() << endl;
//	vec.assign(ia + 10, ia + 16);//存入ia[10]~ia[15]的元素
//	cout << "vector存放序列容许最大长度：" << vec.max_size() << endl; 
//	cout << "vector中的元素：" << endl;
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;
//	vec.assign(ia, ia + 18);//存入ia所有元素
//	cout << "vector中的元素：" << endl;
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;   
//	sort(vec.begin(), vec.end(), greater<int>());//降序排列
//	cout << "vector中的元素：" << endl; 
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;
//	cout << "用反转迭代子输出vector中的元素：" << endl; 
//	unique_copy(vec.rbegin(), vec.rend(), output);//反向输出
//	cout << endl;
//	cout << "第1个元素：" << vec.front() << endl;
//	cout << "最后1个元素：" << vec.back() << endl;
//	cout << "第7个元素：" << vec[6] << endl;
//	cout << "原vector2中的元素：" << endl;
//	unique_copy(vec2.begin(), vec2.end(), output);
//	cout << endl;
//	vec2.swap(vec);
//	cout << "交换后vector2中的元素：" << endl; 
//	unique_copy(vec2.begin(), vec2.end(), output); 
//	cout << endl;
//	cout << "交换后vector中的元素：" << endl;
//	unique_copy(vec.begin(), vec.end(), output);
//	cout << endl;
//	system("pause");
//	return 0;
//}
