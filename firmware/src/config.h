/*
 * Controller Config
 * WHowe <github.com/whowechina>
 */

#ifndef CONFIG_H
#define CONFIG_H

#include <stdint.h>
#include <stdbool.h>

#include "board_defs.h"

typedef struct __attribute__((packed)) {
    struct {
        uint32_t key_on;
        uint32_t key_off;
        uint8_t level;
    } color;
    struct {
        uint8_t filter;
        int8_t global;
        uint8_t debounce_touch;
        uint8_t debounce_release;        
        int8_t zones[34];
    } sense;
    struct {
        uint8_t io4 : 4;
        uint8_t nkro : 4;
    } hid;
    struct {
        uint8_t per_button;
        uint8_t per_cab;
    } rgb;
    struct {
        uint8_t buttons[12];
        uint8_t touch[36];
    } alt;
    struct {
        uint8_t mode : 4;
        uint8_t virtual_aic : 4;
    } aime;
    struct {
        uint8_t main_button_active_high : 1;
        uint8_t aux_button_active_high : 1;
        uint8_t unused_bits : 6;
        uint8_t reserved[3];
    } tweak;
    uint8_t reserved[8];
} mai_cfg_t;

typedef struct {
    uint16_t fps[2];
    bool key_stuck;
} mai_runtime_t;

extern mai_cfg_t *mai_cfg;
extern mai_runtime_t mai_runtime;

void config_init();
void config_changed(); // Notify the config has changed
void config_factory_reset(); // Reset the config to factory default

#endif
