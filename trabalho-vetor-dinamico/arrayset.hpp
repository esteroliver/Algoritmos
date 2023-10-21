#ifndef __ARRAY_SET__
#define __ARRAY_SET__

class array_set{
    private:
        int *data;
        unsigned int tamanho_, capacidade_;
        void incrementar(){
            int *nova_data = new int[capacidade_*2];
            for (int i = 0; i < tamanho_; i++){
                nova_data[i] = this->data[i];
            }
            delete [] this->data;
            this->data = nova_data;
            capacidade_ = capacidade_*2;
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
            tamanho_ = 0;
        }
        void inserir_final(int valor){
           if (tamanho_ == capacidade_) incrementar();
           if (!encontrar(valor)){
                data[tamanho_] = valor;
                tamanho_++;
           }
        }
        void inserir_inicio(int valor){
            if (tamanho_ == capacidade_) incrementar();
            if (!encontrar(valor)){
                for (int i = tamanho_; i > 0; i--)
                    data[i] = data[i-1];           
            }
            data[0] = valor;
            tamanho_++; 
        }
        bool apagar_final(){}
        bool apagar_inicio(){}
        int final(){}
        int inicio(){}
        bool remover(int valor){}
        bool encontrar(int valor){
            for (int i = 0; i<tamanho_; i++){
                if (valor == this->data[i]) return true;
            }
            return false;
        }
        int contar(int valor){}
        int soma(){}
};

#endif // __ARRAY_SET__