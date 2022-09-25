#include<iostream>
using namespace std;
class Stack
{
    private:
        char arr[1000];
        int top;
    public:
        Stack()
        {
            top=-1;
        }
        bool isempty()
        {
            if(top==-1)
            {
                return true;
            }
            else return false;
        }
        bool push(char x)
        {
            if(top>=1000)
            {
                cout<<"Stack overflow"<<endl;
                return false;
            }
            top++;
            arr[top]=x;
            return true;
        }
        char pop()
        {
            if(top==-1)
            {
                cout<<"stack is empty"<<endl;
                return 0;
            }
            char temp=arr[top];
            top--;
            return temp;
        }
        char peek()
        {
            if(top==-1)
            {
                cout<<"stack is empty"<<endl;
                return 0;
            }
            char temp=arr[top];
            return temp;
        }
};
bool isValid(string &str) 
{
    Stack st;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.isempty()) return false;
            if(str[i]==')'&& st.peek()=='('){
                st.pop();
            }
            else if(str[i]=='}'&& st.peek()=='{'){
                st.pop();
            }
            else if(str[i]==']'&& st.peek()=='['){
                st.pop();
            }
            else return false;
        }
    }
    return st.isempty();
}
int main() {
    string str;
    cin>>str;
    if(isValid(str))
    {
        cout<<"String"<<" "<<str<<" "<<"is Balanced";
    }
    else{
        cout<<"String"<<" "<<str<<" "<<"is not Balanced";
    }
    return 0;
}