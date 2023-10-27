#pragma once
#include <Dibujo.hpp>

class Letra : public Dibujo
{
private:
public:
    Letra() : Dibujo("Snake")
    {
    }
    Letra(int x, int y) : Dibujo(x, y, "Snake")
    {
        this->x += 0;
        this->y += 0;
    }
    ~Letra() {}
};