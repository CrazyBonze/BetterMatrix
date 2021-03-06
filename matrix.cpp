#include "matrix.h"

/* public */ template <class T>
Matrix<T>::Matrix(const unsigned int row, const unsigned int col)
  : M_X_DIM       (row),
    M_Y_DIM       (col),
    M_SIZE        (row*col),
    M_DATA        (new T[M_SIZE]),
    BACK          (M_SIZE - 1)
{ }

/* public */ template <class T>
Matrix<T>::~Matrix()
{ }

/* public */ template <class T>
void Matrix<T>::print(ostream& os)
{
  unsigned int i,k;
  os << "[";
  for(i = k = FRONT; i < M_SIZE; i++, k++)
  {
    if(k == M_Y_DIM)
    {
      cout << endl << " ";
      k = 0;
    }
    os << M_DATA[i] << (i < BACK ? ',':']');
  }
  os << endl;
}

/* public */ template <class T>
T& Matrix<T>::front()
{
  return M_DATA[FRONT];
}

/* public */ template <class T>
T& Matrix<T>::back()
{
  return M_DATA[BACK];
}

// TODO finish and test
/* public */ template <class T>
T& Matrix<T>::up(const unsigned int row, const unsigned int col)
{
  return M_DATA(row, col);
}

// TODO finish and test
/* public */ template <class T>
T& Matrix<T>::down(const unsigned int row, const unsigned int col)
{
  return M_DATA(row, col);
}

// TODO finish and test
/* public */ template <class T>
T& Matrix<T>::left(const unsigned int row, const unsigned int col)
{
  return M_DATA(row,(col == 0 ? M_Y_DIM - 1 : col - 1));
}

// TODO finish and test
/* public */ template <class T>
T& Matrix<T>::right(const unsigned int row, const unsigned int col)
{
  return M_DATA(row,(col < M_Y_DIM + 1 ? col + 1 : 0));
}

/* public */ template <class T>
void Matrix<T>::fill(T value)
{
  for(unsigned int i = FRONT; i < M_SIZE; i++)
    M_DATA[i] = value;
}

/* public */ template <class T>
unsigned int Matrix<T>::size() const
{
  return M_SIZE;
}

/* public */ template <class T>
unsigned int Matrix<T>::X_size() const
{
  return M_X_DIM;
}

/* public */ template <class T>
unsigned int Matrix<T>::Y_size() const
{
  return M_Y_DIM;
}

/* public */ template <class T>
unsigned int Matrix<T>::row_size() const
{
  return X_size();
}

/* public */ template <class T>
unsigned int Matrix<T>::col_size() const
{
  return Y_size();
}


/* private */ template <class T>
unsigned int Matrix<T>::get_index(unsigned int row, unsigned int col) const
{
  check_args(row, col);
  return row * M_Y_DIM + col;
}

/* private */ template <class T>
bool Matrix<T>::check_args(unsigned int row, unsigned int col) const
{
  assert(row < M_X_DIM);
  assert(col < M_Y_DIM);
  return true;
}
