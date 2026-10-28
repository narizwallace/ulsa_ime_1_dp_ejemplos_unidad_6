#pragma once
#include <string>

struct Alumno {
    std::string nombre;
    double espanol;
    double matematicas;
    double disenoProgramas;
    double ajuste = 0;

    double calcularPromedio() const {
        return ((espanol + matematicas + disenoProgramas) / 3.0) + ajuste;
    }

    void aplicarAjuste(double valor) {
        ajuste = valor;
    }
};

Alumno crearAlumno(const std::string& nombre, double espanol, double matematicas, double disenoProgramas) {
    Alumno alumno;
    alumno.nombre = nombre;
    alumno.espanol = espanol;
    alumno.matematicas = matematicas;
    alumno.disenoProgramas = disenoProgramas;
    return alumno;
}