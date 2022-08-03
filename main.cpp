#include "tic_tac_toe.h"

#include <iostream>

int main()
try {
    tic_tac_toe::play_game();
}
catch (std::runtime_error& e) {
    std::cerr << e.what() << "\n";
    std::getchar();
}
catch (...) {
    std::cerr << "unknown error " << "\n";
    std::getchar();
}