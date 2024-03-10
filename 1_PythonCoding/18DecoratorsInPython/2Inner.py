
def Hello():
    print("Inside Hello")

    def Demo():
        print("Inside Demo")    

    Demo()

Hello()
#Demo() # NameError: name 'Demo' is not defined
#Hello.Demo()    # AttributeError: 'function' object has no attribute 'Demo'
#Helllo().Demo() # NameError: name 'Helllo' is not defined