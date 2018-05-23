//#include <iostream>
//#define max 50
//
//typedef int INT;
//using namespace std;
//
//typedef struct
//{
//	INT Elem[max];
//	INT last;
//}List;
//
//void InitList(List *L)
//{
//	L->last = -1;
//}
//void creatList(List *L, int n)
//{
//	int i;
//	for (i = 0;i < n;i++)
//		cin >> L->Elem[i];
//	L->last = n - 1;
//}
//void printList(List *L)
//{
//	int i;
//	for (i = 0;i <= L->last;i++)
//		cout << L->Elem[i]<<' ';
//}
//void DeleteList(List *L, int n)
//{
//	int i;
//	for (i = n;i <= L->last;i++)
//		L->Elem[i - 1] = L->Elem[i];
//	L->last--;
//}
//void insList(List *L, int n, int e)
//{
//	int i;
//	for (i = L->last;i >= n-1;i--)
//		L->Elem[i+1] = L->Elem[i];
//	L->Elem[n - 1] = e;
//	L->last++;
//}
//
//int main()
//{
//	List A;
//	InitList(&A);
//	creatList(&A, 5);
//	printList(&A);
//	cout << endl;
//	DeleteList(&A,5);
//	printList(&A);
//	cout << endl;
//	insList(&A, 3, 10);
//	printList(&A);
//	system("pause");
//
//}