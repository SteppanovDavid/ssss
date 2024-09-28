#include <iostream>
#include <math.h>
using namespace std;
float s1_triangle(float a,float b)
{
    float s;
    s = (a*b)/2;
    return s;
}
int s1_square(int a)
{
    int s;
    s = a*a;
    return s;
}
int s2_square(int a,int b)
{
    int s;
    s = a*b;
    return s;
}
float s3_trapezoid(float a,float b,float c)
{
    float s;
    s = ((a+b)/2)*c;
    return s;
}
float s4_circle(float a)
{
    float s;
    s = a*a*M_PI;
    return s;
}
float s5_triangle(float a)
{
    float s;
    s = a*a*sqrt(3)/4;
    return s;
}
float s6_rhombus(float a,float b)
{
    float s;
    s = a*a*fabs (sin(b));
    return s;
}
float s7_sexangle(float a)
{
    float s;
    s = 3*a*a*sqrt(3)/2;
    return s;
}
int main()
{
   setlocale(LC_ALL,"Russian");
   cout << "Выбирите фигуру\n";
   cout << "1-треугольник \n"<<"2-квадрат\n"<<"3-трапеция\n"<<"4-круг\n"<<"5-правильный треугольник\n"<<"6-ромб\n"<<"7-правильный шестиугольник\n"<<"8-прямоугольник\n";
   int d;
   cin >> d;
   if(d==1)
   {
    float a,b;
   cout<<"введите основание\n";
   cin>>a;
   cout<<"введите высоту\n";
   cin>>b;
   cout<<s1_triangle(a,b);
    }
    if(d==2)
   {
    int a;
   cout <<"введите сторону\n";
   cin>>a;
    cout<<s1_square(a);
    }
    if(d==8)
   {
    int a,b;
   cout <<"введите длину\n";
   cin>>a;
   cout <<"введите ширину\n";
   cin>>b;
    cout<<s2_square(a,b);
    }
    if(d==3)
   {
    float a,b,c;
   cout<<"введите  1 основание\n";
   cin>>a;
   cout<<"введите  2 основание\n";
   cin>>b;
   cout<<"введите высоту\n";
   cin>>c;
   cout<<s3_trapezoid(a,b,c);
    }
    if(d==4)
   {
    float a;
   cout<<"введите радиус\n";
   cin>>a;
    cout<<s4_circle(a);
    }
    if(d==5)
{
    float a;
   cout<<"введите сторону\n";
   cin>>a;
    cout<<s5_triangle(a);
}
 if(d==6)
   {
    float a,b;
   cout<<"введите сторону\n";
   cin>>a;
   cout<<"введите угл\n";
   cin>>b;
     cout<<s6_rhombus(a,b);
    }
     if(d==7)
{
    float a;
   cout<<"введите сторону\n";
   cin>>a;
    cout<< s7_sexangle(a);
}
}