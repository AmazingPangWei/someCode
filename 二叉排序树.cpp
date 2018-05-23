//#include <iostream>
//#include <time.h>
//#define NUM 20
//#define PATH  "C:\\Users\\��ΰ\\Desktop\\data.txt" //PATHΪ�û��Զ����·��
//using namespace std;
//
//void print(int, FILE *);
//
//typedef struct node//���Ľ��
//{
//	int data;
//	node *lchild, *rchild;
//}BSTNode,*BSTree;
//
//typedef struct Queue//ѭ�����У����ڲ���������Ľ��
//{
//	BSTree data[NUM];
//	int rear, front;
//}Queue;
//
//void InitQueue(Queue *Q)//��ʼ��ѭ������
//{
//	Q->front = Q->rear = 0;
//}
//
//void InitTree(BSTree *T, int key)//ִ�в��빦��
//{
//	if ((*T) == NULL)//�����ڵ���ڵ�ʱ��
//	{
//		BSTree s;
//		s = (BSTree)malloc(sizeof(node));//��������ڴ�ռ�
//		s->data = key;//��д��ֵ
//		s->lchild = NULL;
//		s->rchild = NULL;
//		*T = s;//�ý��ָ��s
//	}
//	else if ((*T)->data > key)//��ֵС�ڽ��ʱ����ֵ�����������
//	{
//		InitTree(&((*T)->lchild), key);
//	}
//	else if ((*T)->data < key)//��ֵ���ڽ��ʱ����ֵ��������Һ���
//	{
//		InitTree(&((*T)->rchild), key);
//	}
//	else if ((*T)->data == key)//���ʱ���Ը���
//		;
//}
//
//void make(BSTree *T,int n,FILE *fp)//������n���������������
//{
//	int  i ,t;
//	*T = NULL;
//	srand((unsigned)time(0)); //��ʱ�����֣�ÿ�β����������һ��
//	for (i = 0;i < n;i++)
//	{
//		t = rand() % 101;  //����0-100�������
//		print(t, fp);//����ʼ�����������ļ�
//		InitTree(T, t);//�������������
//	}
//}
//
//void print(int key,FILE *fp)//�ļ��Ĵ���
//{
//	fprintf(fp, "%d ", key);//д����ֵ
//}
//
//void PreOrder(BSTree T,FILE *fp)//��������������ļ�
//{
//	if (T != NULL)
//	{
//		print(T->data,fp);
//		PreOrder(T->lchild,fp);
//		PreOrder(T->rchild,fp);
//	}
//}    
//void InOrder(BSTree T,FILE *fp)//��������������ļ�
//{
//	if (T != NULL)
//	{
//		InOrder(T->lchild,fp);
//		print(T->data,fp);
//		InOrder(T->rchild,fp);
//	}
//}
//void enterQueue(Queue *Q, BSTree T)//���
//{
//	if ((Q->rear + 1) % NUM == Q->front)//����ʱ������
//		return;
//	Q->data[Q->rear] = T;
//	Q->rear = (Q->rear + 1) % NUM;//����ѭ������
//}
//
//void deleteQueue(Queue *Q, BSTree *T)//����
//{
//	if (Q->rear == Q->front)//�Կ�ʱ���޷�����
//		return;
//	*T = Q->data[Q->front];
//	Q->front = (Q->front + 1) % NUM;//����ѭ������
//}
//void LayerOrder(BSTree T,FILE *fp)//��������������ļ�
//{
//	Queue Q;
//	BSTree q;
//	InitQueue(&Q);//��ʼ������
//	if (T == NULL)
//		return;
//	enterQueue(&Q, T);//��������
//	while (Q.front != Q.rear)//���Բ��յ�ʱ��ִ��ѭ��
//	{
//		deleteQueue(&Q, &q);//��ͷ��Ԫ�س���
//		print(q->data,fp);//�����ļ�
//		if (q->lchild != NULL)
//			enterQueue(&Q, q->lchild);//������ʱ�����������
//		if (q->rchild != NULL)
//			enterQueue(&Q, q->rchild);//���Һ���ʱ�����Һ������
//	}
//}
//int deep = 0;//deepΪ���ĸ߶�
//
//void high(BSTree T, int h)//�����ĸ߶�
//{
//	if (T != NULL)
//	{
//		if (h > deep)
//			deep = h;
//		high(T->lchild, h + 1);
//		high(T->rchild, h + 1);
//	}
//}
//int main()
//{
//	int n;
//	char c;//c���ж��û��Ƿ���鿴�ļ�������
//	char str[100];//�����鿴�ļ�������
//	cout << "���ǽ��������������ֵ�����ж����������Ĺ��죡" << endl
//		 << "������Ҫ����ĸ�����С��20��" << endl;
//	cin >> n;
//
//	FILE *fp;
//	BSTree T;
//	fp = fopen(PATH, "a");//׷�Ӵ��ļ�
//	fputs("��ʼ���ֵΪ��\n", fp);
//	make(&T, n,fp);//�������������
//	fputs("\n", fp);
//	fclose(fp);//�ر��ļ�
//
//	fp = fopen(PATH, "a");//׷�Ӵ��ļ�
//	fputs("���������\n", fp);
//	PreOrder(T,fp);
//	fputs("\n", fp);
//	fclose(fp);//�ر��ļ�
//
//	fp = fopen(PATH, "a");//׷�Ӵ��ļ�
//	fputs("�������������\n", fp);
//	InOrder(T,fp);
//	fputs("\n", fp);
//	fclose(fp);//�ر��ļ�
//
//	high(T, 1);
//
//	fp = fopen(PATH, "a");//׷�Ӵ��ļ�
//	fputs("���������\n", fp);
//	LayerOrder(T,fp);
//	fputs("\n", fp);
//	fprintf(fp, "�����Ľ�����Ϊ��%d\n�����ĸ߶�Ϊ��%d\n", n, deep);//������������߶ȵ���Ϣ
//	fputs("\n", fp);
//	fclose(fp);//�ر��ļ�
//
//	printf("�������Ƿ���鿴���ļ���(Y:�ǣ�����:��)");
//	cin >> c;
//	if (c == 'Y')
//	{
//		fp = fopen(PATH, "r");//ֻ���򿪸��ļ�
//		while (fgets(str, 20, fp) != NULL)
//			printf("%s", str);
//		fclose(fp);
//	}
//	cout << "��лʹ�ã�" << endl;
//	system("pause");
//	return 0;
//}