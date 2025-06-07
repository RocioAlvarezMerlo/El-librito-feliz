#include "Libro.h"

Libro::Libro(const std::string& isbn,
             const std::string& titulo,
             const std::string& autor,
             const std::string& fechaPublicacion,
             int ejemplares)
    : isbn(isbn), titulo(titulo), autor(autor), fechaPublicacion(fechaPublicacion), ejemplares(ejemplares) {}

const std::string& Libro::getISBN() const {
    return isbn;
}

const std::string& Libro::getTitulo() const {
    return titulo;
}

int Libro::getEjemplares() const {
    return ejemplares;
}

void Libro::setEjemplares(int e) {
    ejemplares = e;
}
