/**
 * @file mkhtml.c
 * 
 * @brief the main application file of mkhtml
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 24/01/2023
*/

#include "../mkgen/mkgen.h"

int main(int argc, char *argv[])
{
    if (argVerify(argc, argv[1]) && structureVerify())
    {
        if (strcmp(argv[1], "-G") == 0 || strcmp(argv[1], "--generate") == 0)
        {
            htmlGen(argv[2]);
        }
        else if (strcmp(argv[1], "-k") == 0 || strcmp(argv[1], "--key") == 0)
        {
            fprintf(stdout, "api key menu\n");
        }
        else if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "--css") == 0)
        {
            fprintf(stdout, "stylesheet menu\n");
        }
        else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
        {
            fprintf(stdout, "help menu\n");
        }
        else if (strcmp(argv[1], "-g") == 0 || strcmp(argv[1], "--github") == 0)
        {
            fprintf(stdout, "github menu\n");
        }
        else if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0)
        {
            fprintf(stdout, "version menu\n");
        }
        else if (strcmp(argv[1], "-s") == 0 || strcmp(argv[1], "--settings") == 0)
        {
            mkSettingsMenu();
        }
        else if (strcmp(argv[1], "-w") == 0 || strcmp(argv[1], "--website") == 0)
        {
            fprintf(stdout, "website output menu\n");
        }
    }

    return 0;
}