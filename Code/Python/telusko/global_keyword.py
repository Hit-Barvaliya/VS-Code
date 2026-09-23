# --------------------------------------------------
# 1️⃣ Global Variable (can be used anywhere)
# --------------------------------------------------
x = 100
y = 50
z = 10

print("GLOBAL x =", x)
print("GLOBAL y =", y)
print("GLOBAL z =", z)
print()


# --------------------------------------------------
# 2️⃣ Local Variable Preference (local wins)
# --------------------------------------------------
def demo_local():
    x = 200  # local variable
    print("Inside demo_local, x =", x)  # local variable used


demo_local()
print("Outside demo_local, x =", x)  # global variable unchanged
print()


# --------------------------------------------------
# 3️⃣ Accessing Global Variables inside a function
# --------------------------------------------------
def show_global():
    print("Inside show_global, global y =", y)  # direct access to global


show_global()
print()


# --------------------------------------------------
# 4️⃣ Reassigning without global keyword → creates LOCAL variable
# --------------------------------------------------
def wrong_modify():
    x = 999  # this creates a LOCAL x, does NOT modify the global one
    print("Inside wrong_modify, x =", x)


wrong_modify()
print("Outside wrong_modify, x =", x)  # global still 100
print()


# --------------------------------------------------
# 5️⃣ Using global keyword to modify the global variable
# --------------------------------------------------
def correct_modify():
    global y
    y = 500  # modifies global y
    print("Inside correct_modify, modified global y =", y)


correct_modify()
print("Outside correct_modify, y =", y)  # global changed
print()


# --------------------------------------------------
# 6️⃣ Using globals() to modify global & also keep local with same name
# --------------------------------------------------
def use_globals():
    z = 999   # local z
    print("Inside use_globals, local z =", z)

    # modify global z using globals() dictionary
    globals()['z'] = 3000
    print("Inside use_globals, modified global z =", globals()['z'])


use_globals()
print("Outside use_globals, GLOBAL z =", z)
