#pragma once
#include "../handler_src/handler.h"

int main() {
    std::string regular;
    uint32_t k, l;
    std::cin >> regular >> k >> l;
    Handler solution(regular, k, l);
    std::cout << solution.getAns() << std::endl;
    return 0;
}
