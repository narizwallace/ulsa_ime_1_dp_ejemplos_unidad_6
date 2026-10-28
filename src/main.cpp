// main.cpp

#include <iostream>
#include <cassert>

#include "Calculos.h"
#include "Boleta.h"

int main () {
    Alumno alumno1 = crearAlumno("Juan Perez", 5.0, 6.0, 6.0);
    Alumno alumno2 = crearAlumno("Juan Perez 1", 5.0, 6.0, 6.0);
    Alumno alumno3 = crearAlumno("Juan Perez 2", 5.0, 6.0, 6.0);

    double promedio = alumno1.calcularPromedio();
    if (promedio >= 7.0) {
        std::cout << alumno1.nombre << " aprobó con un promedio de " << promedio << std::endl;
    } else {
        alumno1.aplicarAjuste(2.0); // Aplica un ajuste de 5 puntos
        std::cout << alumno1.nombre << " reprobó pero con el ajuste su promedio es " << alumno1.calcularPromedio() << std::endl;
    }

    Boleta boleta;
    boleta.agregarAlumno(alumno1);
    boleta.agregarAlumno(alumno2);
    boleta.agregarAlumno(crearAlumno("Ana Lopez", 9.0, 8.5, 10.0));
    boleta.agregarAlumno(crearAlumno("Luis Garcia", 7.0, 7.0, 7.0));

    boleta.listarAprobadosYReprobados();

    return 0;
}