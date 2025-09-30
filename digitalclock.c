#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
//#include <windows.h>  // Uncomment this line if you are using Windows


int main() {

    time_t rawtime = 0; //jan 1 1970 (Epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while(isRunning){

        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        
        sleep(1);       //if using windows use Sleep(1000);
    }

    return 0;
}