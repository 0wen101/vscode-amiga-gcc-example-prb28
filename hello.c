#include <proto/exec.h>
#include <proto/dos.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, void *argv[])
{
    struct Library *SysBase;
    struct Library *DOSBase;

    SysBase = *((struct Library **)4UL);
    DOSBase = OpenLibrary("dos.library", 0);
    char greeting[] = "Hello!\n";

    if (DOSBase)
    {
        //c standard library:
        printf(greeting);
        fflush(stdout); // Force the output to be printed
        sleep(4);
        
        //or amiga dos.library:
        Write(Output(), greeting, 13);
        CloseLibrary(DOSBase);
    }

    return (0);
}