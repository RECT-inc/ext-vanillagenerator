#ifndef EXT_NOISELIB_LIB_GENERATOR_OBJECTS_SUGARCANE_H_
#define EXT_NOISELIB_LIB_GENERATOR_OBJECTS_SUGARCANE_H_

#include <lib/objects/math/Facing.h>
#include "TerrainObjects.h"

class SugarCane {
 public:
  static bool Generate(ChunkManager &world, Random &random, int_fast32_t sourceX, int_fast16_t sourceY, int_fast32_t sourceZ);
};

#endif //EXT_NOISELIB_LIB_GENERATOR_OBJECTS_SUGARCANE_H_
