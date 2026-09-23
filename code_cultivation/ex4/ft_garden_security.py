class Plant:
    def __init__(self, name: str, height: float, days: int):
        self.name: str = name
        self._height: float = height
        self._days: int = days
        if self._height < 0:
            self._height = 0
            print(f"Invalid value for {self.name} height, set to 0cm")
        if self._days < 0:
            self._days = 0
            print(f"Invalid value for {self.name} age, set to 0 days old")

    def set_height(self, new_height: float):
        if new_height < 0:
            print(f"{self.name}: Error, height can’t be negative")
            print("Height update rejected")
            print("")
        else:
            self._height = new_height
            print(f"Height updated: {self.get_height()}cm")

    def set_age(self, new_days: int):
        if new_days < 0:
            print(f"{self.name}: Error, age can’t be negative")
            print("Age update rejected")
            print("")
        else:
            self._days = new_days
            print(f"Age updated: {self.get_age()} days")

    def get_height(self) -> float:
        return self._height

    def get_age(self) -> int:
        return self._days

    def show(self) -> None:
        print(f"{self.name}: {self.get_height()} cm, ", end="")
        print(f"{self.get_age()} days old \n")

    def grow(self, cm):
        self._height = round(self.get_height() + cm, 2)

    def age(self):
        self.days += 1


def ft_garden_security() -> None:
    print("===== Garden Security System =====")
    plant = Plant("Lycoris", 22.1, 27)
    print("Plant created: ", end="")
    plant.show()

    plant.set_height(25)
    plant.set_age(30)
    print("")

    plant.set_height(-1)
    plant.set_age(-1)

    print("Current state: ", end="")
    plant.show()


if __name__ == "__main__":
    ft_garden_security()
