#include "Vector2D.h"

Vector2D::Vector2D(float X, float Y)
{
    x = X;
    y = Y;
}

Vector2D::~Vector2D()
{
    //dtor
}

Vector2D Vector2D::operator+(const Vector2D & vector2d) const
{
    return Vector2D(x + vector2d.x, y + vector2d.y);
}

Vector2D Vector2D::operator-(const Vector2D & vector2d) const
{
    return Vector2D(x - vector2d.x, y - vector2d.y);
}

Vector2D Vector2D::operator-() const
{
    return Vector2D(-x, -y);
}

Vector2D Vector2D::operator*(float scalar) const
{
    return Vector2D(x * scalar, y * scalar);
}

Vector2D Vector2D::operator/(float scalar) const
{
    return Vector2D(x / scalar, y / scalar);
}

bool Vector2D::operator==(const Vector2D & vector2d)const
{
    return (x == vector2d.x && y == vector2d.y);
}

