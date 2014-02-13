#include "getFileSystemsInfo.h"
#include "errno.h"

dfPrintFormatSave *getFileSystemsInfo(void)
{
    dfPrintFormatSave *dpfs = (dfPrintFormatSave*) malloc(sizeof(dfPrintFormatSave));
    // save execution result list of "df -B 1"  
    char stringBuffer[BUFF_SIZE] = {}; // temp buffer for fgets()
    char *pStrtok = NULL;  // pointer of strtok() 
    FILE *fpPopen = NULL; // File pointer of popen();

    fpPopen = getFileExeCommand("df -B 1");
    if (fpPopen == NULL)
        return NULL;

    while (fgets(stringBuffer, BUFF_SIZE, fpPopen)) // read from fpPopen and save it as buffer 
    {
        pStrtok = strtok(stringBuffer, " ");  // split a string with empty space
        strcpy(dpfs->fileSystem[dpfs->listCount].fileSystemName, pStrtok); // string copy
        pStrtok = strtok(NULL, " ");
	strcpy(dpfs->fileSystem[dpfs->listCount].blockSize, pStrtok);
        pStrtok = strtok(NULL, " ");
        strcpy(dpfs->fileSystem[dpfs->listCount].used, pStrtok);
        pStrtok = strtok(NULL, " ");
        strcpy(dpfs->fileSystem[dpfs->listCount].avalable, pStrtok);
        pStrtok = strtok(NULL, " ");
        strcpy(dpfs->fileSystem[dpfs->listCount].usedPercent, pStrtok);
        pStrtok = strtok(NULL, " ");
        strcpy(dpfs->fileSystem[dpfs->listCount].mountOn, pStrtok);                        
        dpfs->listCount++; 
    }		
  
    pclose(fpPopen);
    return dpfs;
}

FILE *getFileExeCommand(char *pCmd)
{
    FILE *fpPopen = NULL; // File pointer of popen();
    fpPopen = popen(pCmd, "r");  // excute a command 
    if (fpPopen == NULL)
    {
        printf("Error: open popen(): %s\n",strerror(errno));
        return NULL;
    }
    return fpPopen;
}


void freeDfPrintFormatSave(dfPrintFormatSave *pFPrintFormatSave)
{
    if (pFPrintFormatSave != NULL)
    {
        free(pFPrintFormatSave); 
        pFPrintFormatSave = NULL;
    }
}


