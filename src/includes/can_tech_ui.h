#ifndef CAN_TECH_CAN_TECH_UI_H
#define CAN_TECH_CAN_TECH_UI_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include <ncurses.h>

void can_bus_display();
int get_node_count();
void update_node_count(int nodes);

#endif // CAN_TECH_CAN_TECH_UI_H