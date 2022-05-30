void sortInsert(stack<int> &stack , int n){
   if(stack.empty() || (!stack.empty() && stack.top() < n)){
      stack.push(n);
      return ;
    }
// agar nhi mila usse chota element toh bhi pop,  mil gya toh bhi pop hoga 
// aur fir se loop chalega 
   int num = stack.top();
   stack.pop();
   // recursive call
// 
   sortInsert(stack , n);
   stack.push(num);
}
void sortStack(stack<int> &stack)
{
// Write your code here
   if(stack.empty() ){
        return ;
    }
   int num = stack.top();
   stack.pop();
   sortStack(stack);
   sortInsert(stack , num);
}
