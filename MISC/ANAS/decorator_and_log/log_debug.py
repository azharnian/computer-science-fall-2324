import logging

# Configure the logger
logging.basicConfig(level=logging.DEBUG, format='%(asctime)s - %(levelname)s - %(message)s')

# Create a FileHandler for INFO logs
info_file_handler = logging.FileHandler('info.log')
info_file_handler.setLevel(logging.INFO)

# Create a FileHandler for WARNING logs
warning_file_handler = logging.FileHandler('warning.log')
warning_file_handler.setLevel(logging.WARNING)

# Create a FileHandler for DANGER logs
danger_file_handler = logging.FileHandler('danger.log')
danger_file_handler.setLevel(logging.ERROR)

# Create Formatters for each log level
formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
info_file_handler.setFormatter(formatter)
warning_file_handler.setFormatter(formatter)
danger_file_handler.setFormatter(formatter)

# Get the root logger
logger = logging.getLogger()

# Add the FileHandlers to the logger
logger.addHandler(info_file_handler)
logger.addHandler(warning_file_handler)
logger.addHandler(danger_file_handler)

# Create a decorator using the logger
def log_decorator(func):
    def wrapper(*args, **kwargs):
        logging.info(f"Calling function: {func.__name__}")
        result = func(*args, **kwargs)
        logging.info(f"Function {func.__name__} finished")
        return result
    return wrapper

def log_error(func):
    def wrapper(*args, **kwargs):
        logging.warning(f"Calling function: {func.__name__}")
        func(*args, **kwargs)
        logging.warning(f"Function error : {args} {kwargs}")
    return wrapper

# Apply the decorator to a function
@log_decorator
def add(a, b):
    return a + b

@log_decorator
def subtract(a, b):
    return a - b

@log_error
def print_error_message(e):
    print(e)

# Test the functions
# print(add(3, 5))
# print(subtract(10, 4))

a, b = input().split()

try:
    result = add(a, b)
except Exception as error:
    print_error_message(error)
else:
    print(result)
