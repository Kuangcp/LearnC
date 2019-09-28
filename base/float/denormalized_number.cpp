#include <iostream>
#include <string>
#include <ctime>
#include <fenv.h>
using namespace std;

// https://blog.csdn.net/j3T9Z7H/article/details/101180649
// https://stackoverflow.com/questions/9314534/why-does-changing-0-1f-to-0-slow-down-performance-by-10x

int loop = 90000000;

void addWithDenormalizedNumber(){
    const float x=1.1;
    const float z=1.123;
    float y=x;
    for(int j=0;j<loop;j++)
    {
        y*=x;
        y/=z;
        y+=0;
        y-=0;
    }
}

void addWithNormalizedNumber(){
    const float x=1.1;
    const float z=1.123;
    float y=x;
    for(int j=0;j<loop;j++)
    {
        y*=x;
        y/=z;
        y+=0.1f;
        y-=0.1f;
    }
}

int main() {
    // fesetenv(FE_DFL_DISABLE_SSE_DENORMS_ENV);
    std::time_t start = std::time(0);
    addWithDenormalizedNumber();
    std::time_t end = std::time(0);
    printf("%d %d %d\n",end,start, end - start);
    
    start = std::time(0);
    addWithNormalizedNumber();
    end = std::time(0);
    printf("%d %d %d\n",end,start, end - start);
    return 0;
}