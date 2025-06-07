#ifndef PAGO_H
#define PAGO_H

#include <string>

class Pago {
private:
    int idSocio;
    std::string fechaPago;
    double importe;
    int mes;
    int anio;
public:
    Pago(int idSocio,
         const std::string& fechaPago,
         double importe,
         int mes,
         int anio);

    int getIdSocio() const;
    double getImporte() const;
    int getMes() const;
    int getAnio() const;
};

#endif // PAGO_H
