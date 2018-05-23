//#include <iostream>
//using namespace std;
//
//struct Score
//{
//	int score = 0;
//	int choice[100];//学生选项
//};
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int *score = new int[M];
//	int i;
//	for (i = 0;i < M;i++)
//		cin >> score[i];
//	int *answer = new int[M];
//	for (i = 0;i < M;i++)
//		cin >> answer[i];
//	Score *p;
//	p = new Score[N];
//	for (i = 0;i < N;i++)
//		for (int j = 0;j < M;j++)
//		{
//			cin >> p[i].choice[j];
//			if (p[i].choice[j] == answer[j])
//				p[i].score = p[i].score + score[j];
//		}
//	for (i = 0;i < N;i++)
//		cout << p[i].score << endl;
//	delete[]score;
//	delete[]answer;
//	delete[]p;
//	system("pause");
//	return 0;
//}