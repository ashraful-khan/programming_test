#include<iostream>

class B {
    public:
    void print2(){
        std::cout<<"I am printng from class B and Def print2 \n";
    }
};

class A{
    public:
    void print1(){
        std::cout<<"I am printng from class A and Def print1 \n";
    }
    B* b;
   // A();
};

int main(){
    A* obj;
    obj->b->print2();
    obj->print1();
    return 0;
}

//A::A(){s
   // b= new B;
//}