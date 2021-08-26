#include<climits>

//Stack using arrays
template <typename T>
class StacksUsingArrays{
private:
    T* data;
    int nextIndex;
    int capacity;

public:
    StacksUsingArrays()
    {
        data = new T[1];
        nextIndex = 0;
        capacity = 1;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    int size()
    {
        return nextIndex;
    }

    T top()
    {
        if(isEmpty())
        {
            return 0;
        }

        return data[nextIndex-1];
    }

    void push(T tempData)
    {
        if(nextIndex == capacity)
        {
            // cout << "Stack is full!" << endl;
            // return;

            T* newData = new T[2 * capacity];
            for(int i=0; i<capacity; i++)
                newData[i] = data[i] ;

            data = newData;
            capacity *= 2;
        }

        data[nextIndex] = tempData;
        nextIndex++;
    }

    T pop()
    {
        if(isEmpty())
        {
            return 0;
        }

        nextIndex--;
        return data[nextIndex];
    }
};
