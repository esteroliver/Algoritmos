#ifndef __ARRAY_SET__
#define __ARRAY_SET__

class array_set{
    private:
        int *data;
        unsigned int tamanho_, capacidade_;
        void incrementar(){

        };
    public:
        array_set(){
            this->tamanho_ = 0;
            this->capacidade_ = 2;
            this->data = new int[2];
        }
        ~array_set(){
            delete [] this->data;
        }
        unsigned int tamanho(){
            return tamanho_;
        }
        unsigned int capacidade(){
            return capacidade_;
        }
        double porcentagem_ocupada(){
            double porcentagem = tamanho_/capacidade_;
            return porcentagem;
        }

        bool inserir_em(unsigned int index, int valor){

        }
        bool remover_em(unsigned int index){

        }
        int get_em(unsigned int index){

        }

        void limpar(){

        }
        void inserir_final(int valor){

        }
        void inserir_inicio(int valor){

        }
        bool apagar_final(){}
        bool apagar_inicio(){}
        int final(){}
        int inicio(){}
        bool remover(int valor){}
        int encontrar(int valor){}
        int contar(int valor){}
        int soma(){}
};

#endif // __ARRAY_SET__