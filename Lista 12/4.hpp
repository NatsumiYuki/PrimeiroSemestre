#ifndef 4_hpp  //Abertura do linkamento do arquivo
#define 4_hpp

namespace classe{

    class Pessoa {
        private:
          std :: string nome;
        public:
          Conta Contas;

          Pessoa (std :: string nome, std :: string contas){
            this->nome = nome;
            this->Contas = Contas;
          }
          std :: string getNome(){
            return nome;
          }
    };

    class Fisica : pucblic Pessoa{
        private:
            std :: string CPF;
        public:
            Fisica(std :: string CPF);
            std :: string getCPF();
            
    };

    class Juridica : public Pessoa {// : Heranca :: Entrar na classe
        private:
            std :: string CNPJ;
        public: 
            Juridica (std :: string CNPJ);
            std :: string getCNPJ();
    };


    class Conta {
        private:
            int numero;
            float saido;
        public:
            std :: string PIX;

            conta(int numero);
            float saldo();
            void sacar (float valor);
            void depositar (float valor);
            int getConta(){
                return Conta;
            }
    };

    class corrente : public Conta {};

    class poupanca : public conta{
            private:
                int aniversario;
                float valor;
            public:
                int getAniversario();
                int aplicaJuras();
    };

    class Especial : public Conta {
            public:
                  float Limite;
                  float Especial (float limite);
    };


    class Historico {
        private:
            int numero_conta;
            int operacao;
            float valor;
        public:
            void operar(Conta conta, int operacao, floar valor);
    }

}

#endif    //Fechamento de arquivo
