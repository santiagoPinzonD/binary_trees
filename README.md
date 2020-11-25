# 0x1D. C - Binary trees


# Estructuras de datos
Utilice las siguientes estructuras y tipos de datos para árboles binarios. No olvide incluirlos en su archivo de encabezado.

# Árbol binario básico

    /**
    * struct binary_tree_s - Binary tree node
    *
    * @n: Integer stored in the node
    * @parent: Pointer to the parent node
    * @left: Pointer to the left child node
    * @right: Pointer to the right child node
    */
    struct binary_tree_s
    {
      int n;
      struct binary_tree_s *parent;
      struct binary_tree_s *left;
      struct binary_tree_s *right;
    };

    typedef struct binary_tree_s binary_tree_t;
 
# Árbol de búsqueda binaria
    typedef struct binary_tree_s bst_t;
# Árbol AVL
    typedef struct binary_tree_s avl_t;
# Montón binario máximo
    typedef struct binary_tree_s heap_t;


## Tasks

[0. New node]()

Write a function that creates a binary tree node

[1. Insert left ]()

Write a function that inserts a node as the left-child of another node

[2. Insert right ]()

Write a function that inserts a node as the right-child of another node

[3. Delete ]()

Write a function that deletes an entire binary tree

[4. Is leaf]()

Write a function that checks if a node is a leaf

[5. Is root ]()

Write a function that checks if a given node is a root

[6. Pre-order traversal]()

Write a function that goes through a binary tree using pre-order traversal

[7. In-order traversal ]()

Write a function that goes through a binary tree using in-order traversal

[8. Post-order traversal ]()

Write a function that goes through a binary tree using post-order traversal

[9. Height]()

Write a function that measures the height of a binary tree
