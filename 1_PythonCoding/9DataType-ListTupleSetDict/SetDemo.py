print("Demonstration of Set")

# Data          :   Heterogeneous
# Ordered       :   No
# Indexed       :   No
# Mutable       :   Yes
# Duplicates    :   No

data = {11,21,51,101,21,11}             # input len = 6
data1 = {11, 90.80, True, "Hello"}     # Heterogeneous

print("First set data : ",data)
print("Length of data : ",len(data))   # len = 4 : Duplicate store ch nahi krt
print("Data is Heterogeneous : ",data1)
print("Data is ordered : ",data1)
#print("Data at index 2 : ",data1[2])    # 'set' object is not subscriptable
print("Data with unique elements : ",data)

print("Set is mutable")
# Insert element in set
data.add(211)
print("Data after Insertion : ",data)


#Remove Element
data.remove(211)
print("Data after removal : ",data)

"""data.remove(201)                    # KeyError: 201
print("Data after removal : ",data)"""


data.discard(201)                      # It does nothing
print("Data after removal : ",data)