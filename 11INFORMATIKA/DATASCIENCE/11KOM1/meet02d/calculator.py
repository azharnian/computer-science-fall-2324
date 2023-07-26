def main():
    user_input = int(input("Input your number : "))
    print(f"Square number of {user_input} is {square(user_input)}")

def square(n):
    n = int(n)
    return n * n

if __name__ == "__main__":
    main()