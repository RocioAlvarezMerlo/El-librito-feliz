#include <iostream>
#include "Biblioteca.h"

void mostrarMenu() {
    std::cout << "1. Agregar socio\n";
    std::cout << "2. Agregar libro\n";
    std::cout << "3. Registrar préstamo\n";
    std::cout << "4. Registrar pago\n";
    std::cout << "5. Listar socios\n";
    std::cout << "6. Listar libros\n";
    std::cout << "0. Salir\n";
    std::cout << "Seleccione una opción: ";
}

int main() {
    Biblioteca biblioteca;
    int opcion;
    do {
        mostrarMenu();
        std::cin >> opcion;
        std::cin.ignore(); // limpiar salto de línea
        if (opcion == 1) {
            std::string dni, nombre, apellido, telefono, direccion, email, fechaNacimiento;
            std::cout << "DNI: "; std::getline(std::cin, dni);
            std::cout << "Nombre: "; std::getline(std::cin, nombre);
            std::cout << "Apellido: "; std::getline(std::cin, apellido);
            std::cout << "Teléfono: "; std::getline(std::cin, telefono);
            std::cout << "Dirección: "; std::getline(std::cin, direccion);
            std::cout << "Email: "; std::getline(std::cin, email);
            std::cout << "Fecha de nacimiento: "; std::getline(std::cin, fechaNacimiento);
            Socio s(0, dni, nombre, apellido, telefono, direccion, email, fechaNacimiento);
            int id = biblioteca.agregarSocio(s);
            std::cout << "Socio agregado con ID " << id << "\n";
        } else if (opcion == 2) {
            std::string isbn, titulo, autor, fecha;
            int ejemplares;
            std::cout << "ISBN: "; std::getline(std::cin, isbn);
            std::cout << "Título: "; std::getline(std::cin, titulo);
            std::cout << "Autor: "; std::getline(std::cin, autor);
            std::cout << "Fecha de publicación: "; std::getline(std::cin, fecha);
            std::cout << "Ejemplares: "; std::cin >> ejemplares; std::cin.ignore();
            Libro l(isbn, titulo, autor, fecha, ejemplares);
            biblioteca.agregarLibro(l);
        } else if (opcion == 3) {
            int idSocio; std::string isbn, fPrestamo, fDevolucion;
            std::cout << "ID de socio: "; std::cin >> idSocio; std::cin.ignore();
            std::cout << "ISBN del libro: "; std::getline(std::cin, isbn);
            std::cout << "Fecha de préstamo: "; std::getline(std::cin, fPrestamo);
            std::cout << "Fecha de devolución: "; std::getline(std::cin, fDevolucion);
            biblioteca.registrarPrestamo(idSocio, isbn, fPrestamo, fDevolucion);
        } else if (opcion == 4) {
            int idSocio, mes, anio; double importe; std::string fechaPago;
            std::cout << "ID de socio: "; std::cin >> idSocio; std::cin.ignore();
            std::cout << "Fecha de pago: "; std::getline(std::cin, fechaPago);
            std::cout << "Importe: "; std::cin >> importe; std::cin.ignore();
            std::cout << "Mes de la cuota: "; std::cin >> mes; std::cin.ignore();
            std::cout << "Año de la cuota: "; std::cin >> anio; std::cin.ignore();
            Pago p(idSocio, fechaPago, importe, mes, anio);
            biblioteca.registrarPago(p);
        } else if (opcion == 5) {
            for (const auto& s : biblioteca.getSocios()) {
                std::cout << s.getId() << ": " << s.getNombreCompleto() << "\n";
            }
        } else if (opcion == 6) {
            for (const auto& l : biblioteca.getLibros()) {
                std::cout << l.getISBN() << ": " << l.getTitulo() << " (" << l.getEjemplares() << ")\n";
            }
        }
    } while (opcion != 0);
    return 0;
}
