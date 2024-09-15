# class student:
#     collegename="GLA University"
#     def __init__(self,name):
#         self.name=name
#         print("Adding new student in DataBase..")
    
#     def hello(self):
#         print("welcome",self.name)


# s1=student("karn")
# s1.hello()
# s2=student("arjun")
# s2.hello()


# class car:
#     color="blue"
#     model="qw1"
#     brand="Mercedes"


# class student:
#     def __init__(self,name,marks):
#         self.name=name
#         self.marks=marks

#     def average(self):
#         print(f"Hi! {self.name}, Your average of marks are {sum(self.marks)/3}")
    
#     @staticmethod #decorator
#     def hello():
#         print("hello")

# s1= student("Tony",[99, 86, 76])
# s1.average()

# s1.name="Mr.Stark"
# s1.average()
# s1.hello()
  

# abstraction== hiding the implementation details of a class and only showing the essential features to the user
# Encapsulation== Wrapping data and functions into single unit (object).

class account:
    def __init__(self,acc,bal):
        self.balance=bal
        self.accountno=acc
    def debit(self,deb):
        self.amount=deb
        return self.balance - (self.amount) 


acc1=account('cust1',12000)
print(acc1.accountno)
print(acc1.balance)
print(acc1.debit(100))