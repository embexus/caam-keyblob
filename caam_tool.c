#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <stdbool.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <sys/types.h>

#include "caam_keyblob.h"

#define MAX_KEY_LENGTH 	32
#define BLOB_OVERHEAD 	48

#define KEYMOD_LEN      16
#define MAX_KEYBLOB_LEN 65535
#define MAX_RAWKEY_LEN  65487


int main(int argc, char *argv[])
{

	return 0;
}
