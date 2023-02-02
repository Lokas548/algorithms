//задача о простых множителях
#include <iostream>

int main()
{
    int x;
    int k, m, l, p;
    std::cin >> x;
    
    for(int i = 3; i < x; i++) {
        p = i;
        k = 0;
        l = 0;
        m = 0;
        while (p % 3 == 0)
        {
            k++;
            p /= 3;
        }
        while (p % 5 == 0)
        {
            l++;
            p /= 5;
        }
        while (p % 7 == 0)
        {
            m++;
            p /= 7;
        }
        if (p == 1)
        {
            std::cout << i << " = 3^" << k << " * 5^" << l << " * 7^" << m << std::endl;
        }
    }
}
