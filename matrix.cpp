#include "matrix.h"

// Public Functions
template <class T>
Matrix<T>::Matrix(const unsigned int row, const unsigned int col)
  : M_X_DIM       (row),
    M_Y_DIM       (col),
    M_SIZE        (row*col),
    M_DATA        (new T[M_SIZE]),
    BACK          (M_SIZE - 1)
{ }

template <class T>
Matrix<T>::~Matrix()
{ }

template <class T>
void Matrix<T>::print(ostream& os)
{
  os << "[";
  for(unsigned int i = FRONT; i < M_SIZE; i++)
    os << M_DATA[i] << (i < BACK ? ',':']');
  os << endl;
}

template <class T>
T& Matrix<T>::front()
{
  return M_DATA[FRONT];
}

template <class T>
T& Matrix<T>::back()
{
  return M_DATA[BACK];
}

template <class T>
void Matrix<T>::fill(T value)
{
  for(unsigned int i = FRONT; i < M_SIZE; i++)
    M_DATA[i] = value;
}

template <class T>
unsigned int Matrix<T>::size() const
{
  return M_SIZE;
}

template <class T>
unsigned int Matrix<T>::X_size() const
{
  return M_X_DIM;
}

template <class T>
unsigned int Matrix<T>::Y_size() const
{
  return M_Y_DIM;
}

template <class T>
unsigned int Matrix<T>::row_size() const
{
  return X_size();
}

template <class T>
unsigned int Matrix<T>::col_size() const
{
  return Y_size();
}

// Private Functions

template <class T>
unsigned int Matrix<T>::get_index(unsigned int row, unsigned int col) const
{
  check_args(row, col);
  return row * M_Y_DIM + col;
}

template <class T>
bool Matrix<T>::check_args(unsigned int row, unsigned int col) const
{
  assert(row < M_X_DIM);
  assert(col < M_Y_DIM);
  return true;
}
