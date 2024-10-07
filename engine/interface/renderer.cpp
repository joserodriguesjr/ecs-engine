#include "renderer.hpp"

#include "desktop/rl_renderer.hpp"

Renderer &Renderer::instance() { return RaylibRenderer::instance(); }
