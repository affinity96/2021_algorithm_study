#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue <int> q;
    int N; cin>>N;
    for(int n=0; n<N; n++){
        string str;
        cin >> str;
        if(str=="push"){
            int num; cin>>num;
            q.push(num);
        }else if(str=="pop"){
            if(q.empty()){cout<<-1<<"\n";}
            else{cout << q.front()<<"\n";
            q.pop();}
            
        }else if(str=="size"){
            cout << q.size()<<"\n";
        }else if(str=="empty"){
            if(q.empty()){cout<<1<<"\n";}
            else{cout<<0<<"\n";}
        }else if(str=="front"){
            if(q.empty()){cout<<-1<<"\n";}
            else{cout<<q.front()<<"\n";}

        }else{
            if(q.empty()){cout<<-1<<"\n";}
            else{cout<<q.back()<<"\n";}
        }
    }
}