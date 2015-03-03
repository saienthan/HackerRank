#include<algorithm>
#include<iostream>
main()
{
    int a[5] = {1,2,3,4,25};
    int c;
    std::cout << "Enter a number:";
    std::cin >> c;
    std::cout << c << std::endl;
    std::cout << *std::max_element(a,a+5) << std::endl;
}
