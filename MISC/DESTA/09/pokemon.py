import requests
import json

def get_data():
    try:
        with open("pikachu.json", "r") as f:
            data = json.load(f)
    except:
        return False
    return data

def save_data(data):
    with open("pikachu.json", "w") as f:
        json.dump(data, f)
    return True

def get_api(sprite):
    api_url = f'https://pokeapi.co/api/v2/pokemon/{sprite}'
    response = requests.get(api_url)

    if response.status_code == 200:
        json_data = response.json()
        return json_data
    else:
        print(f"Error: {response.status_code}")
        print(response.text)
        return False

pikachu = get_data()
if not pikachu:
    pikachu = get_api("pikachu")
    save_data(pikachu)
