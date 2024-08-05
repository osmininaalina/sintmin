struct Node {
    int data;
    Node *next;
    // ... other members and functions
};

int main() {
    Node *current = nullptr;  // Initializing current pointer to nullptr

    // Later in the code, you might allocate memory for a new Node and assign current to point to it
    current = new Node;
    current->data = 42;
    current->next = nullptr;

    // ... rest of the code
}
