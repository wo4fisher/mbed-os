/* mbed Microcontroller Library
 * Copyright (c) 2016-2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_STATS_H
#define MBED_STATS_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    uint32_t current_size;      /**< Bytes allocated currently. */
    uint32_t max_size;          /**< Max bytes allocated at a given time. */
    uint32_t total_size;        /**< Cumulative sum of bytes ever allocated. */
    uint32_t alloc_cnt;         /**< Current number of allocations. */
    uint32_t alloc_fail_cnt;    /**< Number of failed allocations. */
} mbed_stats_heap_t;

/**
 * Fill the passed in structure with heap stats.
 */
void mbed_stats_heap_get(mbed_stats_heap_t *stats);

#ifdef __cplusplus
}
#endif

#endif