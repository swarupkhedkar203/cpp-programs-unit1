#include<iostream>
using namespace std;
class Demo {
    public:
    Demo() {
        cout<<"COnstuctor called";
    }
    ~Demo() {
        cout<<"Destructor called";
    }
};
int main(){
    Demo d;
    return 0;
}