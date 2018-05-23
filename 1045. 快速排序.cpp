//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//int arr[100002];
//int arr_sort[100002];
//int ans[100002];
//int sure[100002];
//int n;
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//		arr_sort[i] = arr[i];
//	}
//	sort(arr_sort, arr_sort + n);
//	int temp = 0;
//	int max = 0;
//	for (int i = 0;i < n;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr_sort[i]>=max && arr_sort[i] == arr[i])
//		{
//			ans[temp] = arr[i];
//			temp++;
//		}
//	}
//	printf("%d\n", temp);
//	for (int i = 0;i < temp;i++)
//	{
//		printf("%d", ans[i]);
//		if (i + 1 != temp)
//			printf(" ");
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}