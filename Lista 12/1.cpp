#include <iostream>
#include <stdexcept>
#include <iomanip>

class Data {
private:
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
    Data(int ano, int mes, int dia) {
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

    void adicionarDias(int dias) {
        if (dias < 0) throw std::invalid_argument("Número de dias deve ser positivo");

        while (dias > 0) {
            int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                diasNoMes[1] = 29; // Ano bissexto
            }

            if (dia + dias <= diasNoMes[mes - 1]) {
                dia += dias;
                dias = 0;
            } else {
                dias -= (diasNoMes[mes - 1] - dia + 1);
                dia = 1;
                mes++;
                if (mes > 12) {
                    mes = 1;
                    ano++;
                }
            }
        }
    }

    Data operator+(int dias) const {
        Data novaData = *this;
        novaData.adicionarDias(dias);
        return novaData;
    }

    friend std::ostream& operator<<(std::ostream& os, const Data& data) {
        os << std::setw(2) << std::setfill('0') << data.dia << "/"
           << std::setw(2) << std::setfill('0') << data.mes << "/"
           << data.ano;
        return os;
    }

    int diferencaDias(const Data& outra) const {
        int diasAno = 365;
        int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            diasNoMes[1] = 29; // Ano bissexto
        }
        
        int diasTotal = 0;
        Data data1 = *this;
        Data data2 = outra;

        while (data1.ano < data2.ano || (data1.ano == data2.ano && (data1.mes < data2.mes || (data1.mes == data2.mes && data1.dia < data2.dia)))) {
            diasTotal++;
            data1.adicionarDias(1);
        }

        while (data2.ano < data1.ano || (data2.ano == data1.ano && (data2.mes < data1.mes || (data2.mes == data1.mes && data2.dia < data1.dia)))) {
            diasTotal++;
            data2.adicionarDias(1);
        }

        return diasTotal;
    }

    int operator-(const Data& outra) const {
        return diferencaDias(outra);
    }
};

int main() {
    try {
        Data data1(2023, 7, 1);
        Data data2(2024, 7, 1);
        std::cout << "Data 1: " << data1 << std::endl;
        std::cout << "Data 2: " << data2 << std::endl;

        data1.adicionarDias(30);
        std::cout << "Data 1 + 30 dias: " << data1 << std::endl;

        Data data3 = data2 + 15;
        std::cout << "Data 2 + 15 dias: " << data3 << std::endl;

        int diferenca = data1 - data2;
        std::cout << "Diferença de dias entre Data 1 e Data 2: " << diferenca << " dias" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}



