# Рекурсия
- Решаване на проблем, чрез решаването на по-малък подпроблем
- Рекурсията винаги трябва да има условие за край, иначе има да си чакаме да прикючи
- По-кратко решение
- По-ефикасна от итерацията (в повечето случаи)
---
# Пример - Фибоначи
```
int fibonacci(const int n) 
{
    if (n == 1) 
    {
        return 0;
    }
    
    if (n == 2) 
    {
        return 1;
    }
    
    return fibonacci(n - 2) + fibonacci(n - 1);
}
```
# Задачи
## 1. Да се напише рекурсивна програма, която пресмята сумата на първите n естествени числа.

## 2. Да се напише рекурсивна функция, която отпечатва в обратен ред цифрите на дадено цяло положително число.

## 3. Съставете рекурсивна подпрограма, която намира сумата от цифрите на дадено цяло положително число.

## 4. Съставете рекурсивна подпрограма, която намира броя на цифрите на дадено цяло положително число.

## 5. Да се напише рекурсивна програма, която проверява дали редицата а0, а1, …, аn-1 е монотонно растяща.

## 6. Да се напише рекурсивна функция, която установява, дали в записа на естественото число n се съдържа цифрата k.

## 7. Да се напише рекурсивна програма, която проверява дали даден низ е палиндром.

    
