#include <vector>

class Shape
{
protected:
    int x;
    int y;
    int color;
    Shape(int posx, int posy, int col = 230) : x(posx), y(posy), color(col){};

public:
    void move(int dx, int dy)
    {
        x = x + dx;
        y = y + dy;
    }
};

class Circle : public Shape
{
    int radius;

public:
    Circle(int posx, int posy, int r, int col) : radius(r), Shape(posx, posy, col)
    {
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c1(10, 20, 3, 230);
    Circle c2(100, 200, 4, 230);
    Shape *s = &c1;
    s->move(4, 5);
    std::cout << s->area() << std::enl;
    return 0;

    /*à partir de ligne 33 :
    std::vector<Shape *> l;
    l.push_back(&c1);
    l.push_back(&c2);
    l[0].move(4, 5);*/
}