#include <iostream>
using namespace std;
class Rectangle
{
public:
Rectangle (int top, int left, int bottom, int right);
int GetTop() { return itsTop; }
int GetLeft() { return itsLeft; }
int GetBottom() { return itsBottom; }
int GetRight() { return itsRight; }
void SetTop(int top) { itsTop = top; }
void SetLeft (int left) { itsLeft = left; }
void SetBottom (int bottom) { itsBottom = bottom; }
void SetRight (int right) { itsRight = right; }
int GetArea();
private:
int itsTop;
int itsLeft;
int itsBottom;
int itsRight;
};
Rectangle::Rectangle(int top, int left, int bottom, int right)
{
itsTop = top;
itsLeft = left;
itsBottom = bottom;
itsRight = right;
}
int Rectangle::GetArea()
{
int Width = itsRight-itsLeft;
int Height = itsTop - itsBottom;
return (Width * Height);
}
int main()
{
Rectangle MyRectangle (100, 20, 50, 80 );
cout << "Area: " <<MyRectangle.GetArea() << "\n";
return 0;
}
