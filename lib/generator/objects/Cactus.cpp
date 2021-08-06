#include <lib/objects/constants/BlockList.h>
#include <lib/objects/math/Vector3.h>
#include <lib/objects/constants/Logic.h>
#include "Cactus.h"

bool Cactus::Generate(ChunkManager &world, Random &random, int_fast32_t sourceX, int_fast16_t sourceY, int_fast32_t sourceZ) {
  if (world.GetBlockAt(sourceX, sourceY, sourceZ) == AIR) {
    auto height = random.NextInt(random.NextInt(3) + 1) + 1;

    for (int n = 0; n <= sourceY + height; ++n) {
      MinecraftBlock belowBlock = world.GetBlockAt(sourceX, static_cast<int_fast16_t>(n - 1), sourceZ);
      if (belowBlock == SAND || (belowBlock == CACTUS && world.GetBlockAt(sourceX, static_cast<int_fast16_t>(n + 1), sourceZ) == AIR)) {
        Vector3 iVec = {sourceX, n, sourceZ};

        for (int facing : Facing::HORIZONTAL) {
          auto face = getSide(iVec, facing, 1);
          if (IS_SOLID(world.GetBlockAt(face.x, face.y, face.z).GetId())) {
            return n > sourceY;
          }
        }

        world.SetBlockAt(sourceX, static_cast<int_fast16_t>(sourceY + n), sourceZ, CACTUS);
      }
    }
  }

  return true;
}