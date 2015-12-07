// Vector2D.h
// Author: Dan Giglio
// Created: 09/25/15
// Edited: 12/06/15
// Module: DMGLib_Utilities

#ifndef __VECTOR2D_H__
#define __VECTOR2D_H__

#include <math.h>

namespace DMGLib_Utilities
{

    // Simple class that holds an X and a Y coordinate, and contains various functions to support its use
    struct Vector2D
    {
	    int X;
	    int Y;

    public:
	    // Generic Constructor, initializes m_x and m_y to zero.
	    Vector2D()
		    : X(0)
		    , Y(0) { }

	    // Constructor that initializes m_x to x and m_y to y.
	    Vector2D(int x, int y)
		    : X(x)
		    , Y(y) { }

	    // Sets X and Y to nX and nY respectively.
	    void Set(int nX, int nY)
	    {
		    X = nX;
		    Y = nY;
	    }

	    // Returns the distance between the two vectors.
	    int Distance(const Vector2D* right)
	    {
		    int xD = abs(X - right->X);
		    int yD = abs(Y - right->Y);

		    return xD + yD;
	    }

	    // Calculates the direction that this Vector2D needs to move in, in order to reach the target
	    // Returns a NEW Vector2D that must be deleted at some point.
	    Vector2D* GetDirection(const Vector2D* right)
	    {
		    int nX = 0;
		    int nY = 0;

		    if (X > right->X)
			    nX = -1;
		    else if (X < right->X)
			    nX = 1;
		    else
			    nX = 0;

		    if (Y > right->Y)
			    nY = -1;
		    else if (Y < right->Y)
			    nY = 1;
		    else
			    nY = 0;

		    return new Vector2D(nX, nY);
	    }

	    // Overwrites the == to compare the values of m_x and m_y.
	    inline bool operator == (const Vector2D& right)
	    {
		    if (X == right.X && Y == right.Y)
			    return true;
		    else
			    return false;
	    }

	    // Adds the values of another Vector2D to this Vector2D.
	    inline Vector2D operator + (const Vector2D& right)
	    {
		    X += right.X;
		    Y += right.Y;
	    }

	    // Inverts this Vector2D
	    inline Vector2D operator - ()
	    {
		    X = X * -1;
		    Y = Y * -1;
		    return *this;
	    }
    };
}

#endif