#include <iostream>
#include <stack>
using namespace std;

int priority(char ch)
{
    if(ch=='^')
        return 3;
    if(ch=='*' || ch=='/')
        return 2;
    if(ch=='+' || ch=='-')
        return 1;
    return 0;
}

// infix to post fix 

int main(){
    string s;
    cout<<"enter the infinix experation";
    cin>>s;
    stack<char>st;
    string ans="";
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        // operand
        if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            ans=ans+ch;

        }
        else if(ch=='('){
            st.push(ch);

        }
        else if(ch==')'){
            while(!st.empty()&& st.top()!='('){
                ans=ans+st.top();
                st.pop();
            }
            st.pop();//removing '('
        }
        else{
            while(!st.empty()&& priority(st.top())>=priority(ch)){
                ans=ans+st.top();
                st.pop();
            }
            st.push(ch);
        }

    }
    // poping remaining operator
    while(!st.empty()){
        ans=ans+st.top();
        st.pop();
    }
    cout<<"infix to postfix will be"<<ans<<endl;
    return 0;
}