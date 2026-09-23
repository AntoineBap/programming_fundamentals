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
        print(f"{self.get_age()} days old")

    def grow(self, cm):
        self._height = round(self._height + cm, 2)

    def age(self):
        self._days += 1


class Flower(Plant):
    def __init__(self, name: str, height: float, days: int,
                 color: str, bloomed: bool) -> None:
        super().__init__(name=name, height=height, days=days)
        self.color: str = color
        self.bloomed: bool = bloomed

    def bloom(self) -> None:
        if self.bloomed is False:
            self.bloomed = True
            print(f"[asking the {self.name} to bloom]")
        else:
            print(f"[{self.name} has already bloomed]")

    def show(self) -> None:
        super().show()
        print(f"Color: {self.color}")
        if self.bloomed is True:
            print(f"{self.name} is blooming beautifully!")
        else:
            print(f"{self.name} has not bloomed yet")


class Tree(Plant):
    def __init__(self, name: str, height: float, days: int,
                 trunk_diameter: float) -> None:
        super().__init__(name=name, height=height, days=days)
        self.trunk_diameter: float = trunk_diameter

    def shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        print(f"Tree {self.name} now produces a shade of ", end="")
        print(f"{round(self._height, 2)}cm long and ", end="")
        print(f"{round(self.trunk_diameter, 2)}cm wide.")

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter : {round(self.trunk_diameter, 2)}cm")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, days: int,
                 harvest_season: str, nutritional_value: int) -> None:
        super().__init__(name=name, height=height, days=days)
        self.harvest_season: str = harvest_season
        self.nutritional_value: int = nutritional_value

    def grow(self, duration) -> None:
        print(f"[make {self.name} grow and age for {duration} days]")
        for i in range(duration):
            super().age()
            super().grow(round(self._height / 50, 2))
            self.nutritional_value += 1

    def show(self) -> None:
        super().show()
        print(f"Harvest season: {self.harvest_season}")
        print(f"Nutritional value: {self.nutritional_value}")


def ft_plant_types() -> None:
    flower = Flower("Lycoris", 22.1, 27, "Red", False)
    tree = Tree("Oak", 200.0, 365, 5.0)
    vegetable = Vegetable("Tomato", 5.0, 10, "April", 0)

    print("\n===== Flower")
    flower.show()
    flower.bloom()
    flower.show()
    flower.bloom()
    flower.show()

    print("\n===== Tree")
    tree.show()
    tree.shade()

    print("\n===== Vegetable")
    vegetable.show()
    vegetable.grow(20)
    vegetable.show()


if __name__ == "__main__":
    print("===== Garden Plant Types =====")
    ft_plant_types()
