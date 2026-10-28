// main.cpp

#include <iostream>
#include <cassert>
#include "calculos.h"
#include "Boleta.h"

int main () {
    Alumno alumno1 = crearAlumno("Juan Perez", 5.0, 6.0, 6.0);
    Alumno alumno2 = crearAlumno("Juan Perez 1", 5.0, 6.0, 6.0);
    Alumno alumno3 = crearAlumno("Juan Perez 2", 5.0, 6.0, 6.0);

    if (alumno1.promedio() >= 7.0) {
        std::cout << alumno1.nombre << " aprobó con un promedio de " << alumno1.promedio() << std::endl;
    } else {
        alumno1.aplicarAjuste(2.0); // Aplica un ajuste de 5 puntos
        std::cout << alumno1.nombre << " aprobó con un promedio de " << alumno1.promedio() << std::endl;
    }
    
    return 0;
}