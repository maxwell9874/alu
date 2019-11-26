#include <iostream> 
using namespace std;
class demo 
{ 
int count; 
public: 
demo() 
{ 
count=0; 
} 
void operator ++() 
{ 
count++; 
}
void display() 
{ 
cout<<"Count="<<count<<endl; 
} 
}; 
int main() 
{ 
demo d1; 
++d1;
d1.display(); 
++d1;
d1.display(); 
return 0; 
} 