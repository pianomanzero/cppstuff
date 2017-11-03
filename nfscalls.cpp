/// testing to see if we can create a c++ vers of nfscalls.c
//

#include <iostream>
#include <ctime>



using namespace std;

int main (int argc, char *argv[]){

	// set up our struct for fcntl stuff
        struct flock fl;
	fl.l_type   = F_WRLCK;  /* F_RDLCK, F_WRLCK, F_UNLCK    */
        fl.l_whence = SEEK_SET; /* SEEK_SET, SEEK_CUR, SEEK_END */
        fl.l_start  = 0;        /* Offset from l_whence         */
        fl.l_len    = 0;        /* length, 0 = to EOF           */
        fl.l_pid    = getpid(); /* our PID                      */




return 0;
}
