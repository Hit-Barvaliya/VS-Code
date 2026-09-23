
# hear we creat a connection with data-base

# pyright: ignore[reportMissingImports]
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker

db_url = 'postgresql://postgres:HIT@localhost/telusko'
engine = create_engine(db_url)
session = sessionmaker(autocommit=False, autoflush=False, bind=engine)


