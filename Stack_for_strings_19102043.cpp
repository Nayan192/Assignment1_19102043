#include<bits/stdc++.h>
using namespace std;
class Stack
{
    private:
        string arr[1000];
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
        bool push(string x)
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
        string pop()
        {
            if(top==-1)
            {
                cout<<"stack is empty"<<endl;
                return 0;
            }
            string temp=arr[top];
            top--;
            return temp;
        }
        string peek()
        {
            if(top==-1)
            {
                cout<<"stack is empty"<<endl;
                return 0;
            }
            string temp=arr[top];
            return temp;
        }
};
int main()
{
    return 0;
}