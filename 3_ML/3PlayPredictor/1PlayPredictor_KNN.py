import numpy as np
import pandas as pd
from sklearn import preprocessing
from sklearn.neighbors import KNeighborsClassifier

def PlayPredictor(data_path):

    # Step 1 : Load data
    data = pd.read_excel(data_path,index_col = 0)

    print("Size of actual dataset", len(data))

    # Step 2 : Clean, Preapre and Manipulate data
    feature_names = ["Whether","Temperature"]

    print("Names of feature : ",feature_names) 

    whether = data.Whether
    temperature = data.Temperature
    play = data.Play

    # Creating label encoder
    le = preprocessing.LabelEncoder()

    # Converting string labels into numbers
    whether_encoded = le.fit_transform(whether)
    print(whether_encoded)

    # Converting string labels into numbers
    temp_encoded = le.fit_transform(temperature)
    label = le.fit_transform(play)

    print(temp_encoded)

    # Combining whether and temperature into single list of tuples
    features = list(zip(whether_encoded,temp_encoded))

    # Step 3 : Train Data
    model = KNeighborsClassifier(n_neighbors = 3)

    # Train the model using the training sets
    model.fit(features,label)

    # Step 4 : test data 
    predicted = model.predict([[0,2]])  # 0 : Overcast, 2 : Mild
    print(predicted)

def main():
    print("Play predictor application using KNN algorithm")

    PlayPredictor("PlayPredictor.xlsx")

if __name__ == "__main__":
    main()