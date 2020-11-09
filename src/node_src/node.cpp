#include "node.h"

Node::Node(const std::vector<bool> &vect) {
    *this = Node(vect.size());
    for (uint32_t i = 0; i < size; i++) {
        arr[i] = vect[i];
    }
}

Node::Node(uint32_t _size, char symbol) : size(_size) {
    arr = new bool(size);
    for (uint32_t i = 0; i < size; ++i) {
        arr[i] = 0;
    }
    arr[symbol != '1'] = symbol != 0;
}

Node& Node::operator = (const Node &other) {
    if (this == &other) return *this;
    if (size) delete[] arr;
    size = other.size;
    arr = new bool(size);
    for (uint32_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }  
    return *this;  
}
    
Node::Node(const Node &other) {
    if (size) delete[] arr;
    size = other.size;
    arr = new bool(size);
    for (uint32_t i = 0; i < size; ++i) {
        arr[i] = other.arr[i];
    }        
}

Node::~Node() {
    delete[] arr;
}

void Node::Plus(const Node& first, const Node& second) {
    *this = Node(size, 0);
    for (uint32_t i = 0; i < size; ++i) {
        arr[i] = first.arr[i] | second.arr[i];
    }
}

void Node::updateKlini(uint32_t pos) {
    for (uint32_t i = 0; i < size; ++i) {
        arr[(i * pos) % size] = 1; 
    }
}

void Node::KliniStar(const Node &top) {
    *this = top; 
    for (uint32_t i = 0; i < size; ++i) {
        if (arr[i]) {
            updateKlini(i);
        }
    } 
}

void Node::updateDot(uint32_t delta, const bool* arrFrom) {
    for (uint32_t i = 0; i < size; ++i) {
        if (arrFrom[i]) {
            arr[(i + delta) % size] = 1;
        } 
    }
}

void Node::Dot(const Node& first, const Node& second) {
    *this = Node(size, 0);
    for (uint32_t i = 0; i < size; ++i) {
        if (second.arr[i]) {
            updateDot(i, first.arr);
        }
    }
}

void Node::print() const {
    std::cout << "\nArray:\n\t";
    for (uint32_t i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }   
    std::cout << "\n";
}
    
std::string Node::getAns(uint32_t l) const {
    return (arr[l] == 1) ? "YES" : "NO";
}

std::vector<bool> Node::vectGetter() const {
    std::vector<bool> vect(size);
    for (uint32_t i = 0; i < size; ++i) {
        vect[i] = arr[i]; 
    }
    return vect;
}
