#include<bits/stdc++.h>
using namespace std;
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
    int length1=vec1.size();
    int length2=vec2.size();
    vector<int>ans;
      int i=0,j=0;
    while(i<length1 && j<length2){
        if(vec1[i]<vec2[j]){
            ans.push_back(vec1[i]);
            i++;
        }
        else {
             ans.push_back(vec2[j]);
            j++;
        }
    }

    while(i<length1){
         ans.push_back(vec1[i]);
            i++;
    }

    while(j<length2){
         ans.push_back(vec2[j]);
            j++; 
    }

    return ans;
}

int main()
{
    std::vector<int> vec1 = {1, 3, 5, 7, 9};
    std::vector<int> vec2 = {2, 4, 6, 8, 10};
    std::vector<int> merged = merge_sorted(vec1, vec2);

    print_vec(merged);
    return 0;
}
