

def user_info(name, sex, **kwargs):
    print(f"Name : {name}, {sex}")
    if kwargs:
        for key, value in kwargs.items():
            print(f"{key} : {value}")

user_info("Anas", "Male", age=29, occupation="Teacher")
user_info(name="Budi", sex="Male")