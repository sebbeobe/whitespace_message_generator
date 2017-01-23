f = open('whitespace_code_file', 'w')
message = raw_input("Write your message here: \n")
code = ''
for char in message:
	code += '   '
	for num in bin(ord(char))[2:]:
		if num=='1':
			code += '\t'
		elif num=='0':
			code += ' '
	code += '\n'
	code += '\t\n  '
code += '\n\n\n'
f.write(code)
print code
