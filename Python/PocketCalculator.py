#standard pocket calculator

#5+5 = 10
def calculate(userInput):
    for i in range(0,len(userInput)):
        if(isSymbol(userInput[i])):
            symbol = getSymbol(userInput[i])
            performOperation(symbol,userInput[0:i],userInput[i+1:])

#get the symbol from the user, and do the math
def performOperation(symbol,firstInput,secondInput):
    if(symbol == "+"):
        print(float(firstInput) + float(secondInput))
    elif(symbol == "-"):
        print(float(firstInput) - float(secondInput))
    elif(symbol == "*"):
        print(float(firstInput) * float(secondInput))
    elif(symbol == "/"):
        print(float(firstInput) / float(secondInput))

def getSymbol(letter):
    symbols = "+-*/"
    for i in range(0,len(symbols)):
        if(letter == symbols[i]):
            return symbols[i];

    return "";

def isSymbol(letter):
    symbols = "+-*/"
    for i in range(0,len(symbols)):
        if(letter == symbols[i]):
            return True;

    return False;

while True:
    userInput = input("")
    calculate(userInput)
