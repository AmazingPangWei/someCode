//#include <iostream>
//using namespace std;
//#define  MAX    26 //�ַ�����С
//
//typedef struct TrieNode
//{
//	int nCount; //��¼���ַ����ִ���
//	struct TrieNode *next[MAX];
//}TrieNode;
//
//TrieNode Memory[1000000];
//int allocp = 0;
//
///*��ʼ��*/
//void InitTrieRoot(TrieNode **pRoot)
//{
//	*pRoot = NULL;
//}
//
///*�����½��*/
//TrieNode *CreateTrieNode()
//{
//	int i;
//	TrieNode *p;
//
//	p = &Memory[allocp++];
//	p->nCount = 1;
//	for (i = 0; i < MAX; i++)
//	{
//		p->next[i] = NULL;
//	}
//
//	return p;
//}
//
///*����*/
//void InsertTrie(TrieNode **pRoot, char *s)
//{
//	int i, k;
//	TrieNode *p;
//
//	if (!(p = *pRoot))
//	{
//		p = *pRoot = CreateTrieNode();
//	}
//	i = 0;
//	while (s[i])
//	{
//		k = s[i++] - 'a'; //ȷ��branch
//		if (p->next[k])
//			p->next[k]->nCount++;
//		else
//			p->next[k] = CreateTrieNode();
//		p = p->next[k];
//	}
//}
//
////����
//int SearchTrie(TrieNode **pRoot, char *s)
//{
//	TrieNode *p;
//	int i, k;
//
//	if (!(p = *pRoot))
//	{
//		return 0;
//	}
//	i = 0;
//	while (s[i])
//	{
//		k = s[i++] - 'a';
//		if (p->next[k] == NULL)    return 0;
//		p = p->next[k];
//	}
//	return p->nCount;
//}
//
//int main()
//{
//	TrieNode *root;
//	InitTrieRoot(&root);
//	char str[1][100];
//	for (int i = 0;i < 1;i++)
//	{
//		cin >> str[i];
//		InsertTrie(&root, str[i]);
//	}
//	cout<<SearchTrie(&root, "abcde");
//	system("pause");
//	return 0;
//}