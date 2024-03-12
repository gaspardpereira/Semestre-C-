#include <stdexcept>

class Stack
{
private:
    int nb;
    int size;
    char *tab;

public:
    Stack(int size) : nb(0), size(size)
    {
        if (size <= 0)
        {
            std::cout << "BAD SIZE";
        }
        tab = new char[size]
    }
    /* c'est le constructeur qu'on utilisera dans
    le main quand on fera "
    Stack s(5) ; " */

    ~Stack()
    {
        
    }
}