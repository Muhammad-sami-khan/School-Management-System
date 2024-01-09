#include <iostream>
#include "Teacher.hpp"
#include "Student.hpp"
using namespace std;

int main(){
  Teacher t1 = {1,"Abdul","Basit","PF",100000,2,0};
  Student s1 = {1,1,"Abdul","Basit",13,10000,2,0};
  cout << t1.id << endl;
  cout << s1.regNum << endl;
  return 0;
}