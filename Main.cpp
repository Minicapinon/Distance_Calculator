#include<iostream>
#include"calculation.cpp"

int main(int argc, char const *argv[])
{
    double x1,x2,y1,y2;

    std::cin>>x1;std::cout<<std::endl;
    std::cin>>x2;std::cout<<std::endl;
    std::cin>>y1;std::cout<<std::endl;
    std::cin>>y2;std::cout<<std::endl;

    double res = calculation::operation(x1,x2,y1,y2);

    std::cout<<res;
    return 0;
}