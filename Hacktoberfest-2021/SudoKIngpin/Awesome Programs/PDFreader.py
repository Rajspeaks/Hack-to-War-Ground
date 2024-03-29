import pyttsx3  #speech ENGINE 
from colorama  import init  #WINDOWS COLOR FORMATTING 
from termcolor import cprint,colored # COLOR FORMATTING TEXT 
from time import sleep 
import PyPDF2 #pdf file handling 
import pyfiglet #ascii art 
from tqdm import trange # loading interface module
import easygui  # GUI FILE INPUT 
init()


engine=pyttsx3.init('sapi5') #SAPI5 IS THE WINDOWS API FOR IN-BUILT VOICES OF WINDOWS
voices=engine.getProperty('voices')

engine.setProperty('voice',voices[0].id)

def speak(text):
	engine.say(text)
	engine.runAndWait()


def progressbar():
	for i in trange(100):
		pass
		sleep(0.02) #LOADING INTERFACE FUNCTION


def freader():

		cprint(colored('[!] INITIALISING PROGRAM ...','grey','on_white'))
		speak('initialsing program in your system')


		print()
		cprint(colored('[!] CONFIGURING SETTINGS  ...','white','on_blue'))
		speak("configuring settings")

		print()

		cprint(colored('[!] LOADING.......','grey','on_yellow'))
		speak("loading program in your system")
		print()
		progressbar()
		print()

		cprint(colored('[!] LOADING SUCCESSFULLY'))
		speak('PROGRAM LOADED SUCCESSFULLY IN YOUR SYSTEM')
		print()#FORMATTING PURPOSE
		speak("Please enter your name user")
		u_name=input("Please enter your name user: ")
		print()

		cprint(colored('****FILE READER****','white','on_red'))
		print()#FORMATTING PURPOSE

		a=pyfiglet.figlet_format('FILE  READER')
		speak("FILE Reader")
		print(a)


		filetype=''' Supported File Types

					[1]. Text 
					[2]. PDF  
		'''

		cprint(colored(filetype,'grey','on_white'))

		speak("Supported file types are of only text and pdf format  ")



		ans='y'


		while ans=='y'or ans=="Y":

				speak(f"Hey {u_name},, please select your file ")

				path=easygui.fileopenbox() # RETURNS THE PATH IN DOUBLE QUOTES

				if path!=None: # if user has  selected file

						speak("The file has been selected")


						if path.endswith('.pdf'):

							cprint(colored("PDF File Selected",'grey','on_yellow'))


							speak(f"You have selected a pdf file,, {u_name} ")
							speak(f'I am going ,,,,to read,, it ,,,for ,,,,you. ,,{u_name}')

							with open(path,'rb') as f:
									pdfr=PyPDF2.PdfFileReader(f)
									page=pdfr.numPages

									cprint(colored(f'No of pages in selected pdf :{page}','grey','on_yellow'))
									speak(f'No of pages in selected pdf are  :,{page}')

									speak(f"Reading it for you {u_name}")

									print('Reading.....')
									for i in range(page):
										t=pdfr.getPage(i)
										text=t.extractText()
										speak(text)


						elif path.endswith('.txt'):
							cprint(colored("Text File Selected",'white','on_blue'))


							speak(f"You have selected a text file {u_name}")
							
							speak(f"Reading it for you {u_name}")
							

							with open(path) as f:
								con=f.read()
								speak(con)

						else:
							speak("You have selected Unsupported file type ")
							speak("please select only pdf file or text file")
							cprint(colored("Unsupported file type",'white','on_red'))

							speak('Please select only .TEXT/PDF format file !!.')
							print("Only TEXT/PDF file type Supported!")
							

						ans=input('To continue type[y] , otherwise type[n] to exit: ')
				    



				else: #IF NO FILE SELECTED BY USER .
					cprint(colored("You have not selected any file ",'white','on_red'))
