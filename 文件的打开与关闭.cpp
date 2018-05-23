//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int num;
//	char c;
//	char str[100];
//	srand((unsigned)time(0)); //用时间做种，每次产生随机数不一样
//	FILE *fp;
//	fp = fopen("C:\\Users\\庞伟\\Desktop\\data.txt", "w");
//	for (int i = 0;i < 10;i++)
//	{
//		num = rand() % 101;  //产生0-100的随机数
//		fprintf(fp, "%d ", num);
//	}
//	fputs("\n", fp);
//	fclose(fp);
//	fp = fopen("C:\\Users\\庞伟\\Desktop\\data.txt", "a");
//	for (int i = 0;i < 10;i++)
//	{
//		num = rand() % 101;  //产生0-100的随机数
//		fprintf(fp, "%d ", num);
//	}
//	fputs("\n", fp);
//	fclose(fp);
//	fp = fopen("C:\\Users\\庞伟\\Desktop\\data.txt", "r");
//	while (fgets(str, 100, fp) != NULL)
//		printf("%s", str);
//	fclose(fp);
//	system("pause");
//	return 0;
//}