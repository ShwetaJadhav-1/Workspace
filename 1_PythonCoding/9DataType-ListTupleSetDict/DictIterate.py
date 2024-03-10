print("Demonstration of Dictionary")

programming = {"C" : "Ritchie", "C++" : "Stroustrup", "Java" : "Gosling", "Python" : "Rossum"}
Batches = {"PPA" : 18000, "LB" : 16700, "Python" : 16500, "Angular" : 15000}

print("Data of Dictionary : ",Batches)
print("_____________________________")


print("Data traversal using for loop")
for x in Batches:
    print(x)
print("_____________________________")

print("Data traversal using for loop")
for x in Batches:
    print(x,Batches[x])
print("_____________________________")

print("Data traversal using for loop")
for x in Batches:
    print(x,Batches.get(x))
print("_____________________________")

keyBatches = Batches.keys()
print(type(keyBatches))
print(keyBatches) #dict_keys(['PPA', 'LB', 'Python', 'Angular'])
print("_____________________________")

valuesBatches = Batches.values()
print(type(valuesBatches))
print(valuesBatches) #dict_keys(['PPA', 'LB', 'Python', 'Angular'])
print("_____________________________")

"""for i in range(0,len(Batches)):
    print("Batch name is : ",keyBatches[i], end = " ") #'dict_keys' object is not subscriptable
    print("Fees are : ",valuesBatches[i]) """


for i in range(0,len(Batches)):
    print("Fees are(Value is) : ",)



