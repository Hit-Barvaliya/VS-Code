from fastapi import FastAPI

# -> for swagger we write http://localhost:8000/docs
# swagger is framewwork

app = FastAPI()

"""
to run the fornthand we write npm start after rich to the fronthand folder
"""
"""
to run the backhand we reach to the fastapi-demo-products-get-post1 then run 'uvicorn main:app --reload'(command)

meaning of this command :- 
⭐ Full Meaning of the Command
uvicorn main:app --reload

means:
👉 Run the FastAPI app named app inside the file main.py using the Uvicorn server, and auto-reload whenever the code changes.
"""

@app.get('/')   
# GET request is used to retrieve data (like opening a page in a browser).
# hear we put the path of home page but hear we write '/' because we rediredt to the same as a home page

#This is from the chatGPT :- 

# 🔷 2. '/' inside get('/')

# '/' is the root URL (home page).

# Example URLs:

# http://127.0.0.1:8000/

# or http://localhost:8000/

# Visiting this URL will run the function greet().

def greet():
    return 'Wellcome to Telusko Trac'


from models import Product
# => this is method 1
# products = [
#     Product (1, "phone", "budget phone", 99, 10), 
#     Product (2, "laptop", "gaming laptop", 999, 6)
# ]

# => this is method 2
products = [
    Product (id=1, name="Phone", description="A smartphone", price=699.99, quantity=50),
    Product (id=2, name="Laptop", description="A powerful laptop", price=999.99, quantity=30), 
    Product (id=4, name="Pen", description="A blue ink pen", price=1.99, quantity=100), 
    Product (id=5, name="Table", description="A wooden table", price=199.99, quantity=20),
]

@app.get('/products')
def get_all_product():
    return products

# hear we pass id after 'product/'
@app.get('/product/{id}')
def get_product_by_id(id: int):
    for pro in products:
        if pro.id == id:
            return pro

    return 'Product Not Found'


# hear we add a new product
@app.post('/product')
def add_product(newproduct: Product):
    products.append(newproduct)
    return newproduct
    # -> add new product we need to from so we check this in swagger we no need to creat a form 


# we use patch to update the particular field of the product
@app.put('/product')
def update_product(id: int, newproduct: Product):

    for i in range(len(products)):
        if products[i].id == id:
            products[i] = newproduct
            return 'Product updated successfully'

    return 'Product Not Found'

# @app.delete('/product')
# def delet_product(id : int):
#     for i in range(len(products)):
#         if products[i].id == id:
#             del products[i]
#             return 'Product deleted Successfully'

#     return 'Product Not Found'


#-------------------------------------------------------------------------------------

# hear we creat a database connection

import database_model
from database import engine
database_model.Base.metadata.create_all(bind=engine)

from database import session

@app.get('/products_by_database')
def get_all_product_by_database():
    

    # database connection

    #hear we creat a object of session which in the database.py file
    db = session()
    db.query()
    return products
    #querys

def init_db():
    db = session()   # Correct session

    count = db.query(database_model.Product).count()  # Correct count()

    if count == 0:
        for pro in products:
            db.add(database_model.Product(**pro.model_dump()))  # show at last

        db.commit()   # Required because autocommit=False in database.py

init_db()

def get_db():
    db = session()
    try:
        yield db
    finally:
        db.close()

from fastapi import Depends
@app.get('/productsDB')
def get_all_products_DB(db: session = Depends(get_db)):
    db_products = db.query(database_model.Product).all()

    return db_products

#-------------------------------------------------------------------------------------
# from hear we fatch data from the data base
#-------------------------------------------------------------------------------------
@app.get('/productDB/{id}')
def get_product_by_id_DB(id: int, db:session = Depends(get_db)):

    db_product = db.query(database_model.Product).filter(database_model.Product.id == id).first()
    if(db_product):
        return db_product
    
    return 'Product Not Foud'



@app.post('/productDB')
def add_product_DB(newproduct: Product, db:session = Depends(get_db)):
    db.add(database_model.Product(**newproduct.model_dump()))
    db.commit()
    return newproduct


@app.put('/productDB')
def update_product_DB(id: int,newpeoduct:Product, db:session = Depends(get_db)):
    
    db_product = db.query(database_model.Product).filter(database_model.Product.id == id).first()

    if db_product:
        db_product.name = newpeoduct.name
        db_product.description = newpeoduct.description
        db_product.price = newpeoduct.price
        db_product.quantity = newpeoduct.quantity
        db.commit()

        return 'Product Updated Successfully'
    
    return 'Product Not Found'


@app.delete('/product')
def delet_product_DB(id: int, db:session = Depends(get_db)):
    db_product = db.query(database_model.Product).filter(database_model.Product.id == id).first()

    if(db_product):
        db.delete(db_product)
        db.commit()

        return 'Product Deleted Successfully'
    
    return 'Product Not Found'
    # delete query will only it will either with or without database's changes


    







# """

# db.add(database_model.Product(**pro.model_dump()))  # show at last

# ✅ 1. pro.model_dump()

# pro is usually a Pydantic model (input data from API).
# model_dump() converts the Pydantic object → Python dictionary.

# Example:

# pro = ProductSchema(name="Laptop", price=50000)
# pro.model_dump()


# Output:

# {
#     "name": "Laptop",
#     "price": 50000
# }


# So now we have a normal dictionary.

# ✅ 2. ** (Double star operator)

# ** spreads/unpacks the dictionary into keyword arguments.

# Example:

# {"name": "Laptop", "price": 50000}


# becomes:

# name="Laptop", price=50000


# This is required because SQLAlchemy model expects keyword arguments.

# ✅ 3. database_model.Product(**...)

# Now we create a new SQLAlchemy model object:

# database_model.Product(name="Laptop", price=50000)


# This is the row/record that will be stored in the table.

# ✅ 4. db.add(...)

# Now we tell SQLAlchemy:

# 👉 “Add this new row to the pending database session.”

# But it is NOT saved yet.

# You must commit:

# db.commit()


# """