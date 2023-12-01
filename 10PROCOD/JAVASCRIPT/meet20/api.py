from flask import Flask, request, make_response, jsonify

app = Flask(__name__)

data_store = {
    1: {'name': 'Item 1', 'description': 'Description for Item 1'},
    2: {'name': 'Item 2', 'description': 'Description for Item 2'}
}

@app.route('/items', methods=['GET'])
def get_all_items():
    return make_response(jsonify(data_store), 200)

@app.route('/items/<int:item_id>', methods=['GET'])
def get_item(item_id):
    item = data_store.get(item_id)
    if item:
        return make_response(jsonify(item), 200)
    else:
        return make_response(jsonify({'error': 'Item not found'}), 404)

@app.route('/items', methods=['POST'])
def create_item():
    new_item = request.get_json()
    item_id = max(data_store.keys()) + 1
    data_store[item_id] = new_item
    return make_response(jsonify({'message': 'Item created successfully', 'item_id': item_id}), 201)


if __name__ == '__main__':
    app.run(debug=True)