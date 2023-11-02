def find_square(width, height):
    if width == height:
        return width
    if width < height:
        width, height = height, width
    if height == 0:
        return width  # Return the non-zero value
    print(height, width % height)
    return find_square(height, width % height)

print(find_square(1680, 640))
