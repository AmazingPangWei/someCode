//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int num;
//	char c;
//	char str[100];
//	srand((unsigned)time(0)); //��ʱ�����֣�ÿ�β����������һ��
//	FILE *fp;
//	fp = fopen("C:\\Users\\��ΰ\\Desktop\\data.txt", "w");
//	for (int i = 0;i < 10;i++)
//	{
//		num = rand() % 101;  //����0-100�������
//		fprintf(fp, "%d ", num);
//	}
//	fputs("\n", fp);
//	fclose(fp);
//	fp = fopen("C:\\Users\\��ΰ\\Desktop\\data.txt", "a");
//	for (int i = 0;i < 10;i++)
//	{
//		num = rand() % 101;  //����0-100�������
//		fprintf(fp, "%d ", num);
//	}
//	fputs("\n", fp);
//	fclose(fp);
//	fp = fopen("C:\\Users\\��ΰ\\Desktop\\data.txt", "r");
//	while (fgets(str, 100, fp) != NULL)
//		printf("%s", str);
//	fclose(fp);
//	system("pause");
//	return 0;
//}