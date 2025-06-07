#include "Pago.h"

Pago::Pago(int idSocio,
           const std::string& fechaPago,
           double importe,
           int mes,
           int anio)
    : idSocio(idSocio), fechaPago(fechaPago), importe(importe), mes(mes), anio(anio) {}

int Pago::getIdSocio() const {
    return idSocio;
}

double Pago::getImporte() const {
    return importe;
}

int Pago::getMes() const {
    return mes;
}

int Pago::getAnio() const {
    return anio;
}
