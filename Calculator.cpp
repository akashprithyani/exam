#include<iostream>
using namespace std;
int main()
{

double a,b,s;
int ch;
cout<<"Enter two numbers";
cin>>a;
cin>>b;
cout<<"Enter choice 1.Add 2.Multiply 3.Divide 4.Substract 5.Exit";
cin>>ch;
switch(ch)
{
case 1:
   s=a+b;
cout<<"Sum :";
cout<<s;
   break;
case 2:
   s=a*b;
cout<<"Product:";
cout<<s;
   break;
case 3:
   s=a/b;
cout<<"Division:";
cout<<s;
   break;
case 4:
   s=a-b;
cout<<"Substraction:";
cout<<s;
   break;
case 5:
break;

}

return 0;
}
