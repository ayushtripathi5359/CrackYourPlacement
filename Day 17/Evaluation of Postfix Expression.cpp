int evaluatePostfix(string S)
    {
        stack<int> stack;
    
        for (char ch : S) {
            // If the character is a digit, push it onto the stack
            if (isdigit(ch)) {
                stack.push(ch - '0'); // Convert character to integer
            } else {
                // Otherwise, it's an operator, so pop the top two elements
                int val2 = stack.top();
                stack.pop();
                int val1 = stack.top();
                stack.pop();
    
                switch (ch) {
                    case '+':
                        stack.push(val1 + val2);
                        break;
                    case '-':
                        stack.push(val1 - val2);
                        break;
                    case '*':
                        stack.push(val1 * val2);
                        break;
                    case '/':
                        stack.push(val1 / val2);
                        break;
                    
                        return -1;
                }
            }
        }
         return stack.top();
    }
