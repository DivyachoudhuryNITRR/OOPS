using namespace std;
#include<bits/stdc++.h>
class Calculator{
    private:
    int a,b;
    char ch,op;
    void input(){
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<"Enter operator(+, -, *, /): ";
        cin>>op;
    }
    int add(){
        return a+b;
    }
    int sub(){
        return a-b;
    }
    int mult(){
        return a*b;
    }
    int divd(){
        return a/b;
    }
    public:
    Calculator(){
        ch='y';
    }
    void calc(){
        while(ch=='y'){
            input();
            switch(op){
                case '+':
                cout<<a<<"+"<<b<<"="<<add();
                break;
                case '-':
                cout<<a<<"-"<<b<<"="<<sub();
                break;
                case '*':
                cout<<a<<"*"<<b<<"="<<mult();
                break;
                case '/':
                cout<<a<<"/"<<b<<"="<<divd();
                break;
                default:
                cout<<"Invalid Entry. Try Again"<<endl;

            }
            cout<<"\n\nDo you want  to perform another calculation(y/n) : ";
            cin>>ch;
        }
    }
};
int main(){
    Calculator c;
    c.calc();
    return 0;

}