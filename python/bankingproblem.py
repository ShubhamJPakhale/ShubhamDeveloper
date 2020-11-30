a=int(input("Dear Bnk Customer,Please Enter Your Bank Account Number:"))
b=int(input("Plese Enter Deposite Amount:"))
c=50000+b
print("Dear Customer,After Deposition Rs",b,"your bank balance is:Rs",c)
d=((5*c)//100)+c
print("Dear Customer after calculating 5% interest on your account balance,your total balance is Rs.",d)
e=d-((2*d)//100)
print("Dear Customer after debiting 2% state GST, Your Account Balance is Rs.",e)

