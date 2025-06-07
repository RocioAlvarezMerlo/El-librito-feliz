#ifndef SOCIO_H
#define SOCIO_H

#include <string>

class Socio {
private:
    int id;
    std::string dni;
    std::string nombre;
    std::string apellido;
    std::string telefono;
    std::string direccion;
    std::string email;
    std::string fechaNacimiento;
public:
    Socio(int id,
          const std::string& dni,
          const std::string& nombre,
          const std::string& apellido,
          const std::string& telefono,
          const std::string& direccion,
          const std::string& email,
          const std::string& fechaNacimiento);

    int getId() const;
    const std::string& getDni() const;
    const std::string& getNombre() const;
    const std::string& getApellido() const;
    const std::string& getTelefono() const;
    const std::string& getDireccion() const;
    const std::string& getEmail() const;
    const std::string& getFechaNacimiento() const;
    std::string getNombreCompleto() const;
};

#endif // SOCIO_H
