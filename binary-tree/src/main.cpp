#include <iostream>

struct TreeNode {
  int data;
  TreeNode *left;
  TreeNode *right;
};

class BinaryTree {
public:
  BinaryTree() = default;
  ~BinaryTree() = default;

  BinaryTree(TreeNode *r) {
    this->root = r;
    this->root->right = this->root->left = nullptr;
  }

  BinaryTree(TreeNode *r, TreeNode *new_left, TreeNode *new_right) {
    this->root = r;
    this->root->left = new_left;
    this->root->right = new_right;
  }



private:
  TreeNode *root;
};

int main(int argc, char *argv[]) {

  std::cout << "Hello World!" << std::endl;

  return 0;
}
