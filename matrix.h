#ifndef MATRIX_H
#define MATRIX_H

#include <cassert> //for assert
#include <cstddef> //for NULL
#include <iostream> // for ostream
using namespace std;

template <class T>
class Matrix
{
  public:
    Matrix(const unsigned int row, const unsigned int col);
    ~Matrix();
    void print(ostream& os);
    T& front();
    T& back();
    T& left(const unsigned int row, const unsigned int col);
    T& right(const unsigned int row, const unsigned int col);
    T& up(const unsigned int row, const unsigned int col);
    T& down(const unsigned int row, const unsigned int col);
    void fill(T value);
    unsigned int size() const;
    unsigned int X_size() const;
    unsigned int Y_size() const;
    unsigned int row_size() const;
    unsigned int col_size() const;
    T& operator()(unsigned int row, unsigned int col)
    {
      return M_DATA[get_index(row, col)];
    };
  private:
    unsigned int get_index(unsigned int row, unsigned int col) const;
    bool check_args(unsigned int row, unsigned int col) const;
    const unsigned int M_X_DIM;
    const unsigned int M_Y_DIM;
    const unsigned int M_SIZE;
    T * const M_DATA;
    const unsigned int FRONT = 0;
    const unsigned int BACK;
};
#include "matrix.cpp"
#endif //MATRIX_H
