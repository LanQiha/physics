#ifndef VECTOR2D_H
#define VECTOR2D_H


class Vector2D
{
    public:
        Vector2D(){}
        Vector2D(float X, float Y);
        virtual ~Vector2D();

        float x, y;

        Vector2D operator+(const Vector2D & vector2d) const;
        Vector2D operator-(const Vector2D & vector2d) const;
        Vector2D operator-() const;
        Vector2D operator*(float scalar) const;
        Vector2D operator/(float scalar) const;
        bool operator==(const Vector2D & vector2d) const;

    protected:

    private:

};

#endif // VECTOR2D_H
