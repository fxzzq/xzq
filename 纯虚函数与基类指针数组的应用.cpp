/*
题目内容：
定义抽象基类Shape, 
其中纯虚函数printName（）输出几何图形的名称和相应的成员数据、纯虚函数printArea（）计算几何图形的面积。
并由Shape类派生出5个派生类：Circle（圆形），数据成员为半径、Square(正方形) 
，数据成员为边长、Rectangle(长方形) ，数据成员为长和宽、Trapezoid(梯形) ，
数据成员为上底、下底和高、Triangle(三角形) 
，数据成员为底和高。测试过程，定义一个指向基类的指针数组，使其每个元素指向一个动态产生的派生类对象，
分别调用相应的成员函数显示各个几何图形的属性及面积，最终输出总面积值。

输入格式:
依次输入圆半径、正方形边长、长方形长宽、梯形上底下底和高、三角形底边和高

输出格式：
请参考输出样例，建议直接复制样例中的部分文字粘贴进自己的代码。圆周率取 3.14159

输入样例：
10
5
2 4
1 2 3
4 3

输出样例：
圆:半径=10,面积:314.159
正方形:边长=5,面积:25
长方形:长=2,宽=4,面积:8
梯形:上底=1,下底=2,高=3,面积:4.5
三角形:底边=4,高=3,面积:6
总面积:357.659
*/
#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159
class Shape{
    private:
         
    public:
        virtual double GetArea() = 0;
        virtual void printName() = 0;
         
         
};
 
class Circle:public Shape{
       double r;
    public:
        Circle(double r){
            this->r = r;
        }
         
         double GetArea(){
            return PI*r*r;
        }
         
         void printName(){
            cout<<"圆:半径="<<r<<",面积:"<<GetArea()<<endl;
        }   
}; 
 
class Square:public Shape{
        double r;
    public:
        Square( double r){
            this->r = r;
        }
         
        virtual double GetArea(){
            return r*r;
        }
         
        virtual void printName(){
            cout<<"正方形:边长="<<r<<",面积:"<<GetArea()<<endl;
        }           
         
}; 
class Rectangle:public Shape{
       double width,hight;
    public:
        Rectangle( double w, double h){
            width = w;
            hight = h;
        }
         
        virtual double GetArea(){
            return width*hight;
        }
         
        virtual void printName(){
            cout<<"长方形:长="<<width<<",宽="<<hight<<",面积:"<<GetArea()<<endl;
        }   
}; 
class Trapezoid:public Shape{
         double up,down,hight;
    public:
        Trapezoid( double u, double d, double h){
            up = u;
            down = d;
            hight = h;
        }
         
        virtual double GetArea(){
            return  (up+down)*hight/2.0;
        }
         
        virtual void printName(){
            cout<<"梯形:上底="<<up<<",下底="<<down<<",高="<<hight<<",面积:"<<GetArea()<<endl;
        }   
         
         
}; 
class Triangle:public Shape{
         double down,hight;
    public:
        Triangle( double d, double h){
            down = d;
            hight = h;
        }
         
        virtual double GetArea(){
            return  down*hight/2.0;
        }
         
        virtual void printName(){
            cout<<"三角形:底边="<<down<<",高="<<hight<<",面积:"<<GetArea()<<endl;
        }   
             
}; 
int main(){
     double r ;
    cin>>r;
    Circle C(r);
    cin>>r;
    Square S(r);
   double w,h;
    cin>>w>>h;
    Rectangle R(w,h);
    double u,d;
    cin>>u>>d>>h;
    Trapezoid Tra(u,d,h);
    cin>>d>>h;
    Triangle Tri(d,h);
    Shape *p[5] ={&C,&S,&R,&Tra,&Tri};
    double sum = 0;
    for (int i=0;i<5;i++){
        p[i]->printName();
        sum += p[i]->GetArea();
    }
    cout<<"总面积:"<<sum;
    return 0;
}
