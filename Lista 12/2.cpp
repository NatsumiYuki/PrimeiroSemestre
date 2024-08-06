#include <iostream>
#include <iomanip>
#include <stdexcept>

class Horario {
private:
    int hora;
    int minuto;
    int segundo;

    bool horarioValido(int h, int m, int s) {
        return (h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60);
    }

public:
    // Construtor padrão
    Horario() : hora(0), minuto(0), segundo(0) {}

    // Construtor com parâmetros
    Horario(int h, int m, int s) {
        if (!horarioValido(h, m, s)) {
            throw std::invalid_argument("Horário inválido");
        }
        hora = h;
        minuto = m;
        segundo = s;
    }

    // Métodos get
    int getHora() const {
        return hora;
    }

    int getMinuto() const {
        return minuto;
    }

    int getSegundo() const {
        return segundo;
    }

    // Método para adicionar horário
    void adicionarHorario(const Horario& outro) {
        segundo += outro.segundo;
        minuto += outro.minuto + segundo / 60;
        hora += outro.hora + minuto / 60;

        segundo %= 60;
        minuto %= 60;
        hora %= 24;
    }

    // Sobrecarga do operador +
    Horario operator+(const Horario& outro) const {
        Horario resultado = *this;
        resultado.adicionarHorario(outro);
        return resultado;
    }

    // Método para diferença de horários
    Horario diferencaHorario(const Horario& outro) const {
        int totalSegundos1 = hora * 3600 + minuto * 60 + segundo;
        int totalSegundos2 = outro.hora * 3600 + outro.minuto * 60 + outro.segundo;
        int diferencaSegundos = std::abs(totalSegundos1 - totalSegundos2);

        int h = diferencaSegundos / 3600;
        diferencaSegundos %= 3600;
        int m = diferencaSegundos / 60;
        int s = diferencaSegundos % 60;

        return Horario(h, m, s);
    }

    // Sobrecarga do operador -
    Horario operator-(const Horario& outro) const {
        return diferencaHorario(outro);
    }

    // Sobrecarga do operador <<
    friend std::ostream& operator<<(std::ostream& os, const Horario& horario) {
        os << std::setw(2) << std::setfill('0') << horario.hora << ":"
           << std::setw(2) << std::setfill('0') << horario.minuto << ":"
           << std::setw(2) << std::setfill('0') << horario.segundo;
        return os;
    }
};

int main() {
    try {
        Horario h1(10, 30, 45);
        Horario h2(2, 40, 30);
        Horario h3;

        std::cout << "Horário 1: " << h1 << std::endl;
        std::cout << "Horário 2: " << h2 << std::endl;
        std::cout << "Horário 3 (padrão): " << h3 << std::endl;

        h3 = h1 + h2;
        std::cout << "Horário 1 + Horário 2: " << h3 << std::endl;

        Horario diferenca = h1 - h2;
        std::cout << "Diferença entre Horário 1 e Horário 2: " << diferenca << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
