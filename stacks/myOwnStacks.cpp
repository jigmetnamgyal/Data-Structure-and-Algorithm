#include <iostream>

class MyStack{
    private:
        int top;
        int arr[5];
    public:
        MyStack(){
            top = -1;
            for(int i = 0; i < 5; i++){
                arr[i] = 0;
            }
        }
        bool isEmpty(){
            if(top == -1)
                return true;
            else
                return false;
        }

        bool isFull(){
            if(top == 4)
                return true;
            else
                return false;
        }

        void push(int value){
            if(isFull()){
                std::cout << "Stack Overflow";
            }else{
                top++;
                arr[top] = value;
            }
        }
        int pop(){
            if(isEmpty()){
                std::cout <<"Stack Underflow";
                return 0;
            }else{
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }
        }
        int count(){
            return (top + 1);
        }
        int peek(int pos){
            if(isEmpty()){
                std::cout << "The stack is empty";
                return 0;
            }else{
                return arr[pos];
            }
        }
        void change(int pos, int val){
            arr[pos] = val;
        }
        void display(){
            for(int i = 4; i >=0; i--){
                std::cout << arr[i] << std::endl;
            }
        }
};

int main(){
    MyStack s1;
    int value, position, options;

    do{
        std::cout << "What operation do you want to perform. Choose 0 to exist" << std::endl; 
        std::cout << "1. Push()" << std::endl;
        std::cout << "2. Pop()" << std::endl;
        std::cout << "3. IsEmpty()" << std::endl;
        std::cout << "4. IsFull()" << std::endl;
        std::cout << "5. Count()" << std::endl;
        std::cout << "6. Peek()" << std::endl;
        std::cout << "7. Display()" << std::endl;
        std::cout << "8. change()" << std::endl;
        std::cout << "9. Clear the screen" << std::endl;
        std::cin >> options;




        switch(options){
            case 0:
                break;
            case 1:
                std::cin >> value;
                s1.push(value);
                break;
            case 2:
                std::cout << "The poped value is: " << s1.pop() << std::endl;
                break;
            case 3:
                if(s1.isEmpty()){
                    std::cout << "The stack is empty";
                    
                }else{
                    std::cout << "The stack is not empty";
                }
                break;
            case 4:
                if(s1.isFull())
                    std::cout << "The stack is full" << std::endl;
                else
                    std::cout << "The stack is not full" << std::endl;
                break;
            case 5:
                std::cout << "The number of element in the stack is " << s1.count() << std::endl;
                break;
            case 6:
                std::cin >> value >> position;
                std::cout << "The element that you are looking for is: " << s1.peek(position) << std::endl;
                break;
            case 7:
                s1.display();
                break;
            case 8:
                std::cin >> position >> value;
                s1.change(position, value);
                break;
            case 9:
                system("clear");
                break;
            default:
                std::cout << "Enter the right option number";
            
        }

    }while(options != 0);
}