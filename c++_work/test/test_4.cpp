#include <iostream>
using namespace std;
class Student
{
  private:  //*在没有声明情况下默认private
  int num;
  int score;
  public:
  void setdata()
  {
    cin>>num;
    cin>>score;
  }
  void display()
  {
    cout<<"num="<<num<<endl;
    cout<<"score="<<score<<endl;
  }
};
int main( )
{
  Student stud1,stud2;
  stud1.setdata( );
  stud2.setdata( );
  stud1.display( );
  stud2.display( );
  return 0;
}
