//
// Created by Gal on 16/04/2018.
//

#ifndef CPPEX4_CIRCULARINT_H
#define CPPEX4_CIRCULARINT_H

#endif //CPPEX4_CIRCULARINT_H

#include <iostream>
using namespace std;

class CircularInt {


private:
    int maxValue;
    int minValue;
    int CurrTime;

public:

    CircularInt();
    CircularInt(int min, int max);
    ~CircularInt();

    CircularInt& operator += (int num);
    CircularInt& operator -= (int num);
    CircularInt& operator ++ ();
    const CircularInt operator ++ (int);
    CircularInt operator - ();
    friend CircularInt operator - (int num, CircularInt const & r );
    friend CircularInt operator + (CircularInt const & r, CircularInt const & l);
    CircularInt& operator *= (int num);
    CircularInt& operator /= (CircularInt const & r);
    CircularInt& operator /= (int num );
    friend CircularInt& operator /(CircularInt const &r ,int num);

    //Overiding "toString" Object
    friend ostream &operator<<( ostream &output, const CircularInt& t ){
        output << t.CurrTime ;
        return output;
    }
};