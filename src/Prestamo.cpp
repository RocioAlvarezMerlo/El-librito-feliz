#include "Prestamo.h"

Prestamo::Prestamo(Libro* libro,
                   Socio* socio,
                   const std::string& fechaPrestamo,
                   const std::string& fechaDevolucion)
    : libro(libro), socio(socio), fechaPrestamo(fechaPrestamo), fechaDevolucion(fechaDevolucion) {}

const Libro* Prestamo::getLibro() const {
    return libro;
}

const Socio* Prestamo::getSocio() const {
    return socio;
}
