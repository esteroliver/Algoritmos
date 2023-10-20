#ifndef __ARRAY_DINAMICO__
#define __ARRAY_DINAMICO__

class set{
    private:
        int * data;
        unsigned int tamanho;
        unsigned int capacidade;
        void incrementar_cap(){
            int * nova_data = new int[capacidade*2];
            for (int i = 0; i < tamanho; i++){
                nova_data[i] = data[i];
            }
            delete [] data;
            capacidade *= 2;
            data = nova_data;
        };
    public:
        set(){
            this->tamanho = 0;
            this->capacidade = 1000;
            this->data = new int[1000];
        }

        ~set(){
            delete [] this->data;
        }

        bool inserir(int value){
            if(this->encontrar(value)) return false;
            if(this->tamanho == this->capacidade) incrementar_cap(); // incrementar_cap = O(n)
            this->data[tamanho] = value;
            this->tamanho++;
            return true;
        }
        // inserir = O(1)

        bool apagar(int value){
            for(int i = 0; i < this->tamanho; i++){ //n
                if(this->encontrar(value)){
                    for(int j=i; j < this->tamanho - 1; j++){ //m
                        this->data[j] = this->data[j+1];
                    }
                    this->tamanho--;
                    return true;
                }
            }
            return false;
        }
        // apagar = O(n*m)

        bool encontrar(int value){
            for (int i = 0; i < this->tamanho; i++){
                if(value == this->data[i]){
                    return true;
                    break;
                }
            }
            return false;
        }
        // encontrar = O(n)

        unsigned int size(){
            return this->tamanho;
        }
        // size = O(1)

        bool vazio(){
            if (this->tamanho == 0) return true;
            else return false;
        }
        // vazio = O(1)

        void apagartodos(){
            this->tamanho = 0;
        }
        // apagartodos = O(1)
};

#endif // __ARRAY_DINAMICO__