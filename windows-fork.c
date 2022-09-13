#include <stdio.h>
#include <windows.h>

int main(VOID)
{
  STARTUPINFO si;
  PROCESS_INFORMATION pi;

  ZeroMemory(&si, sizeof(si));
  si.cb = sizeof(si);
  ZeroMemory(&pi, sizeof(pi));

  if (!CreateProcess(NULL, "C:\\WINDOWS\\system32\\mspaint.exe", NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
  {
    printf(stderr, "CreateProcess failed\n");
    return -1;
  }

  WaitForSingleObject(pi.hProcess, INFINITE);
  printf("Child Complete\n");
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);
}