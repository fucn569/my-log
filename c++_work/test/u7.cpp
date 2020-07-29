#include <iostream>
using namespace std;
class Student
{
public:
   Student(int n,int a,float s):
      num(n),age(a),score(s){ }

   void total( );

   float average();
   float get_score();

private:
   int   num;
   int   age;
   float score;

   static float sum;
   static int count;
};
float Student::get_score() {
  return(score);
    }
void Student::total( )
{
   sum += score;
   count++;
}

float Student::average() {
   float a =get_score();
   return(a+sum/count);
}

float Student::sum = 0;
int Student::count = 0;

int main( )
{
   Student stud[3]={
      Student(1001,18,70),
      Student(1002,19,78),
      Student(1005,20,98)
   };

   for(int i=0; i<3; i++)
      stud[i].total( );

   cout << "the average score of "
        << " 3 students is "
        << stud[1].average( )<<endl;
   return 0;
}



