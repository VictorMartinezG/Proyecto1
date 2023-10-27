#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <curses.h>

class Dibujo
{
private:
    std::fstream archivo;

protected:
    int x;
    int y;

public:
    Dibujo(std::string recurso)
    {
        archivo.open("./data/" + recurso + ".txt");
        this->x = 0;
        this->y = 0;
    }
    Dibujo(int x, int y, std::string recurso)
    {
        archivo.open("./data/" + recurso + ".txt");
        this->x = x;
        this->y = y;
    }

    void Dibujar()
    {
        std::string linea;
        move(this->y, this->x);
        //move(this->x, this->y);
        while (std::getline(archivo, linea))
        {
            mvaddstr(getcury(stdscr) +1, this->x, linea.c_str());
            // mvaddstr(getcury(stdscr) + 1, this->y, linea.c_str());
            // mvaddstr(this->y + 1, this->x, linea.c_str());
            // mvaddstr(this->y, this->x, linea.c_str());
        }
        archivo.clear();
        archivo.seekg(0);
    }
    ~Dibujo()
    {
        archivo.close();
    }
};