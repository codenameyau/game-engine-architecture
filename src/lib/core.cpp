/*!
 * Engine - Core
 *
 * Description:
 * Contains core game engine components
 */

#include <cstdio>
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
  }

  void MemoryManager::shutDown() {
    printf("[-] Shutting down memory manager\n");
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
