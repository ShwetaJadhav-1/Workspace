import os

def Delete_File(FileName):
    if(os.path.exists(FileName)):
        os.remove(FileName)
        print("File is successfully deleted")
    else:
        print("There is no such file")
        return
        


def main():
    print("Enter the file name to delete")
    Name = input()

    Delete_File(Name)

if __name__ == "__main__":
    main()