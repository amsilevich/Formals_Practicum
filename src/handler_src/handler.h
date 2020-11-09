#pragma once
#include <string>   
#include <stack>
#include "../constants_src/constants.h"
#include "../node_src/node.h"

class Handler {
private:
    std::stack<Node> Stack;
    std::string regular;
    uint32_t k, l;
public:
    Handler(const std::string &_regular, uint32_t _k, uint32_t _l);

    void pushNew(char symbol);

    bool kliniHandle();

    bool binaryOperationHandle(char operation);

    bool Handle();

    std::string getAns();
};