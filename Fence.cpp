#include<bits/stdc++.h>
using namespace std;

std::vector<int> min_sum_indices(const std::vector<int>& vec, int k) {
    if (vec.size() < k) {
        std::cerr << "Vector size should be greater than or equal to k." << std::endl;
        return {}; // Return an empty vector or handle the error as needed
    }

    int min_sum = std::numeric_limits<int>::max();
    int current_sum = 0;
    int start_index = 0;

    for (int i = 0; i < k; ++i) {
        current_sum += vec[i];
    }

    min_sum = current_sum;

    for (int i = k; i < vec.size(); ++i) {
        current_sum += vec[i] - vec[i - k];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            start_index = i - k + 1;
        }
    }

    std::vector<int> result_indices;
    for (int i = start_index; i < start_index + k; ++i) {
        result_indices.push_back(i);
    }

    return result_indices;
}

int main() {
    // Example usage:
    std::vector<int> vec;// = {1, 2, 6, 1, 1, 7, 1};
    int k,n;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        vec.push_back(j);
    }
    std::vector<int> result = min_sum_indices(vec, k);

   // std::cout << "Indices producing the minimum sum: ";
    for (int index : result) {
        std::cout << index+1 << " ";
        break;
    }
    std::cout << std::endl;

    return 0;
}
