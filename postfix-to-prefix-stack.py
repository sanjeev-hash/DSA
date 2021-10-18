# Convert a given postfix expression to prefix notation using Stack.

# Input Description:
# The code should take a string of arbitrary length (postfix notation).

# Output Description:
# Print the corresponding prefix notation form.

# Sample Input :
# 123/-15/6-*
# Sample Output :
# *-1/23-/156

# Solution


def isOperator(x) : 
	if x == "+" or x == "-" or x == "*" or x == "/": 
		return True
	return False
def postToPre(post_exp) : 
	s = [] 
	length = len(post_exp)
	for i in range(length) : 
		if (isOperator(post_exp[i])) :  
			op1 = s[-1] 
			s.pop() 
			op2 = s[-1] 
			s.pop()
			temp = post_exp[i] + op2 + op1; 
			s.append(temp) 
		else : 
			s.append(post_exp[i])
	return s[-1]

post_exp = str(input()) 

print(postToPre(post_exp))