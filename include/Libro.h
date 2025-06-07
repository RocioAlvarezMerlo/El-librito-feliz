#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string isbn;
    std::string titulo;
    std::string autor;
    std::string fechaPublicacion;
    int ejemplares;
public:
    Libro(const std::string& isbn,
          const std::string& titulo,
          const std::string& autor,
          const std::string& fechaPublicacion,
          int ejemplares);

    const std::string& getISBN() const;
    const std::string& getTitulo() const;
    int getEjemplares() const;
    void setEjemplares(int e);
};

#endif // LIBRO_H
