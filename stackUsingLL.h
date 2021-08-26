//Stack using LL

template <typename T>
class Node {
   public:
    T data;
    Node *next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack {
    Node* head;
    int size;
   public:
    Stack() {
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    void push(int element) {
        Node* newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }

    T pop() {
		if(isEmpty())
            return 0;
    	Node* temp = head;
        T ans = head->data;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    int top() {
        if(isEmpty())
            return 0;
        return head->data;
    }
};
