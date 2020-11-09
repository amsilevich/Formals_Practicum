#include <string>   
#include <stack>
#include "constants.h"
#include "node.h"

class Handler {
private:
    std::stack<Node> Stack;
    std::string regular;
    uint32_t k, l;
public:
    Handler(const std::string &_regular, uint32_t _k, uint32_t _l) 
                                    : regular(_regular), k(_k), l(_l) {}

    void pushNew(char symbol) {
        Stack.push(Node(k, symbol));
    }

    bool kliniHandle() {
        if (!Stack.size()) {
            return 1;
        }
        Node Top(k);
        Top.KliniStar(Stack.top());
        Stack.pop();
        Stack.push(Top);
        return 0;
    }

    bool binaryOperationHandle(char operation) {
        if (Stack.size() < REQUIRED_COUNT) {
            return 1;
        }
        Node Top(k);
        Node first(Stack.top());
        Stack.pop();
        Node second(Stack.top());
        Stack.pop();
        if (operation == operationType::PLUS) {
            Top.Plus(first, second);
        }
        else {
            Top.Dot(first, second);
        }
        Stack.push(Top);
        return 0;
    }

    bool Handle() {
        bool error = 0;
        for (uint32_t i = 0; i < regular.size(); ++i) {
            if (regular[i] == operationType::KLINI_STAR) {
                error |= kliniHandle();
            }
            else if (regular[i] == operationType::PLUS || 
                     regular[i] == operationType::DOT) {
                error |= binaryOperationHandle(regular[i]);
            }
            else {
                pushNew(regular[i]);
            }
            if (error) {
                return !error;
            }
        }
        error |= (Stack.size() != 1);
        return !error;
    }

    std::string getAns() {
        if (!Handle()) {
            return "ERROR";
        }
        return Stack.top().getAns(l);
    }
};