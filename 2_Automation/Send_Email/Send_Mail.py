import os
import smtplib

EMAIL_ADDRESS = os.environ.get('EMAIL_USER')
EMAIL_PASSWORD = os.environ.get('EMAIL_PASS')

smtp = smtplib.SMTP('smtp.gmail.com',587)
    
smtp.starttls()
smtp.ehlo()
smtp.ehlo()

smtp.login(EMAIL_ADDRESS, EMAIL_PASSWORD)

subject = 'TEST PYTHON EMAIL'

body = 'HOW '

msg = f'Subject: {subject}\n\n{body}'

smtp.sendmail(EMAIL_ADDRESS, 'shwetajadhav1994@gmail.com', msg)
print("mail sent")
