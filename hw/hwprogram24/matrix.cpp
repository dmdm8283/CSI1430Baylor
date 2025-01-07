/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Line class
ASSIGNMENT DESCRIPTION: Class line
DUE DATE: 11/13/2024
DATE CREATED: 11/10/2024
DATE LAST MODIFIED: 11/11/2024
*/
#include "matrix.h"

matrix_t::matrix_t() : row(0), col(0) {}

matrix_t::matrix_t(int r, int c) : row(r), col(c) {}

void matrix_t::setRow(int i)
{
    row = i;
}

void matrix_t::setCol(int i)
{
    col = i;
}

void matrix_t::setValue(int r, int c, double i)
{
    data[r][c] = i;
}

int matrix_t::getRow() const
{
    return row;
}

int matrix_t::getCol() const
{
    return col;
}

double matrix_t::getValue(int r, int c) const
{
    return data[r][c];
}

void matrix_t::display(ostream &os) const
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            os << setw(8) << data[i][j];
        }
        os << endl;
    }
}

matrix_t matrix_t::add(const matrix_t &a) const
{
    matrix_t result(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            result.data[i][j] = data[i][j] + a.data[i][j];
    }
    return result;
}

matrix_t matrix_t::subtract(const matrix_t &s) const
{
    matrix_t result(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            result.data[i][j] = data[i][j] - s.data[i][j];
    }
    return result;
}

matrix_t matrix_t::multiply(const matrix_t &m) const
{
    matrix_t result(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            result.data[i][j] = data[i][j] * m.data[i][j];
    }
    return result;
}

matrix_t matrix_t::operator+(const matrix_t &add) const
{
    matrix_t result(row, col);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            result.data[i][j] = data[i][j] + add.data[i][j];
        }
    }
    return result;
}

matrix_t matrix_t::operator-(const matrix_t &sub) const
{
    matrix_t result(row, col);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            result.data[i][j] = data[i][j] - sub.data[i][j];
        }
    }
    return result;
}

matrix_t matrix_t::operator*(const matrix_t &mul) const
{

    matrix_t result(row, mul.col);
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < mul.col; ++j)
        {
            result.data[i][j] = 0;
            for (int k = 0; k < col; ++k)
            {
                result.data[i][j] += data[i][k] * mul.data[k][j];
            }
        }
    }
    return result;
}

double *matrix_t::operator[](int n)
{
    return data[n];
}
