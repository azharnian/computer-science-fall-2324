import logging

# Configure the logger
logging.basicConfig(level=logging.INFO, 
                    format="%(asctime)s - %(levelname)s - %(message)s")

# Create a FileHandler to log messages to a file
file_handler = logging.FileHandler('logfile.log')

# Create a Formatter to define the log message format
formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')

# Set the formatter for the FileHandler
file_handler.setFormatter(formatter)

# Add the FileHandler to the logger
logging.getLogger().addHandler(file_handler)

def log_activity(func):

    def wrapper(*args, **kwargs):
        logging.info(f"Calling function : {func.__name__}")
        result = func(*args, **kwargs)
        logging.info(f"Function {func.__name__} finished")
        return result
    
    return wrapper

@log_activity
def subtract(a, b):
    return abs(a - b)

@log_activity
def add(a, b):
    return a + b

# print(subtract(8, 10))
print(add(10, 20))