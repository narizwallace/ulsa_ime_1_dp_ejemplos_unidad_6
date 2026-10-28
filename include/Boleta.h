#pragma once
#include <iostream>
#include <string>
#include <vector>

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

struct Boleta {
    std::vector<Alumno> alumnos;
    double calificacionMinima = 7.0;

    void agregarAlumno(const Alumno& alumno) {
        alumnos.push_back(alumno);
    }

    std::vector<Alumno> obtenerAprobados() const {
        std::vector<Alumno> aprobados;
        for (const Alumno& alumno : alumnos) {
            if (alumno.calcularPromedio() >= calificacionMinima) {
                aprobados.push_back(alumno);
            }
        }
        return aprobados;
    }

    std::vector<Alumno> obtenerReprobados() const {
        std::vector<Alumno> reprobados;
        for (const Alumno& alumno : alumnos) {
            if (alumno.calcularPromedio() < calificacionMinima) {
                reprobados.push_back(alumno);
            }
        }
        return reprobados;
    }

    void listarAprobadosYReprobados() const {
        std::cout << "Aprobados:" << std::endl;
        for (const Alumno& alumno : obtenerAprobados()) {
            std::cout << "  " << alumno.nombre << " - promedio: " << alumno.calcularPromedio() << std::endl;
        }

        std::cout << "Reprobados:" << std::endl;
        for (const Alumno& alumno : obtenerReprobados()) {
            std::cout << "  " << alumno.nombre << " - promedio: " << alumno.calcularPromedio() << std::endl;
        }
    }
};
