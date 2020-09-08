def main():
    x = int(input("Enter the number "))
    t1 = 0
    t2 = 1
    for i in range(x):
        print(t1)
        y = t1+t2
        t1=t2
        t2=y
        
main()