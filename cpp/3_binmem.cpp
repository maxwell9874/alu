#include <iostream> 
using namespace std;
class demo 
{ 
int x,y; 
public: 
demo() 
{ 
x=0; 
y=0; 
} 
demo(int a, int b) 
{ 
x=a; 
y=b; 
} 
demo operator +(demo &d) 
{ 
demo d3; 
d3.x = x + d.x; 
d3.y = y + d.y; 
return d3; 
} 
void display() 
{ 
cout<<"X="<<x<<endl; 
cout<<"Y="<<y<<endl; 
} 
}; 
int main() 
{ 
demo d1(2,3); 
demo d2(4,5); 
demo d3; 
d3 = d1 + d2; 
cout<<"Object C1\n"; 
d1.display(); 
cout<<"Object C2\n"; 
d2.display(); 
cout<<"Object C3\n"; 
d3.display(); 
return 0; 
}