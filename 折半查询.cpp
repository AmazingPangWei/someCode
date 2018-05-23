//#include <iostream>
//using namespace std;
//#define M 20
//typedef int Etype;
//typedef struct
//{
//	Etype r[M + 1];
//	int len;
//}SeqList;
//
//
//int search(SeqList L, int len, int key)
//{
//	int low = 0, high = len;
//	int mid;
//	int time = 0;
//	while (low <= high)
//	{
//		time++;
//		mid = (low + high) / 2;
//		if (key < L.r[mid])
//			high = mid - 1;
//		else if (key > L.r[mid])
//			low = mid + 1;
//		else if (key == L.r[mid])
//			return time;
//	}
//	return time;
//}
//
//int main()
//{
//	SeqList L;
//	L.len = 0;
//	int t;
//	int key;
//	while (1)
//	{
//		cin >> t;
//		if (t == -1)
//			break;
//		L.r[L.len] = t;
//		L.len++;
//	}
//	cin >> key;
//	cout << search(L, L.len - 1, key) << endl;
//
//	//system("pause");
//	return 0;
//}