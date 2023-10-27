#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Vibora : public Dibujo, public Actualizable
{
private:
int direccion;
public:
    Vibora() : Dibujo("Serpiente")
    {
    }
    Vibora(int x, int y) : Dibujo(x, y, "Serpiente")
    {
        this->direccion=1;
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
        this->x += this->direccion;
    }
    void CambiarDireccion(){
        this->direccion*=-1;
    }
    ~Vibora() {}
};