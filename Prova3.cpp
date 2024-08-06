#include <iostream>
#include <exception>

class Pessoa{
    private:
        std :: string nome;
        virtual std :: string = 0;
    public:
        Pessoa(std :: string Nome, std :: string Registro);
        void imprimir ();
        std :: string getNome();
    protected:
        std :: string getCadastro();
};

class Fisica : public Pessoa{
    public:
        fisica(std :: string Nome, std :: string CPF);
        void imprimir();
        bool ValidarCPF(std :: string CPF);
};

class Juridica: public Pessoa{
    public:
        Juridica(std :: string Nome, std :: string Registro)
        void impimir();
        static bool Validar CNPJ(std :: string);
};

Juridica :: Juridica (std :: string Nome, std :: string CNPJ) : Pessoa (Nome ,CNPJ){}
    void Juridica :: imprimir(){
    std :: cout << "Pessoa Juridica" << getName () << "inscrita no CNPJ" << getRegistro() << std :: endl;
}