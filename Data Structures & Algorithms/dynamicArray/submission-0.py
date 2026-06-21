class DynamicArray:
    
    def __init__(self, capacity: int):
        if capacity > 0:
            self.List = [None] * capacity
            self.capacity = capacity
            self.size = 0
        else:
            raise ValueError("Capacity must be greater than 0")

    def get(self, i: int) -> int:
        if 0 <= i < self.size:
            return self.List[i]
        else:
            raise IndexError("Index out of bounds")

    def set(self, i: int, n: int) -> None:
        if 0 <= i < self.size:
            self.List[i] = n
        else:
            raise IndexError("Index out of bounds")

    def pushback(self, n: int) -> None:
        if self.size == self.capacity:
            self.resize()
        self.List[self.size] = n
        self.size += 1

    def popback(self) -> int:
        if self.size > 0:
            value = self.List[self.size - 1]
            self.List[self.size - 1] = None
            self.size -= 1
            return value
        else:
            raise IndexError("Pop from empty list")

    def resize(self) -> None:
        new_capacity = self.capacity * 2
        new_list = [None] * new_capacity
        for i in range(self.size):
            new_list[i] = self.List[i]
        self.List = new_list
        self.capacity = new_capacity

    def getSize(self) -> int:
        return self.size

    def getCapacity(self) -> int:
        return self.capacity
