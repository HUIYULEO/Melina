
#ifndef ULOADER_H
#define ULOADER_H

#include <sys/time.h>
#include <cstdlib>
#include "ubridge.h"
#include "ujoy.h"
#include "uplay.h"

class ULoader 
{
public:
    const static int MAX_LINES = 100;
    const static int MAX_LEN = 100;
    const static int missionLineMax = 20;
    /** definition of array with c-strings for the mission snippets */
    char lineBuffer[missionLineMax][MAX_LEN];
    /** an array of pointers to mission lines */
    char * lines[missionLineMax];
public:
    /**
     * @brief Construct a new load Mission object
     */
    ULoader();
    ~ULoader();
    loadMission();
};











#endif
