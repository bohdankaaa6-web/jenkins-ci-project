#ifndef SORT
#define SORT

// 1. Оголошення функції, яку ми використовуємо з stringProcessor.h
// ТІЛЬКИ ПРОТОТИП, оскільки він має тіло у stringProcessor.h!
int32_t strcmpp(const char* fStr, const char* sStr);

// Допоміжна функція обміну
void swap(char** a, char** b)
{
    char* temp = *a;
    *a = *b;
    *b = temp;
}

// Функція сортування (Bubble Sort для початку, щоб уникнути C3861)
void quick_sort(char** arr, size_t size)
{
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size - i - 1; j++) {
            // strcmpp тепер видно, оскільки ми його оголосили
            if (strcmpp(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

#endif // !SORT