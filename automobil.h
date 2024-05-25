#ifndef UNTITLED_AUTOMOBIL_H
#define UNTITLED_AUTOMOBIL_H
#include <string>

class automobil {

public:
    // -Contructores-
    //Contrsuctor Implicito:
    automobil() = default;
    //Contructor Explicito por parametros:
    automobil(std::string modelo, std::string color, int cilindros, int millaje, std::string tipo_de_transmision, std::string tipo_de_combustible, float precio);
    //Contructor Explicito por copia:
    automobil(const automobil &automovil);

    automobil &operator=(const automobil &rhs);

    // -Metodos de acceso-
    std::string getModelo() const {
        return modelo;
    }
    std::string getColor() const {
        return color;
    }
    std::string getTipo_de_transmision() const {
        return tipo_de_transmision;
    }
    std::string getTipo_de_combustible() const {
        return tipo_de_combustible;
    }
    int getCilindros() const {
        return cilindros;
    }
    int getMillaje() const {
        return millaje;
    }
    float getPrecio() const {
        return precio;
    }

private:
    std::string modelo;
    std::string color;
    int cilindros;
    int millaje;
    std::string tipo_de_transmision;
    std::string tipo_de_combustible;
    float precio;


}
;

#endif //UNTITLED_AUTOMOBIL_H
