
values = [10,20,30,40]

print(values)

print(type(values))

print(len(values))  # it will retuen number of elements

print(values[0])
print(values[1])
print(values[2])
print(values[3])

#values[4] = 50      # Error:-  list assignment index out of range

values.append(50)
print(values)

values.remove(20)
print(values)

values.append(50)
print(values)

print(type(values[0]))

values.append(90.89)
print(values) # supports heterogenity - it adds flaot value

values.insert(2,11)
print(values)

values.insert(15,99)
print(values)
print("size of list is now : ",len(values)) # works like append- index 15
# insted of giving an error it appends the data.

