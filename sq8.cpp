#include<iostream> // MUNOZ, RAIDEN C. 1CPE-2B
#include<queue>
#include<string>
using namespace std;
int main(){
    queue<string> q; // Change stack to queue
    char ans;
    string value;
    do{
        cout<<"[A] Push Data\n[B] Pop Data\n[C] Show Front\n[D] Show Back\n[E] Show Size\n[F] Quit\nEnter Choice: ";
        cin>>ans;
        cin.ignore(); // clear buffer, like fflush(stdin)
        switch(toupper(ans)){ // accepts both lowercase and uppercase
            case 'A':
                cout<<"\nEnter String: ";
                getline(cin, value); // Reads the whole line
                q.push(value);
                cout<<value<<" is now pushed onto the queue\n"<<endl;
            break;
            case 'B':
                if(!q.empty()){
                    cout<<"\nGoodbye to string: "<<q.front()<<"\n"<<endl;
                    q.pop();}
                else{
                    cout<<"\nQueue is empty!\n"<<endl;}
            break;
            case 'C':
                if(!q.empty()){
                    cout<<"\nThe front element is: "<<q.front()<<"\n"<<endl;}
                else{
                    cout<<"\nQueue is empty!\n"<<endl;}
            break;
            case 'D':
                if(!q.empty()){
                    cout<<"\nThe back element is: "<<q.back()<<"\n"<<endl;}
                else{
                    cout<<"\nQueue is empty!\n"<<endl;}
            break;
            case 'E':
                cout<<"\nThe size of the queue is: "<<q.size()<<"\n"<<endl;
            break;
            case 'F':
                system("clear"); // Clears the screen for dramatic effect lol
                cout<<"Goodbye master!"<<endl;
            break;
            default:
                cout<<"\nInvalid choice: Check your input!\n"<<endl;
            break;}
    }while(toupper(ans)!='F');
    return 0;}