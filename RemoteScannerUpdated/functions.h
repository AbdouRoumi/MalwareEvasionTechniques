#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include "tlhelp32.h"
#include <Psapi.h>
#include <tchar.h>


// Some macros to help in the process of writing and printing texts 
#define okay(msg, ...) printf("[+]" msg "\n", __VA_ARGS__)
#define info(msg, ...) printf("[+]" msg "\n", __VA_ARGS__)
#define warning(msg, ...) printf("[-]" msg "\n", __VA_ARGS__)
