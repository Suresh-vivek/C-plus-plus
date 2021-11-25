# importing the module
import pywhatkit

# using Exception Handling to avoid
# unprecedented errors
try:

# sending message to receiver
# using pywhatkit
   pywhatkit.sendwhatmsg("+919817806908",
						"Hello from vivek,this is an automated message sent using python",
						18,28)
   print("Successfully Sent!")

except:

# handling exception
# and printing error message
   print("An Unexpected Error!")
