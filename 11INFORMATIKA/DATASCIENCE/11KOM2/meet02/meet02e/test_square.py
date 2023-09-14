from calculator import square

def test_positive():
    assert square(2) == 4
    assert square(3) == 9
    assert square(4) == 16

def test_negative():
    assert square(-5) == 25
    assert square(-6) == 36
    assert square(-7) == 49

def test_zero():
    assert square(0) == 0