// STVector3.h
#ifndef __STVECTOR3_H__
#define __STVECTOR3_H__

#include "stForward.h"

#include <math.h>
#include <iostream>

/**
* STVector3 represents a 3-vector
*/
struct STVector3
{
    //
    // Initialization
    //
    inline STVector3();
    inline STVector3(const STVector3& v);
    inline explicit STVector3(const STPoint3& p);
    inline STVector3(float x, float y, float z);
    inline STVector3(float s);

    //
    // Assignment
    //
    inline STVector3& operator=(const STVector3& v);

    //
    // Overloaded operators
    //
    inline STVector3& operator*=(float right);
    inline STVector3& operator/=(float right);
    inline STVector3& operator+=(const STVector3& right);
    inline STVector3& operator-=(const STVector3& right);
	inline std::ostream& operator<<(std::ostream& out){out<<"["<<x<<", "<<y<<", "<<z<<"]";return out;}

    //
    // Normalization
    //
    inline void Normalize();
    inline void SetLength(float newLength);

    //
    // Math
    //
    inline float Length() const;
    inline float LengthSq() const;

    //
    // Validation
    //
    inline bool Valid() const;

    //
    // Component accessors
    //
    inline float& Component(unsigned int index)
    {
        return ((float *)this)[index];
    }

    inline float Component(unsigned int index) const
    {
        return ((const float *)this)[index];
    }

	friend std::ostream& operator<<(std::ostream& out,const STVector3& p){out<<"["<<p.x<<", "<<p.y<<", "<<p.z<<"]";return out;}

    //
    // Local members
    //
    float x, y, z;

    //
    // Constants
    //
    static const STVector3 Zero;
    static const STVector3 eX;
    static const STVector3 eY;
    static const STVector3 eZ;

    //
    // Static math functions
    //
    inline static STVector3 Cross(const STVector3& left, const STVector3& right);
    inline static float Dot(const STVector3& left, const STVector3& right);
    inline static STVector3 DirectProduct(const STVector3& left, const STVector3& right);
    inline static STVector3 Lerp(const STVector3& left, const STVector3& right, float s);
    inline static STVector3 ComponentMax(const STVector3& left, const STVector3& right);
    inline static STVector3 ComponentMin(const STVector3& left, const STVector3& right);
};

inline STVector3 operator*(const STVector3& left, float right);
inline STVector3 operator*(float left, const STVector3& right);
inline STVector3 operator/(const STVector3& left, float right);
inline STVector3 operator+(const STVector3& left, const STVector3& right);
inline STVector3 operator-(const STVector3& left, const STVector3& right);
inline STVector3 operator-(const STVector3& v);

inline STVector3 operator-(const STPoint3& left, const STPoint3& right);

#include "STVector3.inl"

#endif  // __STVECTOR3_H__
