
# this is a class model for alchemy

from sqlalchemy import Column, Integer, String, Float
from sqlalchemy.ext.declarative import declarative_base

Base = declarative_base() 

class Product(Base):


    __tablename__ = 'product'

    id = Column(Integer, primary_key=True, index=True)
    name = Column(String(200))
    description = Column(String(200))
    price = Column(Float)
    quantity = Column(Integer)











