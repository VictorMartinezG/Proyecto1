#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Vibora : public Dibujo, public Actualizable 
{
private:
// int direccionX;
// int direccionY;
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
        // this->x += this->direccionX;
        // this->y += this->direccionY;
        this->x += 0;
        this->y += 0;
    }
    //  void CambiarDireccionX(){
    //     this->direccionX*=-1;
    // }
    // void CambiarDireccionX(){
    //     this->direccionY*=-1;
    // }
    ~Vibora() {}
};