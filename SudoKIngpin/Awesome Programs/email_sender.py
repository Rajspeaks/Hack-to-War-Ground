import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import webbrowser 


Reciever_add=input('Enter the mail address of reciever: ')

BOT_ID='xyz@gmail.com'
BOT_PWD='xyz_tech@#'
server=smtplib.SMTP('smtp.gmail.com',587) #HOST AND PORT
server.ehlo()
server.starttls()#Transport layer secuirity encryption
server.login(BOT_ID,BOT_PWD)

Msg=MIMEMultipart()

Subject=input('Enter Subject of mail:')
body=input('Enter body of mail:')
body=body+'\n'+ '\n' + "Thank you"+ '\n' +"Xyz Corporations"

Msg["From"]=BOT_ID
Msg['To']=Reciever_add
Msg["Subject"]=Subject
Msg.attach(MIMEText(body,'plain')) #ATTACHING BODY
content=Msg.as_string()
server.sendmail(BOT_ID,Reciever_add,content)
print()
o=f"MAIL SENT SUCCESSFULLY TO {Reciever_add}"

server.quit()  #Terminating the session 

webbrowser.open("https://github.com/nealhorner")
#Redirecting user to developer's page 

print("Please follow me on github if you are a true nerd !!!")
[print()]
print("Bye Dude !!!")
exit()  