/*!
 * Game Engine Architecture Demo
 * MIT License (c) 2014
 * codenameyau.github.io
 */

#include <cstdio>
#include "lib/core.h"
#include "lib/utils.h"

int main(int argc, const char** argv) {

  // Initialize core engine
  ENGINE_CORE::MemoryManager gameMemory;
  ENGINE_CORE::Renderer gameRenderer;

  // Startup game engine
  gameMemory.startUp();
  gameRenderer.startUp();

  printf("%p\n", gameMemory.topStack);
  printf("%d\n", *gameMemory.topStack);
  // Shutdown game engine
  gameRenderer.shutDown();
  gameMemory.shutDown();


  return 0;
}
