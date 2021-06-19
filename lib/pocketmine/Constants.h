#ifndef EXT_NOISE_CONSTANTS_H
#define EXT_NOISE_CONSTANTS_H

#include "lib/chunk/Chunk.h"

#define Y_MIN 0
#define Y_MAX 256

// Biome ids

#define OCEAN 0
#define PLAINS 1
#define DESERT 2
#define EXTREME_HILLS 3
#define FOREST 4
#define TAIGA 5
#define SWAMPLAND 6
#define RIVER 7
#define HELL 8
#define SKY 9
#define FROZEN_OCEAN 10
#define FROZEN_RIVER 11
#define ICE_PLAINS 12
#define ICE_MOUNTAINS 13
#define MUSHROOM_ISLAND 14
#define MUSHROOM_SHORE 15
#define BEACH 16
#define DESERT_HILLS 17
#define FOREST_HILLS 18
#define TAIGA_HILLS 19
#define SMALL_MOUNTAINS 20
#define JUNGLE 21
#define JUNGLE_HILLS 22
#define JUNGLE_EDGE 23
#define DEEP_OCEAN 24
#define STONE_BEACH 25
#define COLD_BEACH 26
#define BIRCH_FOREST 27
#define BIRCH_FOREST_HILLS 28
#define ROOFED_FOREST 29
#define COLD_TAIGA 30
#define COLD_TAIGA_HILLS 31
#define MEGA_TAIGA 32
#define MEGA_TAIGA_HILLS 33
#define EXTREME_HILLS_PLUS 34
#define SAVANNA 35
#define SAVANNA_PLATEAU 36
#define MESA 37
#define MESA_PLATEAU_FOREST 38
#define MESA_PLATEAU 39

#define SUNFLOWER_PLAINS 129
#define DESERT_MOUNTAINS 130
#define EXTREME_HILLS_MOUNTAINS 131
#define FLOWER_FOREST 132
#define TAIGA_MOUNTAINS 133
#define SWAMPLAND_MOUNTAINS 134

#define ICE_PLAINS_SPIKES 140

#define JUNGLE_MOUNTAINS 149

#define JUNGLE_EDGE_MOUNTAINS 151

#define BIRCH_FOREST_MOUNTAINS 155
#define BIRCH_FOREST_HILLS_MOUNTAINS 156
#define ROOFED_FOREST_MOUNTAINS 157
#define COLD_TAIGA_MOUNTAINS 158

#define MEGA_SPRUCE_TAIGA 160
#define MEGA_SPRUCE_TAIGA_HILLS 161
#define EXTREME_HILLS_PLUS_MOUNTAINS 162
#define SAVANNA_MOUNTAINS 163
#define SAVANNA_PLATEAU_MOUNTAINS 164
#define MESA_BRYCE 165
#define MESA_PLATEAU_FOREST_MOUNTAINS 166
#define MESA_PLATEAU_MOUNTAINS 167

// BlockIds

#define AIR_BLOCK           MinecraftBlock(0, 0)
#define GRANITE             MinecraftBlock(1, 1)
#define DIORITE             MinecraftBlock(1, 3)
#define ANDESITE            MinecraftBlock(1, 5)
#define GOLD_ORE            MinecraftBlock(14, 0)
#define IRON_ORE            MinecraftBlock(15, 0)
#define COAL_ORE            MinecraftBlock(16, 0)
#define REDSTONE_ORE        MinecraftBlock(73, 0)
#define DIAMOND_ORE         MinecraftBlock(56, 0)
#define LAPIS_LAZULI_ORE    MinecraftBlock(21, 0)
#define DIRT                MinecraftBlock(3, 0)
#define STILL_WATER         MinecraftBlock(9, 0)
#define STILL_LAVA          MinecraftBlock(11, 0)
#define GRAVEL              MinecraftBlock(13, 0)
#define ICE                 MinecraftBlock(79, 0)
#define MYCELIUM            MinecraftBlock(110, 0)
#define GRASS               MinecraftBlock(2, 0)

// Block logic -- This is a hack to "avoid making classes that extends Flowable"
// TODO: I think we could use ">" and "<" operators

#define IS_FLOWABLE(id)   \
(id == 6 || id == 27 || id == 28 || id == 30 || id == 31 || id == 32 || id == 37 || id == 38 \
|| id == 39 || id == 40 || id == 50 || id == 51 || id == 55 || id == 59 || id == 66 || id == 69 \
|| id == 76 || id == 75 || id == 77 || id == 78 || id == 83 || id == 93 || id == 94 || id == 104\
|| id == 105 || id == 106 || id == 111 || id == 115 || id == 126 || id == 131 || id == 132 || id == 140 \
|| id == 141 || id == 142 || id == 143 || id == 144 || id == 149 || id == 150 || id == 171 || id == 175 \
|| id == 199 || id == 202 || id == 204 || id == 208 || id == 239 || id == 244 || id == 395 || id == 396 \
|| id == 397 || id == 398 || id == 399 || id == 419)

