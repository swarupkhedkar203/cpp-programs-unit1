#include<iostream>
using namespace std;
class Test{
    private:
    int value;
    public:
    Test(int v){
        value = v;
    }
    inline int getValue(){
        return value;
    }
    friend void show(Test t);
};
void show(Test t){
    cout<<"Value: "<<t.value;
}
int main(){
    Test obj(50);
    cout<<"Value: "<<obj.getValue();
    show(obj);
    return 0;
}