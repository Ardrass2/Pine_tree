#include <iostream>

void create_pine_tree(int height, int n_blocks) {
    for (int i = 0; i < n_blocks; ++i) {
        for (int j = height + i; j > 0; --j) {
            if (i == 0) {
                for (int k = 0; k < j + n_blocks; ++k) {
                    std::cout << ' ';
                }
                for (int m = 0; m < (height + i - j) * 2 + 1; ++m) {
                    std::cout << '*';
                }
            }
            else {
                for (int k = 0; k < j + n_blocks - 1 - i; ++k) {
                    std::cout << ' ';
                }
                for (int m = 0; m < (height + i - j) * 2 + 3; ++m) {
                    std::cout << '*';
                }
            }
            std::cout << std::endl;
        }
    }
}

int main() {
    int height;
    int n_blocks;
    std::cout << "Input hieght of first level" << std::endl;
    std::cin >> height;
    std::cout << "Input number of blocks" << std::endl;
    std::cin >> n_blocks;
    create_pine_tree(height, n_blocks);
    return 0;
}
