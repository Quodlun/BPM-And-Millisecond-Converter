#include<iostream>
using namespace std;

int Mode()
{
    printf("Mode select: \n");
    printf("1: BPM to milliseconds.\n");
    printf("2: Exit.\n");
    printf("Please select the mode: ");
}

int main()
{
    int mode;
    float bpm = 0, ms = 0;

    while (Mode())
    {
        cin >> mode;

        if (mode == 0)
        {
            return 0;
        }

        else if (mode == 1)
        {
            bpm = 0;

            while (cin >> bpm);
            {
                printf("BPM: ");

                ms = 0;
                ms = 60.0 / bpm;

                printf("%f ms", ms);
            }
        }

        else
        {
            printf("Mode doesn't exist.\n");
        }
    }

    return 0;
}