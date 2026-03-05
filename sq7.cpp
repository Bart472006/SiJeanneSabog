#include<iostream> // MUNOZ, RAIDEN C. 1CPE-2B
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<string> s;
    char ans;
    string value;
    do{
        cout<<"[A] Push Data\n[B] Pop Data\n[C] Show Top\n[D] Show Size\n[E] Quit\nEnter Choice: ";
        cin>>ans;
        cin.ignore(); // similar to fflush(stdin) in C, it clears the buffer
        switch(toupper(ans)){ // accepts both lowercase and uppercase
            case 'A':
                cout<<"\nEnter String: ";
                getline(cin, value); // reads the whole line
                s.push(value);
                cout<<value<<" is now pushed onto the stack\n"<<endl;
            break;
            case 'B':
                if(!s.empty()){
                    cout<<"\nGoodbye to string: "<<s.top()<<"\n"<<endl;
                    s.pop();}
                else{
                    cout<<"\nStack is empty!\n"<<endl;}
            break;
            case 'C':
                if(!s.empty()){
                    cout<<"\nThe top element is: "<<s.top()<<"\n"<<endl;}
                else{
                    cout<<"\nStack is empty!\n"<<endl;}
            break;
            case 'D':
                cout<<"\nThe size of the stack is: "<<s.size()<<"\n"<<endl;
            break;
            case 'E':
                system("clear"); // clears the screen for dramatic effect lol
                cout<<"Goodbye master!"<<endl;
            break;
            default:
                cout<<"\nInvalid choice: Check your input!\n"<<endl;
            break;}
    }while(toupper(ans)!='E');
    return 0;}