from calculator import square

def main():
    test_calculator()

def test_calculator():
    # try:
    #     assert square(2) == 4
    # except AssertionError:
    #     print("F", end="")
    # else:
    #     print(".", end="")
    # try:
    #     assert square(3) == 9
    # except AssertionError:
    #     print("F", end="")
    # else:
    #     print(".", end="")
    assert square(2) == 4
    assert square(3) == 9
    assert square(-2) == 4
    assert square(-3) == 9

if __name__ == "__main__":
    main()