#define GET_LIGHT_LEVEL(id)     \
((id == 10 || id == 11 || id == 51 || id == 89 || id == 138 || id == 169 || id == 463) ? 15 :                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             \
((id == 39 || id == 122) ? 1 :  \
((id == 50 || id == 202 || id == 204 || id == 208 || id == 239) ? 14 :                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    \
((id == 76 || id == 130) ? 7 : ((id == 90) ? 11 : ((id == 411) ? 6 : 0))))))

#define IS_TRANSPARENT(id) \
(id == 0 || id == 6 || id == 8 || id == 9 || id == 10 || id == 11 || id == 18 || id == 20 || id == 26 \
|| id == 27 || id == 28 || id == 30 || id == 31 || id == 32 || id == 37 || id == 38 || id == 39 || id == 40 \
|| id == 43 || id == 44 || id == 50 || id == 51 || id == 52 || id == 53 || id == 54 || id == 55 || id == 59 \
|| id == 60 || id == 63 || id == 64 || id == 65 || id == 66 || id == 67 || id == 68 || id == 69 || id == 70 \
|| id == 71 || id == 72 || id == 76 || id == 75 || id == 77 || id == 78 || id == 79 || id == 81 || id == 83 \
|| id == 85 || id == 89 || id == 90 || id == 92 || id == 93 || id == 94 || id == 95 || id == 96 || id == 101\
|| id == 102 || id == 103 || id == 104 || id == 105 || id == 106 || id == 107 || id == 108 || id == 109 || id == 111 \
|| id == 113 || id == 114 || id == 115 || id == 116 || id == 117 || id == 122 || id == 126 || id == 127 || id == 128 \
|| id == 130 || id == 131 || id == 132 || id == 134 || id == 135 || id == 136 || id == 138 || id == 139 || id == 140 \
|| id == 141 || id == 142 || id == 143 || id == 144 || id == 145 || id == 146 || id == 147 || id == 148 || id == 149 \
|| id == 150 || id == 151 || id == 154 || id == 156 || id == 157 || id == 158 || id == 160 || id == 161 || id == 163 \
|| id == 164 || id == 167 || id == 169 || id == 171 || id == 175 || id == 176 || id == 177 || id == 178 || id == 180 \
|| id == 181 || id == 182 || id == 183 || id == 184 || id == 185 || id == 186 || id == 187 || id == 190 || id == 191 \
|| id == 192 || id == 193 || id == 194 || id == 195 || id == 196 || id == 197 || id == 198 || id == 199 || id == 202 \
|| id == 203 || id == 204 || id == 207 || id == 208 || id == 239 || id == 241 || id == 244 || id == 253 || id == 254 \
|| id == 257 || id == 258 || id == 259 || id == 386 || id == 388 || id == 389 || id == 390 || id == 391 || id == 392 \
|| id == 395 || id == 396 || id == 397 || id == 398 || id == 399 || id == 400 || id == 401 || id == 402 || id == 403 \
|| id == 404 || id == 405 || id == 406 || id == 407 || id == 408 || id == 409 || id == 411 || id == 416 || id == 417 \
|| id == 418 || id == 419 || id == 421 || id == 422 || id == 423 || id == 424 || id == 425 || id == 426 || id == 427 \
|| id == 428 || id == 429 || id == 430 || id == 431 || id == 432 || id == 433 || id == 434 || id == 435 || id == 436 \
|| id == 437 || id == 439 || id == 440 || id == 441 || id == 442 || id == 443 || id == 444 || id == 445 || id == 446 \
|| id == 447 || id == 448 || id == 463)

#define IS_LIQUID(id) (id == 8 || id == 9 || id == 10 || id == 11)

