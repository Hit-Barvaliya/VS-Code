import subprocess

# Get Wi-Fi profiles metadata
meta_data = subprocess.check_output(['netsh', 'wlan', 'show', 'profiles'])

# Decode the data
data = meta_data.decode('utf-8', errors="backslashreplace")
data = data.split('\n')

# Extract Wi-Fi profile names
profiles = []
for i in data:
    if "All User Profile" in i:
        i = i.split(":")
        if len(i) > 1:
            profile_name = i[1].strip().strip('"')
            profiles.append(profile_name)

# Print header
print("{:<30}| {:<}".format("Wi-Fi Name", "Password"))
print("-" * 46)

# Iterate through all profiles and get passwords
for profile in profiles:
    try:
        # Get profile details with password
        results = subprocess.check_output(['netsh', 'wlan', 'show', 'profile', profile, 'key=clear'])
        results = results.decode('utf-8', errors="backslashreplace").split('\n')

        # Find password line
        password_lines = [line for line in results if "Key Content" in line]
        if password_lines:
            password = password_lines[0].split(":")[1].strip()
        else:
            password = ""

        print("{:<30}| {:<}".format(profile, password))

    except subprocess.CalledProcessError:
        print("{:<30}| {:<}".format(profile, "Error reading profile"))





























# # importing subprocess
# import subprocess
 
# # getting meta data
# meta_data = subprocess.check_output(['netsh', 'wlan', 'show', 'profiles'])
 
# # decoding meta data
# data = meta_data.decode('utf-8', errors ="backslashreplace")
 
# # splitting data by line by line
# data = data.split('\n')
 
# # creating a list of profiles
# profiles = []
 
# # traverse the data
# for i in data:
     
#     # find "All User Profile" in each item
#     if "All User Profile" in i :
         
#         # if found
#         # split the item
#         i = i.split(":")
         
#         # item at index 1 will be the wifi name
#         i = i[1]
         
#         # formatting the name
#         # first and last character is use less
#         i = i[1:-1]
         
#         # appending the wifi name in the list
#         profiles.append(i)
         
 
# # printing heading       
# print("{:<30}| {:<}".format("Wi-Fi Name", "Password"))
# print("----------------------------------------------")
 
# # traversing the profiles       
# for i in profiles:
     
#     # try catch block begins
#     # try block
#     try:
#         # getting meta data with password using wifi name
#         results = subprocess.check_output(['netsh', 'wlan', 'show', 'profile', i, 'key = clear'])
         
#         # decoding and splitting data line by line
#         results = results.decode('utf-8', errors ="backslashreplace")
#         results = results.split('\n')
         
#         # finding password from the result list
#         results = [b.split(":")[1][1:-1] for b in results if "Key Content" in b]
         
#         # if there is password it will print the pass word
#         try:
#             print("{:<30}| {:<}".format(i, results[0]))
         
#         # else it will print blank in front of pass word
#         except IndexError:
#             print("{:<30}| {:<}".format(i, ""))
             
     
             
#     # called when this process get failed
#     except subprocess.CalledProcessError:
#         print("Encoding Error Occurred")
