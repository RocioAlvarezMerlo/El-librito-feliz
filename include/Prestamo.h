#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <string>
#include "Libro.h"
#include "Socio.h"

class Prestamo {
private:
    Libro* libro;
    Socio* socio;
    std::string fechaPrestamo;
    std::string fechaDevolucion;
public:
    Prestamo(Libro* libro,
             Socio* socio,
             const std::string& fechaPrestamo,
             const std::string& fechaDevolucion);

    const Libro* getLibro() const;
    const Socio* getSocio() const;
};

#endif // PRESTAMO_H
