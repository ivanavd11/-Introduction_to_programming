# Динамична памет

**Следните задачи да се решат с динамична памет, а не с използването на std::vector!**

**Упражнете и освобождаването на памет!**

<br>

1. **Задача** Да се състави програма, която въвежда оценките на един ученик и пресмята средния му успех. Първо да се въведе броят на оценките, а след това и самите оценки разделени с интервал.

	**Пример**:<br>
	Вход:
    ```text
	4
	6 4 5 6
	```
	Изход:
	```text
	5.25
	```
	---


<br>

2. **Задача** Да се състави програма, която въвежда **n** реални числа и извежда минималното и максималното от тях (0 < **n** < INT_MAX).

	---

<br>

3. **Задача** Даден е масив от тип **char** съдържащ **n** символа (0 < **n** < INT_MAX) . Да се състави програма, която определя дали масива е симетричен, т.е. прочетен отляво надясно и отдясно наляво е един и същ.

	---


<br>

4. **Задача**  Въведено е число a. Да се изведе неговия двоичен запис.

	**Пример**:<br>
	Вход:
    ```text
	123
	```
	Изход:
	```text
	1111011
	```
	---

<br>

5. **Задача** Дадено е число **N**. Да се провери дали цифрите му образуват палиндром.

	**Пример**:<br>
	Вход:
    ```text
	1987891
	```
	Изход:
	```text
	Yes
	```
	---

<br>

6. **Задача** Дадени са **N** на брой цели положителни числа разположени в кръг (т.е последното и първото са съседи) и число **K**, такова че **N** и **K** са взаимно прости (т.е нямат общи делители, освен единицата). Започвайки от нулевия елемент, да се изведат всички числа от кръга, придвижвайки се с **K** позиции на всяка итерация.

    **Вход**: На 1-вия ред на стандартния вход се въвеждат числата **N** и **K**, разделени с интервал. На следващия ред, разделени с интервал, се въвеждат **N**-те числа, разположени в кръг.

    **Изход**: На единствения ред на стандартния изход се извеждат **N**-те числа, подредени по гореуказания начин.
	Изход:
	```text
	yes
	```

	---

	Вход:
	```text
	3
	0 0 1
	0 3 1
	3 4 2
	```
	Изход:
	```text
	yes
	```

	---

	Вход:
	```text
	4
	1 5 9 3
	0 0 3 4
	0 0 3 0
	4 6 0 0
	```
	Изход:
	```text
	no
	```
	---

<br>

14. **Задача** Дадена е матрица **А** с размер **N**<sub>x</sub>2. Сортирайте редовете й в нарастващ ред по първия елемент. Ако първите елементи са равни, по вторите. Изведете я.

	**Пример**:<br>
	Вход:
    ```text
	6
	1 4
	3 16
	4 5
	1 2
	20 0
	6 7
	```
	Изход:
	```text
	1 2
	1 4
	3 16
	4 5
	6 7
	20 0
	```

	---

	**Бонус**: Направете същото с NxM матрица.



<br>

15. **Задача** Дадена е матрица с размери **NxM**. Напишете програма, която проверява дали всички диагонали от ляво на дясно са нарастващи.

	**Пример**:<br>
	Вход:
    ```text
	1 2 3 4
	5 6 7 8
	9 9 9 9
	```
	Изход:
	```text
	Yes
	```

	---

	Вход:
	```text
    1 2 3 4
    5 0 7 8
    9 9 9 9
	```
    Изход:
	```text
	No
	```
	Пояснение: 1 < 0 < 9 не е вярно

	---

<br>

16. **Задача** Дадена е квадратна матрица **A** с размери **n<sub>x</sub>n**. Изведете елементите й спираловидно, започвайки от горния ляв ъгъл.

	**Пример**:<br>
	Вход:
    ```text
	4
	1 2 3 4
	6 10 8 9
	11 2 3 4
	3 7 4 5
	```
	Изход:
	```text
	1 2 3 4 9 4 5 4 7 3 11 6 10 8 3 2
	```
	---

	**Бонус**: Направете същото с **m<sub>x</sub>n** матрица.


<br>

17. **Задача** Дадени са матриците **A** и **B**, с размери **NxM** и **PxQ**. Да се изведе произведението на **A** и **B**, ако това е възможно, или да се изведе съобщение, че не е.

	---
