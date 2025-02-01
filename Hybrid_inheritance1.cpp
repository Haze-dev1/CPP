#include <iostream>  
using namespace std;  
class vehicle  
{  
public:  
vehicle()  
    {  
cout<< "Hello\n";  
    }  
};  
class Car: public vehicle  
{  
public:  
Car()  
    {  
cout<< "I am Devansh\n";  
    }  
};  
class Racing  
{  
public:  
Racing()  
    {  
cout<< "I study in SVPCET\n";  
    }  
};  
class Ferrari: public Car, public Racing  
{  
public:  
Ferrari()  
    {  
cout<< "SVPCET is in nagpur\n";  
    }  
  
};  
int main() {  
    Ferrari f;  
    return 0;  
}  