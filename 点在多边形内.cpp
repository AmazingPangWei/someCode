//// Globals which should be set before calling this function:
////
//// int    polySides  =  ������ж��ٱߵ�
//// float  polyX[]    =  ���ˮƽ����Ĳ���
//// float  polyY[]    =  ��Ĵ�ֱ�����ϵĲ���
//// float  x,y       =  �����Եĵ�
//
////���x��y�ڶ�����ڣ�����������YES��
////������ǵĻ�����NO������������ڶ���εı�Ե�ϣ�
////Ȼ�󣬺������Է����ǻ��
////
//// Note that division by zero is avoided because the division is protected
////  by the "if" clause which surrounds it.
//
////ע�ⱻ0��������Ѿ��������ˣ���Ϊ������"if"������
//
//#define NO 0
//#define YES 1
//
//int    polySides;
//float  polyX[10];
//float  polyY[10];
//float  x, y;
//
//bool pointInPolygon() {
//
//	int   i, j = polySides - 1;
//	bool  oddNodes = NO;
//
//	for (i = 0;i<polySides; i++) 
//	{
//		if ((polyY[i]< y && polyY[j] >= y|| polyY[j]<y && polyY[i] >= y)
//			&& (polyX[i] <= x || polyX[j] <= x))//�ж�����н��� 
//		{
//			if (polyX[i] + (y - polyY[i]) / (polyY[j] - polyY[i])*(polyX[j] - polyX[i])<x) 
//			{
//				oddNodes = !oddNodes;
//			}
//		}
//		j = i;//����
//	}
//
//	return oddNodes;
//}