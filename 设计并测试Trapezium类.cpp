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
