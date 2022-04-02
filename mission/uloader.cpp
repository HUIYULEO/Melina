#include <sys/time.h>
#include <cstdlib>

#include "uloader.h"
#include "umission.h"
#include "utime.h"
#include "ulibpose2pose.h"


ULoader::~ULoader()
{
    printf("Loader class destructor")
}

Uloader::ULoader(){
    lineCount = 0;
}

void ULoader::loadMission(string mission_name, char * lines, int * linecount){
    ifstream read_file;
    read_file.open(mission_name, ios::binary);
    string line = "";
    int i = 0;
    while(getline(read_file, line))
    {
//    cout<<"line:"<<line<<endl;
    strcpy(lineBuffer[i], line.c_str());
    lines[i] = lineBuffer[i];
    linecount++;
    i++;
    }
    cout << "line1:" << lines[0] << endl;
    return 0;
}