////http://blog.csdn.net/zearot/article/details/52280189
//#include <iostream>
//using namespace std;
//#define maxn 100007  //Ԫ���ܸ���  
//int Sum[maxn * 4];//Sum��ͣ����ı��ռ�
//int A[maxn], n;//��ԭ�����±�[1��n]
//
////PushUp�������½ڵ���Ϣ�����������
//void PushUp(int rt) 
//{ 
//	Sum[rt] = Sum[rt * 2] + Sum[rt * 2 + 1];
//}
////Build���������߶���
//void Build(int l, int r, int rt) { //[l,r]��ʾ��ǰ�ڵ����䣬rt��ʾ��ǰ�ڵ��ʵ�ʴ洢λ�� 
//	if (l == r) {//������Ҷ�ڵ� 
//		Sum[rt] = A[l];//�洢A�����ֵ
//		return;
//	}
//	int m = (l + r) / 2;
//	//���ҵݹ�
//	Build(l, m, rt * 2);
//	Build(m + 1, r, rt * 2 + 1);
//	//������Ϣ
//	PushUp(rt);
//}
////���޸�
////����A[L]+=C:
//void Update(int L, int C, int l, int r, int rt) {//[l,r]��ʾ��ǰ���䣬rt�ǵ�ǰ�ڵ��� 
//	if (l == r) {//����Ҷ�ڵ㣬�޸�Ҷ�ڵ��ֵ
//		Sum[rt] += C;
//		return;
//	}
//	int m = (l + r) / 2;
//	//���������ж������������û�������
//	if (L <= m)
//		Update(L, C, l, m, 2 * rt);
//	else       
//		Update(L, C, m + 1, r, 2 * rt + 1);
//	PushUp(rt);//�ӽڵ����Ϣ�����ˣ����Ա��ڵ�ҲҪ������Ϣ
//}
//
////�����ѯ������Ϊ��ͣ���
////ѯ��A[L..R]�ĺ�
//int Query(int L, int R, int l, int r, int rt) {//[L,R]��ʾ�������䣬[l,r]��ʾ��ǰ���䣬rt:��ǰ�ڵ���
//	if (L <= l && r <= R) {
//		//��������ֱ�ӷ���
//		return Sum[rt];
//	}
//	int m = (l + r) / 2;
//	//��������:[l,m] �������䣺[m+1,r]  �������:[L,R]
//	//�ۼӴ�
//	int ANS = 0;
//	if (L <= m) 
//		ANS += Query(L, R, l, m, 2 * rt);//����������[L,R]���ص����ݹ�
//	if (R > m)
//		ANS += Query(L, R, m + 1, r, 2 * rt + 1); //����������[L,R]���ص����ݹ�
//	return ANS;
//}
