from sklearn import tree
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score
from sklearn.datasets import load_iris
from sklearn.model_selection import train_test_split

def MarvellousCalculateAccuracyKNeighbor():
    Dataset = load_iris()       # 1 : Load the data

    Data = Dataset.data
    Target = Dataset.target

    # 2 : Manipulate the data
    Data_train, Data_test, Target_train, Target_test = train_test_split(Data, Target, test_size = 0.5)

    Classifier = KNeighborsClassifier()

    # 3 : Build the model
    Classifier.fit(Data_train, Target_train)

    # 4 : Test the model
    Predictions = Classifier.predict(Data_test)

    Accuracy = accuracy_score(Target_test,Predictions)

    # 5 : Improve -- Missing

    return Accuracy


def MarvellousCalculateAccuracyDecisionTree():
    Dataset = load_iris()       # 1 : Load the data

    Data = Dataset.data
    Target = Dataset.target

    # 2 : Manipulate the data
    Data_train, Data_test, Target_train, Target_test = train_test_split(Data, Target, test_size = 0.5)

    Classifier = tree.DecisionTreeClassifier()   

    # 3 : Build the model
    Classifier.fit(Data_train, Target_train)

    # 4 : Test the model
    Predictions = Classifier.predict(Data_test)

    Accuracy = accuracy_score(Target_test,Predictions)

    # 5 : Improve -- Missing

    return Accuracy

def main():
    Accuracy = MarvellousCalculateAccuracyDecisionTree()
    print("Accuracy of classification algorithm with Decision Tree classifier is : ",Accuracy*100,"%")


    Accuracy = MarvellousCalculateAccuracyKNeighbor()
    print("Accuracy of classification algorithm with K Neighbor classifier is : ",Accuracy*100,"%")

if __name__ == "__main__":
    main()
