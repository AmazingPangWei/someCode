////https://www.bilibili.com/video/av11866460/
////https://www.cnblogs.com/yjiyjige/p/3263858.html
//#include <iostream>
//#include <string>
//using namespace std;
//
//int Next[1000];
//string text;//文本
//string ps;  //匹配串
//void GetNext()//求匹配串的next数组
//{
//	Next[0] = -1;
//	int k = -1;
//	int j = 0;
//	while (j < ps.size()-1)//以后一个字符不用匹配,具体见视频
//	{
//		if (k == -1 || ps[k]==ps[j])//当是一个字符时，或者是k位等于j位时
//		{
//			Next[++j] = ++k;
//		}
//		else
//		//对博客的解释：
//		//ABACDABABC
//		//当k+1在3时（即D），j+1在倒数第一位，不相等
//		//所以用ABAC去匹配ABAB
//		//所以当D匹配失败时，利用next数组，将k移到next[k]的位置，进行优化
//		{
//			k = Next[k];
//		}
//	}
//}
//
//void kmp()
//{
//	GetNext();//获得next数组
//	int i = 0;//对应text字符串index
//	int j = 0;//对应匹配串index
//	int flag = 0;//是否有匹配串
//	while (i < text.size())
//	{
//		if (j == -1 || text[i] == ps[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			j = Next[j];
//		}
//		if (j == ps.size())//找到匹配串
//		{
//			cout << i - j << endl;//输出匹配的位置
//			j = Next[j];//继续匹配
//			flag = 1;
//		}
//	}
//	if(!flag)
//		cout << "未找到匹配串" << endl;
//}
//
//int main()
//{
//	//cin >> text >> ps;
//	cin >> ps;
//	GetNext();
//	for (int i = 0; i < ps.size(); i++)
//		cout << Next[i] << ' ';
//	//kmp();
//
//	system("pause");
//	return 0;
//}