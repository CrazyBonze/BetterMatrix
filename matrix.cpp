#include "matrix.h"

template <class T>
Matrix<T>::Matrix()
  : M_DATA(NULL)
{ }

template <class T>
Matrix<T>::Matrix(const unsigned int X, const unsigned int Y)
  : M_X_DIM(X), M_Y_DIM(Y), M_SIZE(X*Y)
{ }

template <class T>
Matrix<T>::~Matrix()
{ }

template <class T>
unsigned int Matrix<T>::size() const
{
  return M_SIZE;
}
