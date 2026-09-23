# -> text to speach 

import pyttsx3

engine = pyttsx3.init()
engine.say("Setup complete. Your Jarvis is ready.")
engine.runAndWait()



# -> this is for spech to text

import speech_recognition as sr

r = sr.Recognizer()
with sr.Microphone() as source:
    print("Say something...")
    audio = r.listen(source)

try:
    print("You said:", r.recognize_google(audio))
except:
    print("Sorry, I could not understand.")


