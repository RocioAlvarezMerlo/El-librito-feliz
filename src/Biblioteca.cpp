#include "Biblioteca.h"
#include <iostream>

Biblioteca::Biblioteca() : nextSocioId(1) {}

int Biblioteca::agregarSocio(const Socio& socio) {
    Socio nuevo(nextSocioId++, socio.getDni(), socio.getNombre(), socio.getApellido(),
                socio.getTelefono(), socio.getDireccion(), socio.getEmail(),
                socio.getFechaNacimiento());
    socios.push_back(nuevo);
    return nuevo.getId();
}

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::registrarPrestamo(int idSocio,
                                   const std::string& isbn,
                                   const std::string& fechaPrestamo,
                                   const std::string& fechaDevolucion) {
    Libro* libroPtr = nullptr;
    for (auto& l : libros) {
        if (l.getISBN() == isbn) {
            libroPtr = &l;
            break;
        }
    }
    Socio* socioPtr = nullptr;
    for (auto& s : socios) {
        if (s.getId() == idSocio) {
            socioPtr = &s;
            break;
        }
    }
    if (libroPtr && socioPtr) {
        prestamos.emplace_back(libroPtr, socioPtr, fechaPrestamo, fechaDevolucion);
    } else {
        std::cerr << "No se pudo registrar el préstamo\n";
    }
}

void Biblioteca::registrarPago(const Pago& pago) {
    pagos.push_back(pago);
}

const std::vector<Socio>& Biblioteca::getSocios() const {
    return socios;
}

const std::vector<Libro>& Biblioteca::getLibros() const {
    return libros;
}
