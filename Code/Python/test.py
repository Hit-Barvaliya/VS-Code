from sqlalchemy import create_engine, text

db_url = 'postgresql://postgres:HIT@localhost/telusko'
engine = create_engine(db_url)

try:
    with engine.connect() as conn:
        result = conn.execute(text("SELECT version();"))
        for row in result:
            print("Connected! PostgreSQL version:", row)
except Exception as e:
    print("Connection failed:", e)
