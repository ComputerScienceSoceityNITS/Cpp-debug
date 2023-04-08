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
    std::vector <int> res;
    for(int i=0;i<vec1.size();i++){
        res.push_back(vec1[i]);
    }
    for(int i=0;i<vec2.size();i++){
        res.push_back(vec2[i]);
    }
    std::sort(res.begin(),res.end());
    return res;
}

int main()
{
    std::vector<int> vec1 = {1, 3, 5, 7, 9};
    std::vector<int> vec2 = {2, 4, 6, 8, 10};
    std::vector<int> merged = merge_sorted(vec1, vec2);
    print_vec(merged);
    return 0;
}
