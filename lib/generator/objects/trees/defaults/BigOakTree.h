#ifndef EXT_NOISELIB_LIB_GENERATOR_OBJECTS_TREES_DEFAULTS_BIGOAKTREE_H_
#define EXT_NOISELIB_LIB_GENERATOR_OBJECTS_TREES_DEFAULTS_BIGOAKTREE_H_

#include <lib/generator/objects/trees/GenericTree.h>
#include <lib/objects/math/Vector3.h>

struct LeafNode {
  int x = 0;
  int y = 0;
  int z = 0;
  int branchY = 0;
};

class BigOakTree : public GenericTree {
 public:
  void Initialize(Random &random, BlockTransaction &txn) override;

  bool Generate(ChunkManager &world, Random &random, int_fast32_t sourceX, int_fast32_t sourceY, int_fast32_t sourceZ) override;
 protected:
  void SetMaxLeafDistance(int distance);

  bool CanPlace(int_fast32_t baseX, int_fast32_t baseY, int_fast32_t baseZ, ChunkManager &world) override;
 private:
  int CountAvailableBlocks(Vector3 from, Vector3 to, ChunkManager &world);

  std::vector<LeafNode> GenerateLeafNodes(int_fast32_t blockX, int_fast32_t blockY, int_fast32_t blockZ, ChunkManager &world, Random &random);

  constexpr static float LEAF_DENSITY = 1.0F;

  int maxLeafDistance = 5;
  int trunkHeight = 0;
};

#endif //EXT_NOISELIB_LIB_GENERATOR_OBJECTS_TREES_DEFAULTS_BIGOAKTREE_H_
