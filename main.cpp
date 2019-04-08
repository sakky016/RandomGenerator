#include <iostream>
#include "random.h"
#include<map>

// Repeat count
#define REPEATS 2000

//---------------------------------------------------------------------------------------
// Tester main function
//---------------------------------------------------------------------------------------
int main()
{
    RandomGenerator rn;


    int i = 0;

#if 0
    map<int, int> numMap;
    while (i < REPEATS)
    {
        unsigned int val = rn.generateRandomNumber(50);
        numMap[val]++;
        i++;
    }

    map<int, int>::iterator it = numMap.begin();
    while (it != numMap.end())
    {
        printf("%3d   %5d\n", it->first, it->second);
        it++;
    }
#endif

#if 0
    i = 0;
    cout << endl;
    while (i < REPEATS)
    {
        char *randomString = rn.generateRandomString(6, true, true);
        cout << randomString << endl;
        free(randomString);
        randomString = nullptr;
        i++;
    }
#endif

#if 1
    i = 0;
    cout << endl;
    rn.InitRandomNames();
    while (i < REPEATS)
    {
        string randomName = rn.GetRandomName();
        cout << randomName.c_str() << endl;
        i++;
    }
#endif

    getchar();
    return 0;
}