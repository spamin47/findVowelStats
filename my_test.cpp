#include <iostream>
using namespace std;
#include "vowel_stats.h"

int main(){
    cout<<"test1"<<endl;
    VowelStats test1;
    test1.get_array_stats();
    test1.get_vector_stats();
    test1.display_stats();
    cout<<"\ntest2"<<endl;
    VowelStats test2("Today will be a great day and many more to come!");
    test2.get_array_stats();
    test2.get_vector_stats();
    test2.display_stats();
    cout<<"\ntest3"<<endl;
    VowelStats test3("ooiieeaauuj");
    test3.get_array_stats();
    test3.get_vector_stats();
    test3.display_stats();
    return 0;
}