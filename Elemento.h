#pragma once

#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);
    std::string GetNombre();
    Elemento* GetSiguiente();
    void SetSiguiente(Elemento* siguiente);

private:
    std::string _nombre;
    Elemento* _siguiente;
};