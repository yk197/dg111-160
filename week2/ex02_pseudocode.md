BEGIN [ตรวจสอบเกรด]
INPUT score
IF score >= 80 THEN grade = " A "
ELSE IF score >= 70 THEN grade = "B"
ELSE IF score >= 60 THEN grade = "C"
ELSE IF score >= 50 THEN grade = "D"
ELSE grade = "F"
END IF
OUTPUT grade


BEGIN [หาค่าสูงสุดจาก 2 ตัวเลข]
INPUT รับ a และ b
IF a > b THEN "เเสดง a"
ELSE IF a > b THEN "เเสดง b"
END IF
OUTPUT a และ b


BEGIN [นับจาก 1 ถึง N]
INPUT N
ให้ i = 1

WHILE i <= N DO

print "i"

i = i+1

END WHILE
