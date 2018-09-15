////https://blog.csdn.net/zearot/article/details/48299459
//#include <iostream>
//using namespace std;
//#define maxn 100007  //元素总个数  
//int Sum[maxn << 2], Add[maxn << 2];//Sum求和，Add为懒惰标记
//int A[maxn], n;//存原数组下标[1，n]
//
////PushUp函数更新节点信息，这里是求和
//void PushUp(int rt) 
//{ 
//	Sum[rt] = Sum[rt * 2] + Sum[rt * 2 + 1];
//}
////Build函数建立线段树
////PushUp函数更新节点信息 ，这里是求和
//void PushUp(int rt) { Sum[rt] = Sum[rt << 1] + Sum[rt << 1 | 1]; }
//
////Build函数建树 
//void Build(int l, int r, int rt) { //l,r表示当前节点区间，rt表示当前节点编号
//	if (l == r) {//若到达叶节点 
//		Sum[rt] = A[l];//储存数组值 
//		return;
//	}
//	int m = (l + r) >> 1;
//	//左右递归 
//	Build(l, m, rt << 1);
//	Build(m + 1, r, rt << 1 | 1);
//	//更新信息 
//	PushUp(rt);
//}
////假设A[L, R] += C
//void Update(int L, int R, int C, int l, int r, int rt) {//L,R表示操作区间，l,r表示当前节点区间，rt表示当前节点编号 
//	if (L <= l && r <= R) {//如果本区间完全在操作区间[L,R]以内 
//		Sum[rt] += C * (r - l + 1);//更新数字和，向上保持正确
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
//
//
//	//下推标记
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
//
////区间查询（本题为求和）：
////询问A[L..R]的和
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
//
//int main()
//{
//	//建树 
//	Build(1, n, 1);
//	//区间修改 
//	Update(L, R, C, 1, n, 1);
//	//区间查询 
//	int ANS = Query(L, R, 1, n, 1);
//}