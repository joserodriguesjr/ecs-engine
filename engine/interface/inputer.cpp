#include "inputer.hpp"

#include "desktop/rl_inputer.hpp"

Inputer &Inputer::instance() { return RaylibInputer::instance(); }
