#ifndef MATRIX_H
#define MATRIX_H

#include <cassert> //for assert
#include <cstddef> //for NULL

template <class T>
class Matrix
{
  public:
    Matrix();
    Matrix(const unsigned int X, const unsigned int Y);
    ~Matrix();
    unsigned int size() const;
  private:
    const unsigned int M_X_DIM;
    const unsigned int M_Y_DIM;
    const unsigned int M_SIZE;
    T *M_DATA;

};
#include "matrix.cpp"
#endif //MATRIX_H
