#include <sys/time.h>
#include <cstdlib>

#include "uloader.h"
#include "umission.h"
#include "utime.h"
#include "ulibpose2pose.h"


ULoader::~ULoader()
{
    printf("Loader class destructor");
}

ULoader::ULoader(){
    cout<<"loader construct"<<endl;
}

void ULoader::loadMission(string mission_name, char ** lines_copy, char lineBuffer_copy[][100],  int *lineCount)
{
    ifstream read_file;
    read_file.open(mission_name.data(), ios::binary);
    string line = "";
    *lineCount = 0;
    cout << "count11:" << *lineCount << endl;
    int i = 0;
    while(getline(read_file, line))
    {
        //    cout<<"line:"<<line<<endl;
        strcpy(lineBuffer_copy[i], line.c_str());
        cout << "line1:" << lineBuffer_copy[i] << endl;
        lines_copy[i] = lineBuffer_copy[i];
        i++;
    }
    *lineCount = i;
    int x = *lineCount;
    cout << "count11:" << x << endl;
}