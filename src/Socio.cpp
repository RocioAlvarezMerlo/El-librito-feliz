#include "Socio.h"

Socio::Socio(int id,
             const std::string& dni,
             const std::string& nombre,
             const std::string& apellido,
             const std::string& telefono,
             const std::string& direccion,
             const std::string& email,
             const std::string& fechaNacimiento)
    : id(id), dni(dni), nombre(nombre), apellido(apellido), telefono(telefono),
      direccion(direccion), email(email), fechaNacimiento(fechaNacimiento) {}

int Socio::getId() const {
    return id;
}

const std::string& Socio::getDni() const { return dni; }
const std::string& Socio::getNombre() const { return nombre; }
const std::string& Socio::getApellido() const { return apellido; }
const std::string& Socio::getTelefono() const { return telefono; }
const std::string& Socio::getDireccion() const { return direccion; }
const std::string& Socio::getEmail() const { return email; }
const std::string& Socio::getFechaNacimiento() const { return fechaNacimiento; }

std::string Socio::getNombreCompleto() const {
    return nombre + " " + apellido;
}
