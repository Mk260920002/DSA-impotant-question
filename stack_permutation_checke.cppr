#include<bits/stdc++.h>


using namespace std;
  

int main(){
   
   
    int a[3]={1,2,3};
    int b[3]={3,1,2};
   int n=3;
      
     
    stack<int> st;
    int j=0;
   for(int i=0;i<=n;i++){
    
      if( !st.empty() && st.top()==b[j]   ){
       while( st.top()==b[j] && (j<n) && !st.empty()){
        
         st.pop();
          j++;
       }
      }
     
      if(i<n){
      st.push(a[i]);
      }
      
    }
  
   
      if(st.empty()){
        cout<<"YES";
      }
      else{
        cout<<"NO it's no possible";
      }
    
   
  
    return 0;
}
