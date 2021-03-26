#include "map.hpp"

#include <ctime>
#include <unistd.h>
std::string gen_random(const int len) {
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    srand( (unsigned) time(NULL) * getpid());
    tmp_s.reserve(len);
    for (int i = 0; i < len; ++i)
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s;
}

// std::map<int, std::string> generateMap() {
//     std::map<int, std::string> res;
//     for (int i = 0; i < 4'000'000; ++i) {
//         res[i] = gen_random(20);
//     }
//     return res;
// }

std::unordered_map<int, std::string> generateMap() {
    std::unordered_map<int, std::string> res;
    for (int i = 0; i < 4'000'000; ++i) {
        res[i] = gen_random(20);
    }
    return res;
}
