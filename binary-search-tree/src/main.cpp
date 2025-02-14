#include <iostream>

struct TreeNode {
  int data;
  TreeNode *left;
  TreeNode *right;
};

class BinarySearchTree {
public:
  BinarySearchTree() = default;
  ~BinarySearchTree() = default;

  BinarySearchTree(TreeNode *r) { this->root = r; }

  TreeNode *Insert(TreeNode *r, int value) {

    if (!r) {
      r = new TreeNode;
      r->data = value;
      return r;
    }

    return r;
  }

private:
  TreeNode *root;
};

int main(int argc, char *argv[]) {

  std::cout << "Hello World\n";

  return 0;
}
