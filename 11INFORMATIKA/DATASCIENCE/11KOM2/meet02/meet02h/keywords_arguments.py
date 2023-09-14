
def user_info(name, sex, **kwargs):
    if kwargs:
        res = f"Name = {name}, Sex = {sex}"
        for key, value in kwargs.items():
            res += f"\n\t{key} = {value}"
        return res
    return f"Name = {name}, Sex = {sex}"

print(user_info("John", "Male"))
print(user_info("Jane", "Female", age = 20))
print(user_info("Bob", "Male", age = 20, occupation = "teacher"))