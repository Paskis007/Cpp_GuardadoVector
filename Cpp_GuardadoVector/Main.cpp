#include <iostream>
#include <stdio.h>
#include <fstream>
#include <sstream>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    std::cout << "Hello, World!" << std::endl;
    //std::cin.ignore();
    int size = 1024;
    std::vector<int> a(size);
    
    

    
    
    
    char buf[15];
    


    for (int i = 0; i < 15; i++)
    {
        snprintf(buf, sizeof(buf), "File_%04i.txt", i);
        FILE* pFile;
        pFile = fopen(buf, "wb");
        for (unsigned long long j = 0; j < 1024; ++j) {
            //Some calculations to fill a[]
            a[j] = j + i * 2;

        }
        fwrite(&a[1], sizeof(int), 3, pFile);
        fclose(pFile);
    }
    
    
    return 0;
    return 0;
}