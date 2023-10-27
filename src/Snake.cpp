#include <stdio.h>
#include <stdlib.h>
#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Vibora.hpp>
#include <Comida.hpp>
#include <Letra.hpp>
#include <list>
#include <curses.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Vibora *vibora1 = new Vibora(0, 0);
    Comida *comida1 = new Comida(56, 78);
    Comida *comida2 = new Comida(123, 35);
    Comida *comida3 = new Comida(98, 92);
    Comida *comida4 = new Comida(26, 90);
    Letra *tituloSnake = new Letra(100, 50);

    list<Dibujo *> dibujos;
    dibujos.push_back(vibora1);
    // dibujos.push_back(comida1);
    // dibujos.push_back(comida2);
    // dibujos.push_back(comida3);
    // dibujos.push_back(comida4);
    // dibujos.push_back(tituloSnake);

    list<Actualizable *> actualizables;
    actualizables.push_back(vibora1);

    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            vibora1->Izquierda();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            vibora1->Derecha();
        }
        if (key == 'w' || key == KEY_UP)
        {
            vibora1->Arriba();
        }
        if (key == 's' || key == KEY_DOWN)
        {
            vibora1->Abajo();
        }
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }

    return 0;
}