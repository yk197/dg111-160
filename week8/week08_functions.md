# Week 8 — Functions Reference

**Function Reference — `ex02_game_utils.c`**

| Function                                    | ทำหน้าที่                                                 | Returns                      |
| ------------------------------------------- | ------------------------------------------------------------------ | ---------------------------- |
| `int clamp(int value, int min, int max)`  | จำกัดค่า value ให้อยู่ระหว่าง min และ max | ค่าที่ clamp แล้ว  |
| `float lerp(float a, float b, float t)`   | Linear interpolation ระหว่าง a และ b ตาม t            | ค่าที่คำนวณได้ |
| `int randomRange(int min, int max)`       | สุ่มตัวเลขระหว่าง min และ max                  | ค่าสุ่ม               |
| `float percentOf(int current, int total)` | คำนวณเปอร์เซ็นต์                                   | ค่าเปอร์เซ็นต์ |

## คำถาม Reflection — Exercise 2

### 2.1 `clamp` — Pass by Value

**คำถาม:** ทำไม `hp` ใน `main()` ถึงยังเป็น 150 ทั้งที่ `value` ใน `clamp()` ถูกเขียนทับเป็น 100 ไปแล้ว?

**คำตอบ: การเปลี่ยนค่า max ภายในฟังก์ชันจะไม่เปลี่ยนค่า max ใน `main()` เพราะ max ถูกส่งเข้า `clamp()` แบบ Pass by Value

### 2.2 `lerp` — Local Scope

**คำถาม:** ทำไม `main()` ถึงมองไม่เห็นตัวแปร `result` ทั้งที่มันถูกประกาศไว้ในไฟล์เดียวกัน?

**คำตอบ: เพราะว่า ตัวแปร `result` ถูกประกาศไว้ภายในฟังก์ชัน lerp() ทำให้มีขอบเขตในการทำงานแบบ ทำให้สามารถเรียกใช้งานได้เฉพาะภายในฟังก์ชัน lerp() เท่านั้น `main()` ถึงมองไม่เห็นตัวแปร `result`

### 2.3 `randomRange` — Pass by Value

**คำถาม:** ทำไม `diceMin` ใน `main()` ถึงยังเป็น 1 ทั้งที่ `min` ใน `randomRange()` ถูกบวกเพิ่มเป็น 101 ไปแล้ว?

**คำตอบ: เพราะว่าตัวแปร `diceMin`ถูกส่งเข้า `randomRange()` แบบ Pass by Value ไปให้ตัวแปร `min`ในฟังก์ชัน การคำนวณค่า `min`ในฟังก์ชันจึงไม่ส่งผลต่อตัวแปร `diceMin ใน main()`

### 2.4 `percentOf` — Pass by Value

**คำถาม:** ทำไม `score` ใน `main()` ถึงไม่เปลี่ยนเป็น 0 ตาม `current` ทั้งที่ `percentOf()` แก้ `current = 0;` ไปแล้ว?

**คำตอบ: เพราะส่งค่าแบบPass by Value ซึ่งคัลลอกแค่ค่า `score` ไปให้`current การแก้`current = 0;` ในฟังก์ชันจึงไม่กระทบค่า`score `ใน`main()
