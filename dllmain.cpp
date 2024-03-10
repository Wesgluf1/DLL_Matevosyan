// dllmain.cpp : Определяет точку входа для приложения DLL.
#include "pch.h"
#include "iostream"
#include "Header.h"
#include <string.h> 
#pragma warning( disable : 4996)

BOOL APIENTRY DllMain(HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

void __stdcall Fullname(char* my_name) {
    strcpy(my_name, "Matevosyan George Rubenovich! \n");
}

int __stdcall GroupNum() {
    return 591220;
}