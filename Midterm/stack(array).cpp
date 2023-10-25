#include <iostream>
using namespace std;
int stack[100];
int n=100;
int top=-1;

void push(int val){
	if(top>n-1){
		cout<<"Stack overflow!"<<endl;
	}
	else{
		top=top+1;
		stack[top]=val;
	}
}

void pop(){
	if(top==-1){
		cout<<"Stack underflow!"<<endl;
	}
	else{
		cout<<"Top of stack:"<<stack[top]<<endl;
		top=top-1;
		stack[top];
	}
}

void display(){
	 if (top<0) {
        cout<<"Stack is empty."<<endl;
    } else {
        cout <<"Stack elements after pop: ";
        for(int i=0; i<=top; i++){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
	
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	pop();
	display();
	
	pop();
	
	return 0;
}
