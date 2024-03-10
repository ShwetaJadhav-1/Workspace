from sklearn.datasets import load_iris

iris = load_iris()

print("Feature names of iris dataset")
print(iris.feature_names)

print("Target names of iris datasets")
print(iris.target_names)

print("First 10 elements from iris dataset")

for i in range(len(iris.target)):
    print(" ID : %d,Feature : %s, Label : %s"%(i,iris.data[i],iris.target[i]))