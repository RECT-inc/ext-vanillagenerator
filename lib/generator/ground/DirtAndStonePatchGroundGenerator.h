#ifndef EXT_NOISELIB_LIB_GENERATOR_GROUND_DIRTANDSTONEPATCHGROUNDGENERATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_GROUND_DIRTANDSTONEPATCHGROUNDGENERATOR_H_

#include "GroundGenerator.h"

class DirtAndStonePatchGroundGenerator : public GroundGenerator {
 public:
  void GenerateTerrainColumn(SimpleChunkManager &world,
                             Random &random,
                             int_fast64_t x,
                             int_fast64_t z,
                             int biome,
                             double surface_noise) override;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_GROUND_DIRTANDSTONEPATCHGROUNDGENERATOR_H_