#include <iostream>
#include <vector>


int main() {
    int n, sn;
    std::cout << "Enter vector's size!\n";
    std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Fill the vector:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cin >> vec[i];
    }
    std::cout << "Enter unit to delete:\n";
    std::cin >> sn;
    
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == sn)
        {
            std::swap(vec[i], vec[vec.size() - 1]);
            vec.pop_back();
            i--;
        }
    }
    
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

}
