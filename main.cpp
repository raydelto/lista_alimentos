#include "Lista.h"
#include <iostream>

int main()
{
    Elemento arroz("Arroz");
    Elemento habichuela("Habichuela");
    Elemento carne("Carne");
    Lista lista;
    lista.Agregar(&arroz);
    lista.Agregar(&habichuela);
    lista.Agregar(&carne);

    Elemento* i = lista.GetPrimer();

    while(i != nullptr)
    {
        std::cout << i->GetNombre() << std::endl;
        i = i->GetSiguiente();
    }

    return 0;
}