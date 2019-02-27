j = input()
word =""
for i in range(len(j)):
    if j[i]=='G':
        word+="C"
    elif j[i]=='C':
        word+="G"
    elif j[i]=='T':
        word+="A"
    elif j[i]=='A':
        word+="U"
    else:
        word = "Invalid Input"
        break

print(word)
