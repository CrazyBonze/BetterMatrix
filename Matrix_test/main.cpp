#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{
  Matrix<int> m(10,10);
  Matrix<double> *d = new Matrix<double>(5,6);
  d->fill(3.14);
  d->print(cout);
  m(9,9) = 8;
  m(0,0) = 5;
  m(0,4) = 5;
  m(3,0) = 5;
  m(3,4) = 5;
  m(1,0) = 1;
  m(2,0) = 1;
  m(0,1) = 2;
  m(0,2) = 2;
  m(0,3) = 2;
  m(1,4) = 3;
  m(2,4) = 3;
  m(3,1) = 4;
  m(3,2) = 4;
  m(3,3) = 4;
  if(m.size())
  {
    cout << "made a matrix" << endl;
    cout << m.front() << endl;
    m.print(cout);
  }
  else
    cout << "didnt make a matrix" << endl;
  return 0;
}
