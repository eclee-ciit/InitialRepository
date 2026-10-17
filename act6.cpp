#include <iostream>
using namespace std;
int main(){
    int cnt=0;
    std::cout <<"1. Right angle pattern"<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        cnt+=1;
        for (int j = 0; j <= i; j++)
        {
            std::cout <<cnt;
        }
        std::cout<<std::endl;
        
    }
    std::cout <<"2. 5x5 star pattern"<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
        
    }
    std::cout <<"3. Identity matrix pattern"<<std::endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i==j)
            {
                std::cout <<"1";
            } else {
                std::cout <<"0";
            }
            
            
        }
        std::cout<<std::endl;
        
    }
    
}