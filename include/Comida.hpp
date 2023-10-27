#pragma once
#include <Dibujo.hpp>

class Comida : public Dibujo
{
private:
public:
    Comida() : Dibujo("Comida")
    {
    }
    Comida(int x, int y) : Dibujo(x, y, "Comida")
    {
        this->x += 0;
        this->y += 0;
    }
    ~Comida() {}
};