# Submission

statement1 = str(input()) # Visit www.amazon.com for online product purchase.
statement2 = str(input()) # Snapdeal & Meesho also other online product sites.
substring = str(input()) # www.amazon.com
inputWord = str(input())

# Subtask 1:
myList1 = statement1.split()

for index, word in enumerate(myList1):
    # Capitalize the first letter if it is not capital
    if (ord(word[0]) >= 97) and ((ord(word[0])) <= 122):
        myList1[index] = chr(ord(word[0]) - 32) + word[1:] 

    # Check for periods in a word
    for j in range(1, len(word)):
        if word[j - 1] == '.' and ((ord(word[j]) >= 97) and ((ord(word[j])) <= 122)):
            myList1[index] = myList1[index][:j] + chr(ord(word[j]) - 32) + myList1[index][j + 1:]

for word in myList1:
    print(word, end=" ")
    print()

# Subtask 2:
myList1 = statement1.split()
myList2 = statement2.split()
myListSubString = substring.split()

startIdx = None

for index, word in enumerate(myList1):
    if word == myListSubString[0]:
        startIdx = index
        break

if startIdx is not None:
    newString1 = ' '.join(myList1[:startIdx]) + " " + (' '.join(myListSubString)).upper() + " " + ' '.join(myList1[startIdx+1:])
else:
    newString1 = statement1
    
startIdx = None
    
for index, word in enumerate(myList2):
    if word == myListSubString[0]:
        startIdx = index
        break

if startIdx is not None:
    newString2 = ' '.join(myList2[:startIdx]) + " " + (' '.join(myListSubString)).upper() + " " + ' '.join(myList2[startIdx+1:])
else:
    newString2 = statement2
    
print(newString1)
print(newString2)


# Subtask 3
mergedStatement = statement1 + " " + statement2
myMergedList = mergedStatement.split()
count = 0

for word in myMergedList:
    if word == inputWord:
        count += 1

if count == 0:
    print('Word not found')
else:
    print(count)
