/*!
 * Engine - Core
 *
 * Description:
 * Contains core game engine components
 */

#include <cstdio>
#include <cstdlib>
#include "core.h"

namespace ENGINE_CORE {


/*************************
 * Core - Memory Manager *
 *************************/

  // Constructor
  MemoryManager::MemoryManager() {};

  // Destructor
  MemoryManager::~MemoryManager() {};

  // Properties

  // Public Methods
  void MemoryManager::startUp() {
    printf("[+] Starting memory manager\n");
    int length = 40;
    int *p;

    MemoryManager::topStack = malloc(length * sizeof(int));
    for (p=MemoryManager::topStack; p<4000; p++) {
      *p = 10;
    }
  }

  void MemoryManager::shutDown() {
    printf("[-] Shutting down memory manager\n");
  }

  void* alloc(int sizeBytes) {
    return malloc(sizeBytes);
  }

/*************************
 * Core - Scene Renderer *
 *************************/

  // Constructor
  Renderer::Renderer() {};

  // Destructor
  Renderer::~Renderer() {};

  // Properties


  // Public Methods
  void Renderer::startUp() {
    printf("[+] Starting engine renderer\n");
  }

  void Renderer::shutDown() {
    printf("[-] Shutting down engine renderer\n");
  }





} // end ENGINE_CORE
