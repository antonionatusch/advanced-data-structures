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

  struct TreeNode* r = new TreeNode;
  struct TreeNode* init_left = new TreeNode;
  struct TreeNode* init_right = new TreeNode;

  r->data = 1;
  init_left->data = 2;
  init_right->data = 3;

  auto bst = new BinaryTree(r, init_left, init_right);
  std::cout << "PreorderTraversal: \n";
  bst->PreorderTraversal(r);
  std::cout << "\nInorderTraversal: \n";
  bst->InorderTraversal(r);
  std::cout << "\nPostorderTraversal: \n";
  bst->PostorderTraversal(r);
  std::cout<<"\n";


  return 0;
}
