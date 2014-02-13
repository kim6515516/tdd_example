#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 1024
#define STR_SIZE 100
#define STRUCT_LIST_SIZE 200

typedef struct  
{
    char fileSystemName[STR_SIZE];
    char blockSize[STR_SIZE];
    char used[STR_SIZE];
    char avalable[STR_SIZE];
    char usedPercent[STR_SIZE];
    char mountOn[STR_SIZE];
} dfPrintFormat; 

typedef struct 
{
    int listCount;  // count of dfPrintFormat list
    dfPrintFormat fileSystem[STRUCT_LIST_SIZE];
} dfPrintFormatSave;

// save result screen of "df -B 1"
dfPrintFormatSave *getFileSystemsInfo(void);

// free pointer dfPrintFormatSave variable
void freeDfPrintFormatSave(dfPrintFormatSave *save);

// get FILE pointer 
FILE *getFileExeCommand(char *pCmd);
