#pragma once
#include <stdint.h>
#include <stdlib.h>
#include <iostream>
#include <vector> 

class Node {
private:
    uint32_t size = 0;
    bool* arr = nullptr;
public:
    Node(const std::vector<bool> &vect);

    Node(uint32_t _size = 0, char symbol = 0);

    Node& operator = (const Node &other);
        
    Node(const Node &other);

    ~Node();

    void Plus(const Node& first, const Node& second);

    void updateKlini(uint32_t pos);

    void KliniStar(const Node &top);

    void updateDot(uint32_t delta, const bool* arrFrom);

    void Dot(const Node& first, const Node& second);

    void print() const;
        
    std::string getAns(uint32_t l) const;

    std::vector<bool> vectGetter() const;
};