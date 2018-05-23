//// Globals which should be set before calling this function:
////
//// int    polySides  =  多边形有多少边点
//// float  polyX[]    =  点的水平方向的参数
//// float  polyY[]    =  点的垂直方向上的参数
//// float  x,y       =  被测试的点
//
////如果x，y在多边形内，函数将返回YES，
////如果不是的话返回NO。如果点正好在多边形的边缘上，
////然后，函数可以返回是或否。
////
//// Note that division by zero is avoided because the division is protected
////  by the "if" clause which surrounds it.
//
////注意被0除的情况已经被避免了，因为除法被"if"保护了
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
//			&& (polyX[i] <= x || polyX[j] <= x))//判断与边有交点 
//		{
//			if (polyX[i] + (y - polyY[i]) / (polyY[j] - polyY[i])*(polyX[j] - polyX[i])<x) 
//			{
//				oddNodes = !oddNodes;
//			}
//		}
//		j = i;//换边
//	}
//
//	return oddNodes;
//}