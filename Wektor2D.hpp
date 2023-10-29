class Wektor2D
{
    // Tutaj napisz implementacje klasy Wektor2D
    private:
    double x,y;
   
    public:
    Wektor2D()
    {
        x = 0.;
        y = 0.;
    }
    void setX(double xx)
    {x = xx;}
    void setY(double yy)
    {y = yy;}
    double getX()
    {return x;}
    double getY()
    {return y;}

    Wektor2D(double a, double b) : x(a), y(b)
    {}
    Wektor2D operator+(Wektor2D &vec)
    {
        Wektor2D result;
        result.x = x + vec.x;
        result.y = y + vec.y;
        return result;
    }
    double operator*(Wektor2D &vec)
    {
        double result;
        Wektor2D mult;
        mult.x = x*vec.x;
        mult.y = y*vec.y;
        result = mult.x + mult.y;
        return result;
    }
};
