  long long getMaxArea(long long arr[], int n)
   {
     
        vector<int> NSR(n);
    stack<int>s1;
     vector<int> NSL(n);
      stack<int>s2;
    for(int i=0,j=n-1;i<n,j>=0;i++,j--){
        while(!s1.empty() && arr[s1.top()]>arr[i]){
            NSR[s1.top()]=i;
            s1.pop();
        }
        s1.push(i);
            
        while(!s2.empty() && arr[s2.top()]>arr[j]){
            NSL[s2.top()]=j;
            s2.pop();
        }
        s2.push(j);
        
    }
      
     while(!s1.empty()){
          NSR[s1.top()]=n;
          s1.pop();
      } 
   
      
     while(!s2.empty()){
          NSL[s2.top()]=-1;
          s2.pop();
      } 
   
      long long maxi=-2;
      for(int i=0;i<n;i++){
          long long area=((NSR[i]-NSL[i]-1)*arr[i]);
          maxi=max(area,maxi);
      }
     return maxi;
    }
    
