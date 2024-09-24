#include <iostream>
#include <vector>
#include <cmath>

// Trie Node structure
struct TrieNode {
    TrieNode* children[2];  // A binary trie has two children (0 or 1)
    
    TrieNode() {
        children[0] = children[1] = nullptr;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    // Function to insert a number in binary form into the trie
    void insert(int num) {
        TrieNode* node = root;
        for (int i = 31; i >= 0; i--) {  // 32-bit integer
            int bit = (num >> i) & 1;    // Extract the i-th bit
            if (!node->children[bit]) {
                node->children[bit] = new TrieNode();
            }
            node = node->children[bit];
        }
    }

    // Function to find the maximum XOR for a given number
    int getMaxXOR(int num) {
        TrieNode* node = root;
        int maxXOR = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;    // Extract the i-th bit
            int oppositeBit = 1 - bit;   // Try to find the opposite bit for maximizing XOR
            if (node->children[oppositeBit]) {
                maxXOR = (maxXOR << 1) | 1;  // If opposite bit exists, set this bit to 1
                node = node->children[oppositeBit];
            } else {
                maxXOR = (maxXOR << 1);  // If opposite bit doesn't exist, keep this bit 0
                node = node->children[bit];
            }
        }
        return maxXOR;
    }
};

// Function to find the maximum XOR of two elements in the array
int findMaximumXOR(const std::vector<int>& nums) {
    Trie trie;
    int maxXOR = 0;

    // Insert the first number into the trie
    trie.insert(nums[0]);

    // For each subsequent number, calculate the maximum XOR and insert it into the trie
    for (int i = 1; i < nums.size(); i++) {
        maxXOR = std::max(maxXOR, trie.getMaxXOR(nums[i]));
        trie.insert(nums[i]);
    }

    return maxXOR;
}

int main() {
    int n;
    std::cin >> n;  // Input size of array
    std::vector<int> arr(n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Find and output the maximum XOR of any two elements
    int result = findMaximumXOR(arr);
    std::cout << result << std::endl;

    return 0;
}
