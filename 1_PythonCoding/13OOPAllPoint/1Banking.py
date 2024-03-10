# Instance Variable : Name, Amount, Address, AccountNo
# Instance Method : CreateAccount, DisplayAccountInfo
# Class Variable : Bank_Name, ROI_On_FD
# Class Method : DisplayAccountInfo
# Static Method : DisplayKYCInfo
class Bank_Account:

    Bank_Name = "HADFC Bank PVT LTD"
    ROI_On_FD = 6.7

    def __init__(self):
        self.Name = ""
        self.Amount = 0.0
        self.Address = ""
        self.AccountNo = 0

    def CreateAccount(self):    # like Accept method
        print("Enter your Name")
        self.Name = input()

        print("Enter your initial Amount")
        self.Amount = float(input())

        print("Enter your Address")
        self.Address = input()

        print("Enter your Account Number")
        self.AccountNo = int(input())

    def DisplayAccountInfo(self):
        print("------------Your Account Information is as below -------------")
        print("Name of Account Holder : ",self.Name)
        print("Address of Account Holder : ", self.Address)
        print("Account Number of Account Holder : ", self.AccountNo)
        print("Current Amount in Account : ", self.Amount)

    @classmethod           # writting this is manadatory
    def DisplayBankInformation(cls):
        print("Welcome to Banking console")
        print("Name of our bank is : ",cls.Bank_Name)
        print("Rate of Interest we offer on FD is : ",cls.ROI_On_FD)

    @staticmethod
    def DisplayKYCInfo():
        print("Please consider below KYC Information")
        print("According to the rules GOI you have to sumbmit below documents")
        print("1 : Clear and recent passport size photo")
        print("2 : Photo of AADHAR Card")
        print("3 : Photo of PAN Card")

    def Deposite(self,Value):
        self.Amount = self.Amount + Value

    def Withdraw(self,Value):
        self.Amount = self.Amount - Value

def main():
    print("--------------------------------------------------")
    print("-------------Banking Application-----------------")
    print("--------------------------------------------------")

    print("--------------------------------------------------------------------")
    print("-------------Calling Static method to display KYC-----------------")
    print("-------------------------------------------------------------------")

    Bank_Account.DisplayKYCInfo()

    # No need to create object to access class variable
    print("-------------------------------------------------------------------------")
    print("-------------Accessing the instance variables from main-----------------")
    print("------------------------------------------------------------------------")
    print("Name of Bank : ",Bank_Account.Bank_Name)
    print("Rate of Interest on Fixed Deposite : ",Bank_Account.ROI_On_FD)

    print("-----------------------------------------------------------------------------------")
    print("-------------Calling the class method to display Bank information-----------------")
    print("-----------------------------------------------------------------------------------")
    Bank_Account.DisplayBankInformation()

    print("---------------------------------------------------------")
    print("-------------Creating Objects of a class-----------------")
    print("---------------------------------------------------------")
    User1 = Bank_Account()
    User2 = Bank_Account()

    print("Creating the first account")
    print("--------------------------------------------------------------------")
    print("-------------Enter details of first account holder-----------------")
    print("--------------------------------------------------------------------")
    User1.CreateAccount()

    print("Creating the second account")
    print("--------------------------------------------------------------------")
    print("-------------Enter details of second account holder-----------------")
    print("--------------------------------------------------------------------")
    User2.CreateAccount()

    print("----------------------------------------------------------------------------------------------")
    print("-------------Calling instance method to display information of first account-----------------")
    print("----------------------------------------------------------------------------------------------")
    User1.DisplayAccountInfo()

    print("----------------------------------------------------------------------------------------------")
    print("-------------Calling instance method to display information of second account-----------------")
    print("----------------------------------------------------------------------------------------------")
    User2.DisplayAccountInfo()

    print("-------------------------------------------------------")
    print("-------------Depositing 500 in user1-----------------")
    print("-------------------------------------------------------")
    User1.Deposite(500)

    print("-------------------------------------------------------")
    print("-------------Depositing 1000 in user2-----------------")
    print("-------------------------------------------------------")
    User2.Deposite(1000)

    print("Amount of {} user1 after deposite is {} : ".format(User1.Name,User1.Amount))
    print("Amount of {} user2 after deposite is {} : ".format(User2.Name,User2.Amount))

    print("-------------------------------------------------------")
    print("-------------Withdrawing 200 in user1-----------------")
    print("-------------------------------------------------------")
    User1.Withdraw(200)

    print("-------------------------------------------------------")
    print("-------------Withdrawing 400 in user1-----------------")
    print("-------------------------------------------------------")
    User2.Withdraw(400)

    print("Amount of {} user1 after Withdraw is {} : ".format(User1.Name,User1.Amount))
    print("Amount of {} user2 after Withdraw is {} : ".format(User2.Name,User2.Amount))

    print("-------------------------------------------------------")
    print("-------------End of Banking Application-----------------")
    print("-------------------------------------------------------")
if __name__ == "__main__":
    main()