// Should we check meta?
#define IS_SOLID(id) \
(id == 1 || id == 2 || id == 3 || id == 4 || id == 5 || id == 7 || id == 12 || id == 13 || id == 14 \
|| id == 15 || id == 16 || id == 17 || id == 467 || id == 18 || id == 19 || id == 20 || id == 21 || id == 22 \
|| id == 24 || id == 25 || id == 26 || id == 35 || id == 36 || id == 41 || id == 42 || id == 43 || id == 44  \
|| id == 45 || id == 46 || id == 47 || id == 48 || id == 49 || id == 52 || id == 53 || id == 54 || id == 56  \
|| id == 57 || id == 58 || id == 60 || id == 61 || id == 62 || id == 67 || id == 73 || id == 74 || id == 79  \
|| id == 80 || id == 81 || id == 82 || id == 84 || id == 85 || id == 86 || id == 87 || id == 88 || id == 89  \
|| id == 91 || id == 92 || id == 95 || id == 96 || id == 97 || id == 98 || id == 99 || id == 100 || id == 101\
|| id == 102 || id == 103 || id == 107 || id == 108 || id == 109 || id == 110 || id == 112 || id == 113 || id == 114 \
|| id == 116 || id == 117 || id == 120 || id == 121 || id == 122 || id == 123 || id == 124 || id == 127 || id == 128 \
|| id == 129 || id == 130 || id == 133 || id == 134 || id == 135 || id == 136 || id == 138 || id == 139 || id == 145 \
|| id == 146 || id == 151 || id == 152 || id == 153 || id == 154 || id == 155 || id == 156 || id == 157 || id == 158 \
|| id == 159 || id == 160 || id == 161 || id == 162 || id == 163 || id == 164 || id == 167 || id == 168 || id == 169 \
|| id == 170 || id == 171 || id == 172 || id == 173 || id == 174 || id == 178 || id == 179 || id == 180 || id == 181 \
|| id == 182 || id == 183 || id == 184 || id == 185 || id == 186 || id == 187 || id == 190 || id == 191 || id == 192 \
|| id == 198 || id == 201 || id == 203 || id == 206 || id == 207 || id == 208 || id == 213 || id == 214 || id == 215 \
|| id == 216 || id == 219 || id == 220 || id == 221 || id == 222 || id == 223 || id == 224 || id == 225 || id == 226 \
|| id == 227 || id == 228 || id == 229 || id == 231 || id == 232 || id == 233 || id == 234 || id == 235 || id == 236 \
|| id == 237 || id == 238 || id == 241 || id == 243 || id == 245 || id == 246 || id == 247 || id == 248 || id == 249 \
|| id == 253 || id == 254 || id == 255 || id == 257 || id == 258 || id == 259 || id == 260 || id == 261 || id == 262 \
|| id == 263 || id == 264 || id == 265 || id == 266 || id == 267 || id == 268 || id == 269 || id == 270 || id == 271 \
|| id == 272 || id == 273 || id == 274 || id == 275 || id == 276 || id == 277 || id == 278 || id == 279 || id == 280 \
|| id == 281 || id == 282 || id == 283 || id == 284 || id == 285 || id == 286 || id == 287 || id == 288 || id == 289 \
|| id == 290 || id == 291 || id == 292 || id == 293 || id == 294 || id == 295 || id == 296 || id == 297 || id == 298 \
|| id == 299 || id == 300 || id == 301 || id == 302 || id == 303 || id == 304 || id == 305 || id == 306 || id == 307 \
|| id == 308 || id == 309 || id == 310 || id == 311 || id == 312 || id == 313 || id == 314 || id == 315 || id == 316 \
|| id == 317 || id == 318 || id == 319 || id == 320 || id == 321 || id == 322 || id == 323 || id == 324 || id == 325 \
|| id == 326 || id == 327 || id == 328 || id == 329 || id == 330 || id == 331 || id == 332 || id == 333 || id == 334 \
|| id == 335 || id == 336 || id == 337 || id == 338 || id == 339 || id == 340 || id == 341 || id == 342 || id == 343 \
|| id == 344 || id == 345 || id == 346 || id == 347 || id == 348 || id == 349 || id == 350 || id == 351 || id == 352 \
|| id == 353 || id == 354 || id == 355 || id == 356 || id == 357 || id == 358 || id == 359 || id == 360 || id == 361 \
|| id == 362 || id == 363 || id == 364 || id == 365 || id == 366 || id == 367 || id == 368 || id == 369 || id == 370 \
|| id == 371 || id == 372 || id == 373 || id == 374 || id == 375 || id == 376 || id == 377 || id == 378 || id == 379 \
|| id == 380 || id == 381 || id == 382 || id == 383 || id == 384 || id == 387 || id == 394 || id == 400 || id == 401 \
|| id == 402 || id == 403 || id == 404 || id == 410 || id == 416 || id == 417 || id == 418 || id == 421 || id == 422 \
|| id == 423 || id == 424 || id == 425 || id == 426 || id == 427 || id == 428 || id == 429 || id == 430 || id == 431 \
|| id == 432 || id == 433 || id == 434 || id == 435 || id == 438 || id == 439 || id == 440 || id == 458 || id == 459 \
|| id == 463)

#endif //EXT_NOISE_CONSTANTS_H