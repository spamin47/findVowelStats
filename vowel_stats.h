#include <iostream>
using namespace std;
#ifndef VowelStats_H
#define VowelStats_H
#include <vector>

class VowelStats
{
    private:
        vector<char> vChar; 
        char* aChar;
        int a;
        int e;
        int i;
        int o;
        int u;

    public:
        VowelStats();
        VowelStats(string value);
        void get_vector_stats();
        void get_array_stats();
        void display_stats();

    

    
};

#endif