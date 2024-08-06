#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdexcept>

// Classe Data (já fornecida anteriormente)
class Data {
protected:
    int ano;
    int mes;
    int dia;

    bool dataValida(int ano, int mes, int dia) {
        if (mes < 1 || mes > 12) return false;
        if (dia < 1) return false;

        int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            diasNoMes[1] = 29; // Ano bissexto
        }

        if (dia > diasNoMes[mes - 1]) return false;

        return true;
    }

public:
    Data(int ano = 0, int mes = 0, int dia = 0) {
        if (!dataValida(ano, mes, dia)) {
            throw std::invalid_argument("Data inválida");
        }
        this->ano = ano;
        this->mes = mes;
        this->dia = dia;
    }

    int getAno() const {
        return ano;
    }

    int getMes() const {
        return mes;
    }

    int getDia() const {
        return dia;
    }

    friend std::ostream& operator<<(std::ostream& os, const Data& data) {
        os << std::setw(4) << std::setfill('0') << data.ano << "/"
           << std::setw(2) << std::setfill('0') << data.mes << "/"
           << std::setw(2) << std::setfill('0') << data.dia;
        return os;
    }
};

// Classe Horario (já fornecida anteriormente)
class Horario {
protected:
    int hora;
    int minuto;
    int segundo;

    bool horarioValido(int h, int m, int s) {
        return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
    }

public:
    Horario(int h = 0, int m = 0, int s = 0) {
        if (!horarioValido(h, m, s)) {
            throw std::invalid_argument("Horário inválido");
        }
        hora = h;
        minuto = m;
        segundo = s;
    }

    int getHora() const {
        return hora;
    }

    int getMinuto() const {
        return minuto;
    }

    int getSegundo() const {
        return segundo;
    }

    Horario diferencaHorario(const Horario& outro) const {
        int totalSegundos1 = hora * 3600 + minuto * 60 + segundo;
        int totalSegundos2 = outro.hora * 3600 + minuto * 60 + segundo;
        int diferencaSegundos = std::abs(totalSegundos1 - totalSegundos2);

        int h = diferencaSegundos / 3600;
        diferencaSegundos %= 3600;
        int m = diferencaSegundos / 60;
        int s = diferencaSegundos % 60;

        return Horario(h, m, s);
    }

    friend std::ostream& operator<<(std::ostream& os, const Horario& horario) {
        os << std::setw(2) << std::setfill('0') << horario.hora << ":"
           << std::setw(2) << std::setfill('0') << horario.minuto << ":"
           << std::setw(2) << std::setfill('0') << horario.segundo;
        return os;
    }
};

// Classe DataHorario
class DataHorario : public Data, public Horario {
public:
    DataHorario(const Data& data, const Horario& horario) 
        : Data(data), Horario(horario) {}

    Horario diferencaDataHorario(const DataHorario& outro) const {
        int totalSegundos1 = (ano * 365 * 24 * 3600) + (mes * 30 * 24 * 3600) + (dia * 24 * 3600) + (hora * 3600) + (minuto * 60) + segundo;
        int totalSegundos2 = (outro.ano * 365 * 24 * 3600) + (outro.mes * 30 * 24 * 3600) + (outro.dia * 24 * 3600) + (outro.hora * 3600) + (outro.minuto * 60) + outro.segundo;
        int diferencaSegundos = std::abs(totalSegundos1 - totalSegundos2);

        int h = diferencaSegundos / 3600;
        diferencaSegundos %= 3600;
        int m = diferencaSegundos / 60;
        int s = diferencaSegundos % 60;

        return Horario(h, m, s);
    }

    Horario operator-(const DataHorario& outro) const {
        return diferencaDataHorario(outro);
    }

    friend std::ostream& operator<<(std::ostream& os, const DataHorario& dh) {
        os << static_cast<const Data&>(dh) << "-"
           << static_cast<const Horario&>(dh);
        return os;
    }
};

int main() {
    try {
        Data data1(2024, 7, 1);
        Horario horario1(10, 30, 45);

        Data data2(2024, 7, 2);
        Horario horario2(12, 45, 50);

        DataHorario dh1(data1, horario1);
        DataHorario dh2(data2, horario2);

        std::cout << "Data-Horário 1: " << dh1 << std::endl;
        std::cout << "Data-Horário 2: " << dh2 << std::endl;

        Horario diferenca = dh1 - dh2;
        std::cout << "Diferença entre Data-Horário 1 e Data-Horário 2: " << diferenca << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
