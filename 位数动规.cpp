//#include<iostream>
//#include<cstdio>
//#include<cstring>
//using namespace std;
//int f[18][2], bit[18];
///*
//f[i][j]:i��λ��
//j==0��βλ����6
//j==1��βλ��6
//*/
//int dfs(int pos, bool six, bool lim)//λ����βλ�Ƿ���6���Ƿ�������
//{
//	if (pos <= 0)return 1;
//	if (!lim&&f[pos][six] != -1)
//		return f[pos][six];
//	int num = lim ? bit[pos] : 9; //�����λ��2,��һλ��3����������㵽��λΪ1����ôlim=0����ʾ��һλ����ȡ��9�ģ�
//								  //�����λΪ2����ôlim=1����һλֻ��ȡ��3
//	int ans = 0;
//	for (int i = 0; i <= num; i++) {
//		if (i == 4 || six && i == 2)continue;//����ټ�һλ��4������βλ��6�ټ�һλ��2����ô���ǲ��Ϸ���״̬��������
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