#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H

namespace forest {
        template <typename key_t, typename value_t>
        class red_black_tree {
        private:
                struct node {
                        node(key_t key, value_t value) {
                                this->key = key;
                                this->value = value;
                                this->parent = nullptr;
                                this->left = nullptr;
                                this->right = nullptr;
                        }
                        key_t key;
                        value_t value;
                        node *parent;
                        node *left;
                        node *right;
                };
                node *root;
        public:
                red_black_tree() {
                        root = nullptr;
                }
                ~red_black_tree() {

                }
                void pre_order_traversal(node *n) {
                        if (n == nullptr) return;
                        // process the node n
                        in_order_traversal(n->left);
                        in_order_traversal(n->right);
                }
                void in_order_traversal(node *n) {
                        if (n == nullptr) return;
                        in_order_traversal(n->left);
                        // process the node n
                        in_order_traversal(n->right);
                }
                void post_order_traversal(node *n) {
                        if (n == nullptr) return;
                        in_order_traversal(n->left);
                        in_order_traversal(n->right);
                        // process the node n
                }
        };
}

#endif
