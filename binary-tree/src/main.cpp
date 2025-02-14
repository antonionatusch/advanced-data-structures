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

  void PreorderTraversal(TreeNode *root) {
    if (!root)
      return;
    std::cout << root->data << " ";
    PreorderTraversal(root->left);
    PreorderTraversal(root->right);
  }

  void InorderTraversal(TreeNode *root) {
    if (!root)
      return;

    InorderTraversal(root->left);
    std::cout << root->data << " ";
    InorderTraversal(root->right);
  }

  void PostorderTraversal(TreeNode* root) {
    if (!root)
      return;
    PostorderTraversal(root->left);
    PostorderTraversal(root->left);
    std::cout<< root->data << " ";
  }

private:
  TreeNode *root;
};

int main(int argc, char *argv[]) {

  std::cout << "Hello World!" << std::endl;

  return 0;
}
