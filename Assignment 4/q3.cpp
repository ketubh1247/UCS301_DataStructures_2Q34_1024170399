#include<iostream>
#include<queue>
using namespace std;

void display(queue<int> q){
  cout<<"Queue from front to back : "<<endl;
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }
  cout<<endl;
}

int main(){
  queue<int> q;
  int n;
  cout<<"Enter number of elements in queue : ";
  cin>>n;
  cout<<"Enter elements in queue one by one "<<endl;
  int x;
  for(int i=1; i<=n; i++){
    cin>>x;
    q.push(x);
  }
  display(q);
  queue<int> firstHalf;
  for(int i=0; i<n/2; i++){
    firstHalf.push(q.front());
    q.pop();
  }
  
  queue<int> result;
  while(!firstHalf.empty()){
    result.push(firstHalf.front());
    firstHalf.pop();
    
    result.push(q.front());
    q.pop();
  }
  
  q = result;
  display(q);
  return 0;
}