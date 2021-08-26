//Queue using LL

template <typename T>
class Node {
   public:
    T data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Queue {
    Node* head;
    Node* tail;
    int size;
public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
	}

	int getSize() {
        return size;
	}

    bool isEmpty() {
        return size==0;
	}

    void enqueue(int data) {
        Node* newNode = new Node(data);
        if(head==NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail=tail->next;
        }
        size++;
	}

    T dequeue() {
        if(size==0)
            return -1;
        Node* temp=head;
        T nodeData = head->data;
        if(size == 1)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
        }
		delete temp;
        size--;
        return nodeData;
    }

    T front() {
        if(isEmpty())
            return -1;

        return head->data;
    }
};
