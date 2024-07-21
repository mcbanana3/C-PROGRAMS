#include<stdio.h>
#include<stdlib.h>

struct BST{
    int data;
    struct BST *left;
    struct BST *right;
};

typedef struct BST *tree;

tree insert(tree root, int value){
    tree newNode = (tree)malloc(sizeof(struct BST));
    newNode->data = value;

    if(root == NULL){
        root = newNode;
        newNode->left = newNode->right = NULL;
    }

    else if(value < root->data){
        root->left = insert(root->left, value);
    }

    else{
        root->right = insert(root->right, value);
    }

    return root;
}

tree search(tree root, int value){
    int i = 0;

    if(root == NULL){
        printf("Empty\n");
        return root;
    }

    if(root->data == value){
        printf("Value Found\n");
        return root;
    }

    else if(value < root->data){
        root->left = search(root->left, value);
    }

    else{
        root->right = search(root->right, value);
    }

    if(i == 0){
        printf("Element no Found\n");
        return root;
    }
}

tree delete(tree root, int value){
    
    if(root == NULL){
        printf("Linked List is Empty\n");
        return root;
    }

    else if(root->data > value){
        root->left = delete(root->left, value);
        return root;
    }

    else if(root->data < value){
        root->right = delete(root->right, value);
        return root;
    }

    if(root->left == NULL){
        tree temp = root->right;
        free(root);
        return temp; 
    }

    if(root->right == NULL){
        tree temp = root->left;
        free(root);
        return temp;
    }

    tree succParent = root;
    tree succ = root->right;
    while (succ->left != NULL) {
        succParent = succ;
        succ = succ->left;
    }

    root->data = succ->data;

    if (succParent->left == succ){
        succParent->left = succ->right;
    }

    else{
        succParent->right = succ->right;
    }
    free(succ);
    return root;
}

void findmax(tree root){
    while(root->right != NULL){
        root = root->right;
    }
    printf("The max is : %d\n", root->data);
}

void findmin(tree root){
    while(root->left != NULL){
        root = root->left;
    }
    printf("The Min is : %d\n", root->data);
}

void inorder(tree root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(tree root){
    if(root != NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(tree root){
    if(root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void display(tree root, int choice){
    if(choice == 1){
        inorder(root);
    }

    else if(choice == 2){
        preorder(root);
    }

    else{
        postorder(root);
    }
}

int main(){

    int choice, value;
    tree root = NULL;
    
    while(1){

        printf("Enter your CHOICE (1)Add (2)Delete (3)Display (4)MAX (5)MIN (6)Search (7)Exit : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the Value : ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Enter the value to be Deleted : ");
                scanf("%d", &value);
                root = delete(root ,value);
                break;

            case 3:
                printf("Enter your Choice (1)InOrder (2)PreOrder (3)PostOrder : ");
                scanf("%d", &value);
                display(root, value);
                break;

            case 4:
                findmax(root);
                break;

            case 5:
                findmin(root);
                break;

            case 6:
                printf("Enter the Value : ");
                scanf("%d", &value);
                root = search(root, value);
                break;

            case 7:
                exit(1);
            
            default:
                printf("Enter a Valid Output\n");
                break;
        }
    }

    return 0;
}