//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//int Sum[400001];
//int Add[400001];
//int A[400001];
////PushUp�������½ڵ���Ϣ�����������
//void PushUp(int rt) { Sum[rt] = Sum[rt << 1] + Sum[rt << 1 | 1]; }
////Build���������߶���
//void Build(int l, int r, int rt) { //[l,r]��ʾ��ǰ�ڵ����䣬rt��ʾ��ǰ�ڵ��ʵ�ʴ洢λ�� 
//	if (l == r) {//������Ҷ�ڵ� 
//		Sum[rt] = A[l];//�洢A�����ֵ
//		return;
//	}
//	int m = (l + r) >> 1;
//	//���ҵݹ�
//	Build(l, m, rt << 1);
//	Build(m + 1, r, rt << 1 | 1);
//	//������Ϣ
//	PushUp(rt);
//}
//void PushDown(int rt, int ln, int rn) {
//	//ln,rnΪ��������������������������   
//	if (Add[rt]) {
//		//���Ʊ��   
//		Add[rt << 1] += Add[rt];
//		Add[rt << 1 | 1] += Add[rt];
//		//�޸��ӽڵ��Sumʹ֮���Ӧ��Add���Ӧ   
//		Sum[rt << 1] += Add[rt] * ln;
//		Sum[rt << 1 | 1] += Add[rt] * rn;
//		//������ڵ���   
//		Add[rt] = 0;
//	}
//}
//void Update(int L, int R, int C, int l, int r, int rt) {//L,R��ʾ�������䣬l,r��ʾ��ǰ�ڵ����䣬rt��ʾ��ǰ�ڵ���   
//	if (L <= l && r <= R) {//�����������ȫ�ڲ�������[L,R]����   
//		Sum[rt] += C*(r - l + 1);//�������ֺͣ����ϱ�����ȷ  
//		Add[rt] += C;//����Add��ǣ���ʾ�������Sum��ȷ���������Sum����Ҫ����Add��ֵ������  
//		return;
//	}
//	int m = (l + r) >> 1;
//	PushDown(rt, m - l + 1, r - m);//���Ʊ��  
//								   //�����ж�����������[L,R]���޽������н����ŵݹ�   
//	if (L <= m) Update(L, R, C, l, m, rt << 1);
//	if (R >  m) Update(L, R, C, m + 1, r, rt << 1 | 1);
//	PushUp(rt);//���±��ڵ���Ϣ   
//}
//int Query(int L, int R, int l, int r, int rt) {//L,R��ʾ�������䣬l,r��ʾ��ǰ�ڵ����䣬rt��ʾ��ǰ�ڵ���  
//	if (L <= l && r <= R) {
//		//�������ڣ�ֱ�ӷ���   
//		return Sum[rt];
//	}
//	int m = (l + r) >> 1;
//	//���Ʊ�ǣ�����Sum���ܲ���ȷ  
//	PushDown(rt, m - l + 1, r - m);
//
//	//�ۼƴ�  
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