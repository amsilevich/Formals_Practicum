#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include <vector> 

class Node {
private:
    uint32_t size = 0;
    bool* arr = nullptr;
public:
    Node(const std::vector<bool> &_arr) {
        arr = new bool(_arr.size());
        for (uint32_t i = 0; i < size; ++i) {
            arr[i] = _arr[i];
        }
    }

    Node(uint32_t _size = 0, char symbol = 0) : size(_size) {
        arr = new bool(size);
        for (uint32_t i = 0; i < size; ++i) {
            arr[i] = 0;
        }
        arr[symbol != '1'] = symbol != 0;
    }

    Node& operator = (const Node &other) {
        if (this == &other) return *this;
        if (size) delete[] arr;
        size = other.size;
        arr = new bool(size);
        for (uint32_t i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }  
        return *this;  
    }
    
    Node(const Node &other) {
        if (size) delete[] arr;
        size = other.size;
        arr = new bool(size);
        for (uint32_t i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }        
    }

    ~Node() {
        delete[] arr;
    }

    void Plus(const Node& first, const Node& second) {
        *this = Node(size, 0);
        for (uint32_t i = 0; i < size; ++i) {
            arr[i] = first.arr[i] | second.arr[i];
        }
    }

    void updateKlini(uint32_t pos) {
        for (uint32_t i = 0; i < size; ++i) {
            arr[(i * pos) % size] = 1; 
        }
    }

    void KliniStar(const Node &top) {
        *this = top; 
        for (uint32_t i = 0; i < size; ++i) {
            if (arr[i]) {
                updateKlini(i);
            }
        } 
    }

    void updateDot(uint32_t delta, const bool* arrFrom) {
        for (uint32_t i = 0; i < size; ++i) {
            if (arrFrom[i]) {
                arr[(i + delta) % size] = 1;
            } 
        }
    }

    void Dot(const Node& first, const Node& second) {
        *this = Node(size, 0);
        for (uint32_t i = 0; i < size; ++i) {
            if (second.arr[i]) {
                updateDot(i, first.arr);
            }
        }
    }

    void print() const {
        std::cout << "\nArray:\n\t";
        for (uint32_t i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }   
        std::cout << "\n";
    }
    
    std::string getAns(uint32_t l) const {
        return (arr[l] == 1) ? "YES" : "NO";
    }

    bool* arrGetter() {
        return arr;
    }
};