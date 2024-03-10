import os
import smtplib
from email.message import EmailMessage

EMAIL_ADDRESS = os.environ.get('EMAIL_USER')
EMAIL_PASSWORD = os.environ.get('EMAIL_PASS')

msg = EmailMessage()
msg['Subject'] = 'TEST PYTHON EMAIL'
msg['From'] = EMAIL_ADDRESS
msg['To'] = 'shwetajadhav1994@gmail.com'
msg.set_content('Text file attached')

# Add the attachment
with open('Test.txt', 'rb') as f:
    data = f.read()

msg.add_attachment(data, maintype='text', subtype='plain')

with smtplib.SMTP_SSL('smtp.gmail.com',465) as smtp:
    smtp.login(EMAIL_ADDRESS, EMAIL_PASSWORD)

    smtp.send_message(msg)

print("mail sent")
