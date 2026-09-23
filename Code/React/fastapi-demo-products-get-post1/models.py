

from pydantic import BaseModel  
# Role of this line:
# 1. Imports BaseModel from Pydantic
    # BaseModel is a special class provided by the Pydantic library.
# 2. Purpose of BaseModel in FastAPI:
    # It allows you to define data models (like Product) for your API.
    # These models automatically handle:
        # Validation: Checks that the data types are correct (e.g., id is an int).
        # Serialization: Converts Python objects to JSON so FastAPI can send them as API responses.
        # Deserialization: Converts incoming JSON requests into Python objects.
# 3. Without it:
    # FastAPI cannot automatically return complex Python objects like your custom Product class.
    # You would get Internal Server Error if you tried to return them directly.


# => this is method 1
# class Product:
#     id:int
#     name: str
#     description: str
#     price: float
#     quantity: int

#     def __init__(self,id,name,description,price,quantity):
#         self.id = id
#         self.name = name
#         self.description = description
#         self.price = price
#         self.quantity = quantity
        
# => this is method 2
class Product(BaseModel):
    id:int
    name: str
    description: str
    price: float
    quantity: int



