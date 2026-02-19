x=int(input("Enter the number of case"))
match x:
    case 1:
        print("This is case 1")
    case 2:
        print("This is case 2")
    case 3:
        print("This is case 3")
    case _ if x!=90:
        print("This case is less than 90")
