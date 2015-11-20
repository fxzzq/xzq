/*
设计并测试一个名为Trapezium的梯形类，其属性为梯形的四个顶点的坐标。该梯形上边和下边均和x轴平行。
根据类的封装性要求，在类的声明中用8个私有的整型变量表示4个点的坐标值，声明成员函数initial(int,int,int,int,int,int,int,int)初始化数据成员，函数GetPosition(int&,int&,int&,int&,int&,int&,int&,int&)读取坐标值，函数Area()计算面积。

输入格式:
梯形四个顶点的坐标，

输出格式：
梯形的面积，依次为左上(x1,y1)、右上(x2,y2)、左下(x3,y3)和右下(x4,y4)角的顶点。

输入样例：
3 2 5 2 1 -4 7 -4

输出样例：
24
*/
#include<iostream>
#include<cstring>
using namespace std;
class Trapezium{
    private:
        int x1,x2,x3,x4;
        int y1,y2,y3,y4;
    public:
        Trapezium(int,int,int,int,int,int,int,int);
        void GetPosition(int&,int&,int&,int&,int&,int&,int&,int&);
        int Area();
};
Trapezium::Trapezium(int a1,int b1,int a2,int b2,int a3,int b3,int a4,int b4):x1(a1),y1(b1),x2(a2),y2(b2),x3(a3),y3(b3),x4(a4),y4(b4)
{} //
void Trapezium::GetPosition(int &a1,int &b1,int &a2,int &b2,int &a3,int &b3,int &a4,int &b4){
    a1=x1;
    a2=x2;
    a3=x3;
    a4=x4;
    b1=y1;
    b2=y2;
    b3=y3;
    b4=y4;
}
int Trapezium::Area()
{
    return ((x2-x1)+(x4-x3))*(y1-y3)/2;
}
int main(){
    int x1,x2,x3,x4;
    int y1,y2,y3,y4; 
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    Trapezium e(x1,y1,x2,y2,x3,y3,x4,y4);
    e.GetPosition(x1,y1,x2,y2,x3,y3,x4,y4);
    cout<<e.Area()<<endl;
    return 0;
}
