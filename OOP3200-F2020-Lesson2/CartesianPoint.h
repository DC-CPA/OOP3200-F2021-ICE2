#pragma once
#ifndef __CARTESIAN_POINT__
#define CARTESIAN_POINT_
#include "string"

// class declaration section
class CartesianPoint
{
public:

    /* Constructor: Used to initialize objects */

    CartesianPoint(int x = 1, int y = 1);
    ~CartesianPoint();

    /* Copy Constructor*/
    CartesianPoint(const CartesianPoint& point2);

    /*Operator Overloads*/
    double operator-(const CartesianPoint& point_to) const;  //operator minus
    bool operator==(const CartesianPoint& other_point) const; //operator comparison

    CartesianPoint operator+(const CartesianPoint& point2) const;//vector addition ??operator addition

    /* Friend Overloads*/
    friend std::ostream& operator<<(std::ostream& out, const CartesianPoint& point);
    friend std::istream& operator>>(std::istream& in, CartesianPoint& point);

    // --------------------------------------------------------------------------------
    /* Accessors:  query the object
   
    */

    // get x
    int GetX() const;

    // get y
    int GetY() const;

    // -------------------------------------------------------------------------------
    /* Mutator(s): change the object
    
    */

    // set x
    void SetX(int x);

    // set y,
    void SetY(int y);

    // set point (both x and y)
    void SetPoint(int x, int y);


    // get the distance between this point and a second point
    double GetDistanceTo(const CartesianPoint& point_to) const;

    // convert the obj to a string
    std::string ToString() const;


private:
    // private data members for the dimensions of the point
    int m_x{}; // x-axis (horizontal) value
    int m_y{};  // y-axis (vertical) value
};



#endif /*defined (__CARTESIAN_POINT__)*/
