// map.h

#include <stdint.h>

#define MAX_BLOCKS 10000

typedef struct {
    uint32_t key;
    int value;
} map_entry;

typedef struct {
    map_entry entries[MAX_BLOCKS];
    size_t size;
} map;

typedef struct {
    uint32_t items[MAX_BLOCKS];
    size_t size;
} vector;

extern map bb_map;

// 声明函数
void vector_push_back(vector* v, uint32_t item);
void map_insert(map* m, uint32_t key, int value);
int map_find(map* m, uint32_t key);
