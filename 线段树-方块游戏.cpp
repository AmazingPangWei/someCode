///*
//描述:
//小Ho在玩一款类似俄罗斯方块的游戏。与原版俄罗斯方块不同的是，落下方块都是长度不一的横向长条，并且不能移动也不能变成竖直方向。
//XXXXXX  <- 长度为6的横向长条。
//第i个长条的最左端的格子坐标是Li，最右端的格子坐标是Ri；长条从很高的位置下落，中途遇到地面或者受到之前长条支撑，就会停在当前高度。
//你能计算出每个长条最后停留的高度是多少吗？ 直接停在地面上的长条高度视为1。
//
//输入:
//第一行包含一个整数N。
//以下N行每行包含两个整数Li, Ri。
//1 ≤ N ≤ 100000, 1 ≤ Li ≤ Ri ≤ 100000
//
//输出:
//输出N行，每行包含一個整数，代表第i个长条停留的高度。
//
//样例输入:
//5
//10 15
//7 12
//12 19
//1 4
//1 7
//
//样例输出:
//1
//2
//3
//1
//3
//*/
//
////题解：本题用线段树可以大大节约时间
////思路：与之前提到的思路一样，本题就是模拟一次方块下路的过程
////再之后，用线段树记录落下方块的区间情况，然后以此来判断，区间到底会落到哪一层
////详情请看源码
//#include <iostream>
//#include <algorithm>
//#define INF 0x3f3f3f3f
////#define max(a,b) a>b?a:b
//using namespace std;
//
//int x, y, z; //z是本区间能达到最大层数
//struct area {
//	int m;   
//	int mark;//延迟标记
//};
//
//area tree[100100 * 4];//线段树，开4倍空间
////线段树记录区间出现最大层数，初始均为0；
//
//void PushUp(int r)//更新区间后线段树会更新
//{
//	if (tree[r].mark != 0)
//	{
//		tree[r * 2].mark = tree[r].mark;
//		tree[r * 2 + 1].mark = tree[r].mark;
//		tree[r * 2].m = tree[r].mark;
//		tree[r * 2 + 1].m = tree[r].mark;
//		tree[r].mark = 0;
//	}
//}
//
//void update(int L,int R,int root)//更新区间 ,x,y是要求更新的区间，
//                                 //L,R是需要更新的区间,root是根节点
//{
//	if (x > R || y < L)
//		return ;
//	if (x <= L && y >= R)
//	{
//		tree[root].m = z;        //为符合条件的区间赋予最大层数值
//		tree[root].mark = z;
//		return;
//	}
//	int mid = (L + R)/ 2 ;
//	PushUp(root);//更新结点
//	update(L, mid, root * 2);
//	update(mid + 1, R, root * 2 + 1);
//	tree[root].m = max(tree[root * 2].m, tree[root * 2 + 1].m);
//}
//
//int search(int L, int R, int root) //查询层数并利用延迟标记更新数据
//{
//	//查询区间和当前节点区间没有交集
//	if (x > R || y < L)
//		return 0;
//	//当前节点区间包含在查询区间内
//	if (x <= L && y >= R)
//		return tree[root].m;
//	int mid = (L + R) / 2;
//	PushUp(root); //----延迟标志域向下传递
//	return max(search(L, mid, root * 2), search(mid + 1, R, root * 2 + 1));
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		//输入区间
//		cin >> x >> y;
//		int temp = search(1, 100000, 1);//从1~100000中查找x~y的区间能叠加的最大值
//		//temp是区间下面能达到的最大层数
//		z = temp + 1;//z能达到比temp+1的层数
//		cout << z << endl;
//		update(1, 100000, 1);//更新数据
//	}
////	system("pause");
//	return 0;
//}
