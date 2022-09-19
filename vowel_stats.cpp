#include "vowel_stats.h"
#include <chrono>
#include <ctime>
#include <thread>
using namespace std;
using namespace chrono;
VowelStats::VowelStats(string value)
{
    aChar = new char[value.size()];
    for(int i = 0;i<value.size();i++){//push all characters into vector and array
        vChar.push_back(value.at(i));
        aChar[i] = value.at(i);
    }
}

VowelStats::VowelStats(){
    string value = "aabbccddeeffxxyyzzabcdefghijklmnopqrstuvwxyz";
    aChar = new char[value.size()];
    for(int i = 0;i<value.size();i++){ //push all characters into vector and array
        vChar.push_back(value.at(i));
        aChar[i] = value.at(i);
    }
}

void VowelStats::get_vector_stats(){
    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;

    time_point<system_clock> startTime = system_clock::now(); //track elapse time of process
    for(int i = 0;i<vChar.size();i++){
        switch (vChar.at(i)) //if vowel detected vector of characters, increment the count
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    }

    time_point<system_clock> endTime = system_clock::now();
    double time_ms = duration_cast<milliseconds>(endTime-startTime).count();
    double timeInSeconds = time_ms/1000.0;
    cout<<"a:"<<a<<"\ne:"<<e<<"\ni:"<<i<<"\no:"<<"\nu:"<<u<<endl;
    cout<<"Elapsed time => milliseconds: "<<time_ms<<" , in seconds: "<<timeInSeconds<<endl;
};

void VowelStats::get_array_stats(){
    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;

    time_point<system_clock> startTime = system_clock::now(); //track elapse time of process

    for(int i = 0;i<vChar.size();i++){
        switch (vChar[i]) //if vowel detected in array of characters, increment the count
        {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        }
    }

    time_point<system_clock> endTime = system_clock::now();
    double time_ms = duration_cast<milliseconds>(endTime-startTime).count();
    double timeInSeconds = time_ms/1000.0;
    cout<<"a:"<<a<<"\ne:"<<e<<"\ni:"<<i<<"\no:"<<"\nu:"<<u<<endl;
    cout<<"Elapsed time => milliseconds: "<<time_ms<<" , in seconds: "<<timeInSeconds<<endl;
};

void VowelStats::display_stats(){
    cout<<"[Vowel Statistic for the Array]"<<endl;  
    get_array_stats();

    cout<<"[Vowel Statistic for the Vector]"<<endl; 
    get_vector_stats();
};