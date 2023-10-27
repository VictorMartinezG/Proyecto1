#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Vibora : public Dibujo, public Actualizable
{
private:

public:
    Vibora() : Dibujo("Serpiente")
    {
    }
    Vibora(int x, int y) : Dibujo(x, y, "Serpiente")
    {
    }
    void Izquierda()
    {
        this->x += -1;
    }
    void Derecha()
    {
        this->x += 1;
    }
    void Arriba()
    {
        this->y += -1;
    }
    void Abajo()
    {
        this->y += 1;
    }
    void Actualizar()
    {
        this->x += 0;
        this->y += 0;
    }
    ~Vibora() {}
};