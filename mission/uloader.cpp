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
    cout<<"loader construct"<<endl;
}

void ULoader::loadMission(string mission_name, char * lines, char lineBuffer, int * lineCount){
    ifstream read_file;
    read_file.open(mission_name, ios::binary);
    string line = "";
    lineCount = 0;
    int i = 0;
    while(getline(read_file, line))
    {
        //    cout<<"line:"<<line<<endl;
        strcpy(lineBuffer[i], line.c_str());
        lines[i] = lineBuffer[i];
        lineCount++;
        i++;
    }
    cout << "line1:" << lines[0] << endl;
    return 0;
}