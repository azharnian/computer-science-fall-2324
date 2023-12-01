from application import create_app
from dotenv import load_dotenv

import os

load_dotenv()

def main():
    app = create_app()
    app.run(host='127.0.0.1', port=5000, debug=True)

if __name__ == '__main__':
    main()