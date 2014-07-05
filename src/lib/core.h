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
  void startUp();

  // Methods
  void shutDown();

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
  void startUp();

  // Methods
  void shutDown();

};



} // end ENGINE_CORE

#endif
