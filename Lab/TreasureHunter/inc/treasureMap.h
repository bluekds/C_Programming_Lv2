#pragma once

#define MAX_SIZE 100
#define MAX_DEPTH 10

/**
* You can get the treasure map by calling this function.
* The map (= char* array) holds the start point (memory address) of your adventure.
* The hint means the depth of how much you go into to get the treasure.
* Each entry of the map[] and hints[] indicates a treasure (one character).
*
* @param _map		the map will be return to this parameter. It is a char-pointer (char*) array.
* @param _hints		the hints return to this parameter. It is an integer array.
* @return			the size of treasure (the length of the message)
*/
int getMap(char* _map[], int _hints[]);