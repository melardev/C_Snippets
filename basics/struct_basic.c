
#include "basics_defs.h"
#include <stdio.h>

struct Player {
    char username[256];
    double x_pos;
    double y_pos;
    double health;
};

void struct_basic() {
    struct Player melardev = {"Melardev", 24.5, 10.0, 10};
    printf("Player username: %s\nPosition(%.1f,%.1f)\n", melardev.username, melardev.x_pos, melardev.y_pos);
}