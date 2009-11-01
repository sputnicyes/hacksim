#include "terminal.hpp"

void TerminalPanel::key(SDL_keysym key) {
  this->buffer += key.unicode;
}



void TerminalPanel::draw() {
  Panel::draw();
  const int PADDING = 1;

  // Draw buffer text.
  SDL_Rect padded = { PADDING, PADDING, this->area.w - (PADDING + PADDING), this->area.h - (PADDING + PADDING) };
  glColor3f(1.0f, 1.0f, 1.0f);
  this->font->draw(this->buffer, padded);
}

