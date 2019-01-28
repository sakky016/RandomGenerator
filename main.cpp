#include <iostream>
#include "random.h"
#include<map>

#define REPEATS 100000

int main()
{
    RandomGenerator rn;

    int i = 0;
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


#if 0
    while (i < REPEATS)
    {
        char *randomString = rn.generateRandomString(6, true, true);
        cout << randomString << endl;
        free(randomString);
        randomString = nullptr;
        i++;
    }
#endif

    getchar();
    return 0;
}