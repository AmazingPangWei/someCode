//#include <iostream>
//#include <time.h>
//#define NUM 20
//#define PATH  "C:\\Users\\庞伟\\Desktop\\data.txt" //PATH为用户自定义的路径
//using namespace std;
//
//void print(int, FILE *);
//
//typedef struct node//树的结点
//{
//	int data;
//	node *lchild, *rchild;
//}BSTNode,*BSTree;
//
//typedef struct Queue//循环对列，用于层序输出树的结点
//{
//	BSTree data[NUM];
//	int rear, front;
//}Queue;
//
//void InitQueue(Queue *Q)//初始化循环队列
//{
//	Q->front = Q->rear = 0;
//}
//
//void InitTree(BSTree *T, int key)//执行插入功能
//{
//	if ((*T) == NULL)//当根节点存在的时候
//	{
//		BSTree s;
//		s = (BSTree)malloc(sizeof(node));//对其分配内存空间
//		s->data = key;//填写数值
//		s->lchild = NULL;
//		s->rchild = NULL;
//		*T = s;//让结点指向s
//	}
//	else if ((*T)->data > key)//数值小于结点时，数值进入结点的左孩子
//	{
//		InitTree(&((*T)->lchild), key);
//	}
//	else if ((*T)->data < key)//数值大于结点时，数值进入结点的右孩子
//	{
//		InitTree(&((*T)->rchild), key);
//	}
//	else if ((*T)->data == key)//相等时忽略该数
//		;
//}
//
//void make(BSTree *T,int n,FILE *fp)//建立有n个结点的排序二叉树
//{
//	int  i ,t;
//	*T = NULL;
//	srand((unsigned)time(0)); //用时间做种，每次产生随机数不一样
//	for (i = 0;i < n;i++)
//	{
//		t = rand() % 101;  //产生0-100的随机数
//		print(t, fp);//将初始化的数存入文件
//		InitTree(T, t);//存入排序二叉树
//	}
//}
//
//void print(int key,FILE *fp)//文件的存入
//{
//	fprintf(fp, "%d ", key);//写入数值
//}
//
//void PreOrder(BSTree T,FILE *fp)//将先序遍历存入文件
//{
//	if (T != NULL)
//	{
//		print(T->data,fp);
//		PreOrder(T->lchild,fp);
//		PreOrder(T->rchild,fp);
//	}
//}    
//void InOrder(BSTree T,FILE *fp)//将中序遍历存入文件
//{
//	if (T != NULL)
//	{
//		InOrder(T->lchild,fp);
//		print(T->data,fp);
//		InOrder(T->rchild,fp);
//	}
//}
//void enterQueue(Queue *Q, BSTree T)//入队
//{
//	if ((Q->rear + 1) % NUM == Q->front)//队满时，结束
//		return;
//	Q->data[Q->rear] = T;
//	Q->rear = (Q->rear + 1) % NUM;//控制循环队列
//}
//
//void deleteQueue(Queue *Q, BSTree *T)//出队
//{
//	if (Q->rear == Q->front)//对空时，无法出对
//		return;
//	*T = Q->data[Q->front];
//	Q->front = (Q->front + 1) % NUM;//控制循环队列
//}
//void LayerOrder(BSTree T,FILE *fp)//将层序遍历存入文件
//{
//	Queue Q;
//	BSTree q;
//	InitQueue(&Q);//初始化队列
//	if (T == NULL)
//		return;
//	enterQueue(&Q, T);//根结点入队
//	while (Q.front != Q.rear)//当对不空的时候，执行循环
//	{
//		deleteQueue(&Q, &q);//对头的元素出对
//		print(q->data,fp);//存入文件
//		if (q->lchild != NULL)
//			enterQueue(&Q, q->lchild);//有左孩子时，把左孩子入队
//		if (q->rchild != NULL)
//			enterQueue(&Q, q->rchild);//有右孩子时，让右孩子入队
//	}
//}
//int deep = 0;//deep为树的高度
//
//void high(BSTree T, int h)//求树的高度
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
//	char c;//c来判断用户是否想查看文件的内容
//	char str[100];//用来查看文件的内容
//	cout << "我们将用随机数产生数值，进行二叉排序树的构造！" << endl
//		 << "请输入要构造的个数（小于20）" << endl;
//	cin >> n;
//
//	FILE *fp;
//	BSTree T;
//	fp = fopen(PATH, "a");//追加打开文件
//	fputs("初始随机值为：\n", fp);
//	make(&T, n,fp);//构造排序二叉树
//	fputs("\n", fp);
//	fclose(fp);//关闭文件
//
//	fp = fopen(PATH, "a");//追加打开文件
//	fputs("先序遍历：\n", fp);
//	PreOrder(T,fp);
//	fputs("\n", fp);
//	fclose(fp);//关闭文件
//
//	fp = fopen(PATH, "a");//追加打开文件
//	fputs("中序遍历以排序：\n", fp);
//	InOrder(T,fp);
//	fputs("\n", fp);
//	fclose(fp);//关闭文件
//
//	high(T, 1);
//
//	fp = fopen(PATH, "a");//追加打开文件
//	fputs("层序遍历：\n", fp);
//	LayerOrder(T,fp);
//	fputs("\n", fp);
//	fprintf(fp, "该树的结点个数为：%d\n该树的高度为：%d\n", n, deep);//存入结点个数及高度等信息
//	fputs("\n", fp);
//	fclose(fp);//关闭文件
//
//	printf("请问您是否想查看该文件？(Y:是，其他:否)");
//	cin >> c;
//	if (c == 'Y')
//	{
//		fp = fopen(PATH, "r");//只读打开该文件
//		while (fgets(str, 20, fp) != NULL)
//			printf("%s", str);
//		fclose(fp);
//	}
//	cout << "感谢使用！" << endl;
//	system("pause");
//	return 0;
//}