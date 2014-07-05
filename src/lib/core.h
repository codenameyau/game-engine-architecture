#ifndef ENGINE_CORE_H
#define ENGINE_CORE_H

namespace ENGINE_CORE {


/*************************
 * Core - Memory Manager *
 *************************/
class MemoryManager
{
public:

  // Constructor
  MemoryManager();

  // Destructor
  ~MemoryManager();

  // Properties
  int MAX_MEMORY;
  int *topStack;
  int *bottomStack;

  void *topMarker;
  void *bottomMarker;

  // Methods
  void startUp();
  void shutDown();
  void* alloc(int sizeBytes);

};


/*************************
 * Core - Scene Renderer *
 *************************/
class Renderer
{
public:

  // Constructor
  Renderer();

  // Destructor
  ~Renderer();

  // Properties

  // Methods
  void startUp();
  void shutDown();

};



} // end ENGINE_CORE

#endif
