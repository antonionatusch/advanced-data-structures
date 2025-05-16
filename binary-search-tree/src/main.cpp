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

    if (r->data == value) {
      return r;
    }

    if (r->data > value) {
      r->left = Insert(r->left, value);
    } else if (r->data < value) {
      r->right = Insert(r->right, value);
    } else {
      std::cout << "Duplicate value: " << value << std::endl;

      return r;
    }
    return r;
  }

  void InOrderTraversal(TreeNode *r) {
    if (!r)
      return;
    InOrderTraversal(r->left);
    std::cout << r->data << " ";
    InOrderTraversal(r->right);
  }

private:
  TreeNode *root;
};

int main(int argc, char *argv[]) {
  TreeNode* root = new TreeNode{30};
  auto bst = new BinarySearchTree();
  bst->Insert(root, 50);
  bst->Insert(root, 80);
  bst->Insert(root, 60);
  bst->InOrderTraversal(root);

  return 0;
}
