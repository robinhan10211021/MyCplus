#include <iostream>

using namespace std;

void log(const char* message);

int main()
{
        // 计时示例
    timespec startTime;
    timespec endTime;
    
    clock_gettime(CLOCK_REALTIME, &startTime);

    long long sum=0;
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<=100000000;i++)
            sum+=i;
        sum=0;
    }

    std::cout<<sum<<"\n";

    clock_gettime(CLOCK_REALTIME, &endTime);
    
    std::cout << "耗时：" << endTime.tv_sec - startTime.tv_sec << " 秒" << std::endl;
    
}