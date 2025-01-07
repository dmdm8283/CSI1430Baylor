/*
AUTHOR: Duc Minh Nguyen
ASSIGNMENT TITLE: Line class
ASSIGNMENT DESCRIPTION: Class line
DUE DATE: 11/13/2024
DATE CREATED: 11/10/2024
DATE LAST MODIFIED: 11/11/2024
*/
#ifndef MATRIX_H_
#define MATRIX_H_


#include <ostream>
#include <iomanip>
using namespace std;

const int MAX_SIZE = 100;
const int WIDTH = 4;

class matrix_t{
private:
	int row, col;
	double data[MAX_SIZE][MAX_SIZE] = {{0}};

public:
	matrix_t();
	matrix_t(int, int);

	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained
	void setRow(int);
    
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained    
	void setCol(int);
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	void setValue(int, int, double);

    
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	int getRow() const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	int getCol() const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	double getValue(int, int) const;

	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	void display(ostream&) const;
    
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	matrix_t add(const matrix_t&) const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
    matrix_t subtract(const matrix_t&) const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	matrix_t multiply(const matrix_t&) const;

    
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	matrix_t operator+(const matrix_t&) const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	matrix_t operator-(const matrix_t&) const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	matrix_t operator*(const matrix_t&) const;
        
	// description: getter second point
	// return: void
	// precondition: p2 exist
	// post: p2 is obtained   
	double*  operator[](int n);

};


#endif /* MATRIX_H_ */