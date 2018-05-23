//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int f[18][2], bit[18];
///*
//f[i][j]:i是位数
//j==0，尾位不是6
//j==1，尾位是6
//*/
//int dfs(int pos, bool six, bool lim)//位数，尾位是否是6，是否是上限
//{
//	if (pos <= 0)return 1;
//	if (!lim&&f[pos][six] != -1)
//		return f[pos][six];
//	int num = lim ? bit[pos] : 9; //假设该位是2,下一位是3，如果现在算到该位为1，那么lim=0，表示下一位是能取到9的，
//								  //如果该位为2，那么lim=1，下一位只能取到3
//	int ans = 0;
//	for (int i = 0; i <= num; i++) {
//		if (i == 4 || six && i == 2)continue;//如果再加一位是4，或者尾位是6再加一位是2，那么都是不合法的状态，跳过。
//		ans += dfs(pos - 1, i == 1, lim&&i == num);
//	}
//	if (!lim)f[pos][six] = ans;
//	return ans;
//}
//int solve(int n)
//{
//	int len = 0;
//	memset(f, -1, sizeof(f));
//	while (n) {
//		bit[++len] = n % 10;
//		n /= 10;
//	}
//	return dfs(len, 0, 1);
//}
//int main()
//{
//	int a, b;
//	while (~scanf("%d%d", &a, &b) && (a + b)) {
//		int t_b = solve(b);
//		int t_a = solve(a - 1);
//		int a = t_b - t_a;
//	}
//	return 0;
//}