class Triangle:
    def __init__(self,angle1,angle2,angle3):
        self.angle1=angle1
        self.angle2=angle2
        self.angle3=angle3
    def check_angles(self):
        deg=180
        sum=self.angle1+self.angle2+self.angle3
        if(sum==deg):
            return True
        else:
            return False

T1=Triangle(80,30,40)
T2=Triangle(70,50,60)

print(T1.check_angles())
print(T2.check_angles())
