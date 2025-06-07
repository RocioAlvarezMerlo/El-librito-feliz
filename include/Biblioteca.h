#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Socio.h"
#include "Libro.h"
#include "Prestamo.h"
#include "Pago.h"

class Biblioteca {
private:
    std::vector<Socio> socios;
    std::vector<Libro> libros;
    std::vector<Prestamo> prestamos;
    std::vector<Pago> pagos;
    int nextSocioId;
public:
    Biblioteca();

    int agregarSocio(const Socio& socio);
    void agregarLibro(const Libro& libro);
    void registrarPrestamo(int idSocio,
                           const std::string& isbn,
                           const std::string& fechaPrestamo,
                           const std::string& fechaDevolucion);
    void registrarPago(const Pago& pago);

    const std::vector<Socio>& getSocios() const;
    const std::vector<Libro>& getLibros() const;
};

#endif // BIBLIOTECA_H
