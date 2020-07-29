#include <iostream>
using namespace std;
class A {
public:
    A( );
};
A::A()
    { cout <<"A"; }
class B {
public:
B( );
};
B::B()
    { cout <<"B"; }
class C: public A {
public:
    C( );
private:
    B b;
};
C::C()
    { cout <<"C"; }
int main() {
getchar();
C obj;
return 0;
}
