#include <vector>
#include <stdint.h>

bool checkVectsEqual(const std::vector<bool> &first, const std::vector<bool> &second) {
    for (uint32_t i = 0; i < first.size(); i++) {
        if (first[i] != second[i]) {
            return false;
        }
    }
    return true;
}