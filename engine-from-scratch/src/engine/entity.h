#pragma once

#include <stdbool.h>
#include <linmath.h>
#include "physics.h"
#include "types.h"

typedef struct entity {
        usize body_id;
        bool is_active;
} Entity;

void entity_init(void);
usize entity_create(vec2 position, vec2 size, vec2 velocity, u8 collision_layer, u8 collision_mask, On_Hit on_hit, On_Hit_Static on_hit_static);
Entity *entity_get(usize id);
usize entity_count();