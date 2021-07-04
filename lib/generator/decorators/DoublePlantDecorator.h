#ifndef EXT_NOISELIB_LIB_GENERATOR_DECORATORS_DOUBLEPLANTDECORATOR_H_
#define EXT_NOISELIB_LIB_GENERATOR_DECORATORS_DOUBLEPLANTDECORATOR_H_

#include "Decorator.h"

struct DoublePlantDecoration {
  int weight;
  MinecraftBlock block;
};

class DoublePlantDecorator : public Decorator {
 public:
  void SetDoublePlants(std::vector<DoublePlantDecoration> doublePlants);

  void Decorate(SimpleChunkManager &world, Random &random, int_fast64_t chunkX, int_fast64_t chunkZ) override;
 private:
  MinecraftBlock GetRandomDoublePlant(Random random);

  std::vector<DoublePlantDecoration> decorations_;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_DECORATORS_DOUBLEPLANTDECORATOR_H_