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

    // == !=  = //
    CircularInt& operator = (const CircularInt &);
    CircularInt& operator = (int num);

    friend bool operator == (const CircularInt &,const CircularInt &);
    friend bool operator == (int const,const CircularInt &);
    friend bool operator == (const CircularInt &,int const);

    friend bool operator != (const CircularInt &,const CircularInt &);
    friend bool operator != (int const,CircularInt const &);
    friend bool operator != (const CircularInt &,int const);
    //<= >= > < //
    friend bool operator <= (CircularInt const &,int const);
    friend bool operator <= (int const,const CircularInt &);
    friend bool operator <= (const CircularInt const &,const CircularInt &);

    friend bool operator >= (const CircularInt &,int const);
    friend bool operator >= (int const,CircularInt const &);
    friend bool operator >= (const CircularInt &,const CircularInt &);

    friend bool operator < (const CircularInt  &,int const);
    friend bool operator < (int const,const CircularInt &);
    friend bool operator < (const CircularInt &,const CircularInt &);

    friend bool operator > (const CircularInt &,int const);
    friend bool operator > (int const,const CircularInt  &);
    friend bool operator > (const CircularInt  &,const CircularInt  &);
    //*= /= += -= //
    CircularInt& operator += (int num);
    CircularInt& operator += (const CircularInt  & r);

    CircularInt& operator -= (int num);
    CircularInt& operator -= (const CircularInt  & r);

    CircularInt& operator *= (int num);
    CircularInt& operator *= (const CircularInt  & r);

    CircularInt& operator /= (const CircularInt  & r);
    CircularInt& operator /= (int num );
    //++ -- //
    CircularInt& operator ++ ();
    const CircularInt operator ++ (int);

    CircularInt& operator -- ();
    const CircularInt operator -- (int);
    CircularInt operator - ();
    friend CircularInt operator - (int num, const CircularInt & r );
    friend CircularInt operator + (const CircularInt & r, const CircularInt & l);



    friend CircularInt& operator /(const CircularInt &r ,int num);

    //Overiding "toString" Object
    friend ostream &operator<<( ostream &output, const CircularInt& t ){
        output << t.CurrTime ;
        return output;
    }
};

inline bool operator<=(const CircularInt & r, int const l) {
    return r.CurrTime <= l;
}
inline bool operator<=(int const r ,const CircularInt & l ) {
    return r <= l.CurrTime;
}
inline bool operator<=(const CircularInt & r, const CircularInt & l ) {
    return r.CurrTime <= l.CurrTime;
}

inline bool operator>=(const CircularInt & r, int const l) {
    return r.CurrTime >= l;
}
inline bool operator>=(int const r ,const CircularInt & l ) {
    return r >= l.CurrTime;
}
inline bool operator>=(const CircularInt & r,const CircularInt & l ) {
    return r.CurrTime >= l.CurrTime;
}

inline bool operator<(const CircularInt & r, int const l) {
    return r.CurrTime < l;
}
inline bool operator<(int const r ,const CircularInt & l ) {
    return r < l.CurrTime;
}
inline bool operator<(const CircularInt & r,const CircularInt & l ) {
    return r.CurrTime < l.CurrTime;
}

inline bool operator>(const CircularInt & r, int const l) {
    return r.CurrTime > l;
}
inline bool operator>(int const r , CircularInt const & l ) {
    return r > l.CurrTime;
}
inline bool operator>(const CircularInt & r, const CircularInt & l ) {
    return r.CurrTime >= l.CurrTime;
}
