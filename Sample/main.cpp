#include <stdio.h>

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

int WINAPI wWinMain(HINSTANCE instance, HINSTANCE prevInstance, LPWSTR cmdLine, int showCmd)
{
    printf("Hello, World!\n");
    return 0;
}
