// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int start = 0;
    int end = size - 1;
    int count = 0;
    while (end >= start) {
    int middle = (end + start) / 2;
    if (*(arr + middle) == value) {
        count += 1;
        int newmiddle = middle;
        while ((*(arr + middle + 1)) == value) {
        count += 1;
        middle += 1;
        }
        while ((*(arr + newmiddle - 1)) == value) {
        count += 1;
        newmiddle -= 1;
        }
        return count;
    } else if (*(arr + middle) > value) {
        end = middle - 1;
    } else {
        start = middle + 1;
    }
    }
    return count;
}
