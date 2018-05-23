//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//int Sum[400001];
//int Add[400001];
//int A[400001];
////PushUp函数更新节点信息，这里是求和
//void PushUp(int rt) { Sum[rt] = Sum[rt << 1] + Sum[rt << 1 | 1]; }
////Build函数建立线段树
//void Build(int l, int r, int rt) { //[l,r]表示当前节点区间，rt表示当前节点的实际存储位置 
//	if (l == r) {//若到达叶节点 
//		Sum[rt] = A[l];//存储A数组的值
//		return;
//	}
//	int m = (l + r) >> 1;
//	//左右递归
//	Build(l, m, rt << 1);
//	Build(m + 1, r, rt << 1 | 1);
//	//更新信息
//	PushUp(rt);
//}
//void PushDown(int rt, int ln, int rn) {
//	//ln,rn为左子树，右子树的数字数量。   
//	if (Add[rt]) {
//		//下推标记   
//		Add[rt << 1] += Add[rt];
//		Add[rt << 1 | 1] += Add[rt];
//		//修改子节点的Sum使之与对应的Add相对应   
//		Sum[rt << 1] += Add[rt] * ln;
//		Sum[rt << 1 | 1] += Add[rt] * rn;
//		//清除本节点标记   
//		Add[rt] = 0;
//	}
//}
//void Update(int L, int R, int C, int l, int r, int rt) {//L,R表示操作区间，l,r表示当前节点区间，rt表示当前节点编号   
//	if (L <= l && r <= R) {//如果本区间完全在操作区间[L,R]以内   
//		Sum[rt] += C*(r - l + 1);//更新数字和，向上保持正确  
//		Add[rt] += C;//增加Add标记，表示本区间的Sum正确，子区间的Sum仍需要根据Add的值来调整  
//		return;
//	}
//	int m = (l + r) >> 1;
//	PushDown(rt, m - l + 1, r - m);//下推标记  
//								   //这里判断左右子树跟[L,R]有无交集，有交集才递归   
//	if (L <= m) Update(L, R, C, l, m, rt << 1);
//	if (R >  m) Update(L, R, C, m + 1, r, rt << 1 | 1);
//	PushUp(rt);//更新本节点信息   
//}
//int Query(int L, int R, int l, int r, int rt) {//L,R表示操作区间，l,r表示当前节点区间，rt表示当前节点编号  
//	if (L <= l && r <= R) {
//		//在区间内，直接返回   
//		return Sum[rt];
//	}
//	int m = (l + r) >> 1;
//	//下推标记，否则Sum可能不正确  
//	PushDown(rt, m - l + 1, r - m);
//
//	//累计答案  
//	int ANS = 0;
//	if (L <= m) ANS += Query(L, R, l, m, rt << 1);
//	if (R >  m) ANS += Query(L, R, m + 1, r, rt << 1 | 1);
//	return ANS;
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> A[i];
//	}
//	Build(1, n, 1);
//	for (int i = 1; i <= m; i++)
//	{
//		string c;
//		cin >> c;
//		if (c == "Q")
//		{
//			int a, b;
//			cin >> a >> b;
//			cout << Query(a, b, 1, n, 1) << endl;
//		}
//		else if (c == "C")
//		{
//			int a, b, d;
//			cin >> a >> b >> d;
//			Update(a,b,d,1,n,1);
//		}
//	}
//	system("pause");
//	return 0;
//}