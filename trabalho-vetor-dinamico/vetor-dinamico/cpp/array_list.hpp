#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__


class array_list {
private:
    int* data;
    unsigned int size_, capacity_;
    void increase_capacity() {}
public:
    array_list() {
        data = new int[8];
        this->size_ = 0;
        this->capacity_ = 8;
    }
    ~array_list() {
        delete[] data;
    }
    unsigned int size() {
        return this->size_;
    }
    unsigned int capacity() {
        return this->capacity_;
    }
    double percent_occupied() {}
    bool insert_at(unsigned int index, int value) {}
    bool remove_at(unsigned int index) {
        if (index >= this->size_)
            return false; // Não removeu
        for (int i = index + 1; i < this->size_; ++i) {
            this->data[i - 1] = this->data[i];
        }
        this->size_--;
        return true; // Removeu
    }
    int get_at(unsigned int index) {
        // TODO: Check if index is valid
        return this->data[index];
    }
    void clear() {}
    void push_back(int value) {
        if (this->size_ == this->capacity_)
            increase_capacity();
        this->data[size_++] = value;
    }
    void push_front(int value) {}
    bool pop_back() {}
    bool pop_front() {}
    int front(){}
    int back(){}
    bool remove(int value) {}
    int find(int value) {}
    int count(int value) {}
    int sum() {}
};


#endif // __ARRAY_LIST_IFRN__