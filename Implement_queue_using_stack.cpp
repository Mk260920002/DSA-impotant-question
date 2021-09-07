void StackQueue :: push(int x)
{
    s2.push(x);
   
  
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{    if(s2.empty()){
    return -1;
}
    while(!s2.empty()){
    s1.push(s2.top());
    s2.pop();
} 
         int t;
        t=s1.top();
       s1.pop();
       while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
       }
       return t;
    
}
