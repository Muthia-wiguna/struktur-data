class PwdMan:
    def __init__(self):
        self.storedHash = None
    
    def simple_hash(self, password):
        hash_value = 0
        for ch in password :
            hash_value += ord(ch)
        return hash_value % 100
    
    def set_password(self, password):
        self.storedHash = self.simple_hash(password)
        print("password has been set")

    def verify_password(self, input_password):
        return self.storedHash == self.simple_hash(input_password)
    
Pass_Man = PwdMan()
password = input("enter password : ")
Pass_Man.set_password(password)

input_password = input("enter password to verify : ")
if Pass_Man.verify_password(input_password):
    print("correct")
else:
    print("incorrect")