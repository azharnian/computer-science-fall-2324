import sqlite3

connection = sqlite3.connect("data.db")
cursor = connection.cursor()
cursor.execute("""
                CREATE TABLE employees (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    first TEXT NOT NULL,
                    last TEXT NOT NULL,
                    pay INTEGER NOT NULL
                )
               
               """
               )

connection.commit()
connection.close()