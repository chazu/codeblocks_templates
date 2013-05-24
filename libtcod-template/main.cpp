#include <iostream>
#include "libtcod.hpp"

int main() {
    TCODConsole::initRoot(80, 50, "C++ libtcod tutorial", false);
    TCODConsole::root->print(40,25,"Hello world");
    TCODConsole::flush();
    TCODConsole::waitForKeypress(true);
    return 0;
}
