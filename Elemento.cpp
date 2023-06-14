#include "Elemento.h"

Elemento::Elemento(std::string nombre) : _nombre(nombre)
{
}

std::string Elemento::GetNombre()
{
    return _nombre;
}

Elemento *Elemento::GetSiguiente()
{
    return _siguiente;
}
void Elemento::SetSiguiente(Elemento *siguiente)
{
    _siguiente = siguiente;
}
