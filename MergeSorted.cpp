#include<bits/stdc++.h>
void print_vec(const std::vector<int> &vec)
{
    std::cout << "Vector: ";
    for (int elem : vec)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

std::vector<int> merge_sorted(const std::vector<int> &vec1, const std::vector<int> &vec2)
{
    //write the function here
        std::vector<int> merged;
    int i = 0, j = 0;
    while (i < vec1.size() && j < vec2.size()) {
        if (vec1[i] < vec2[j]) {
            merged.push_back(vec1[i]);
            i++;
        }
        else {
            merged.push_back(vec2[j]);
            j++;
        }
    }
    while (i < vec1.size()) {
        merged.push_back(vec1[i]);
        i++;
    }
    while (j < vec2.size()) {
        merged.push_back(vec2[j]);
        j++;
    }
    return merged;
}

int main()
{
    std::vector<int> vec1 = {1, 3, 5, 7, 9};
    std::vector<int> vec2 = {2, 4, 6, 8, 10};
    std::vector<int> merged = merge_sorted(vec1, vec2);
    return 0;
}
