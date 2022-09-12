//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            qs->push(a);
        }else if(QueryType==2){
            cout<<qs->pop()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        // Your Code

        //Making push costly

        // q2.push(x);

        // while(!q1.empty()){
        //     q2.push(q1.front());
        //     q1.pop();
        // }

        // swap(q1, q2);

        // Not making push costly

        q1.push(x);
}

//Function to pop an element from stack using two queues.
int QueueStack :: pop()
{
        // Your Code
        // if(q1.empty()){
        //     return -1;
        // }

        // int temp  = q1.front();
        // q1.pop();
        // return temp;

        //Making pop costly


        if(q1.empty()){
            return -1;
        }

        int temp;

        while(true){


         temp = q1.front();

        q1.pop();

        if(q1.empty()){
            break;
        }

        q2.push(temp);

        }

        swap(q1, q2);

        return temp;


}
