class Plant:
    def __init__(self, name: str, height: float, days: int):
        self.name: str = name
        self._height: float = height
        self._days: int = days
        self.stats = self.PlantStats(self)
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
        self.stats.add_show()

    def grow(self, cm: float = 1.0) -> None:
        self._height = round(self._height + cm, 2)
        self.stats.add_growth()

    def age(self) -> None:
        self._days += 1
        self.stats.add_aging()

    def show_stats(self) -> None:
        self.stats.show_stats()

    @staticmethod
    def age_check(value: int) -> None:
        print("=== Check year-old")
        print(f"Is {value} days more than a year ? ", end="")
        if value > 365:
            print(" -> True")
        else:
            print(" -> False")

    @classmethod
    def create_anonymous(cls) -> "Plant":
        return cls("Unknown plant", 0, 0)

    class PlantStats:
        def __init__(self, plant: "Plant") -> None:
            self._growths: int = 0
            self._agings: int = 0
            self._shows: int = 0
            self._plant: Plant = plant

        def add_growth(self) -> None:
            self._growths += 1

        def add_aging(self) -> None:
            self._agings += 1

        def add_show(self) -> None:
            self._shows += 1

        def show_stats(self) -> None:
            print(f"[statistics for {self._plant.name}]\n"
                  f"Stats: {self._growths} grow, "
                  f"{self._agings} age, "
                  f"{self._shows} show")


class Flower(Plant):
    def __init__(self, name: str, height: float, days: int,
                 color: str) -> None:
        super().__init__(name=name, height=height, days=days)
        self.color: str = color
        self.bloomed: bool = False

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


class Seed(Flower):
    def __init__(self, name: str, height: float, days: int,
                 color: str) -> None:
        super().__init__(name=name, height=height, days=days, color=color)
        self.seeds: int = 0

    def bloom(self) -> None:
        if self.bloomed is False:
            self.bloomed = True
            self.seeds = 50
            print(f"[asking the {self.name} to bloom]")
        else:
            print(f"[{self.name} has already bloomed]")

    def show_seed(self) -> None:
        super().show()
        print(f"Seeds: {self.seeds}")


class Tree(Plant):
    def __init__(self, name: str, height: float, days: int,
                 trunk_diameter: float) -> None:
        super().__init__(name=name, height=height, days=days)
        self.trunk_diameter: float = trunk_diameter
        self._shades = 0

    def shade(self) -> None:
        print(f"[asking the {self.name} to produce shade]")
        print(f"Tree {self.name} now produces a shade of ", end="")
        print(f"{round(self._height, 2)}cm long and ", end="")
        print(f"{round(self.trunk_diameter, 2)}cm wide.")
        self._shades += 1

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter : {round(self.trunk_diameter, 2)}cm")

    def show_stats_tree(self) -> None:
        super().show_stats()
        print(f"{self._shades} shade")


def ft_garden_analytics() -> None:
    flower = Flower("Lycoris", 22.1, 366, "Red")
    tree = Tree("Oak", 200.0, 365, 5.0)
    seed = Seed("Sunflower", 80, 45, "Brown")
    anon = Plant.create_anonymous()

    flower.age_check(flower.get_age())

    print("\n===== Flower")
    flower.show()
    flower.show_stats()
    flower.bloom()
    flower.show()
    flower.show_stats()

    print("\n===== Tree")
    tree.show()
    tree.show_stats_tree()
    tree.shade()
    tree.show_stats_tree()

    print("\n===== Seed")
    seed.show()
    seed.show_stats()
    print(f"[make {seed.name} grow and age for 10 days, and bloom]")
    for _ in range(10):
        seed.grow(1.0)
        seed.age()
    seed.bloom()
    seed.show()
    seed.show_stats()

    print("\n===== Anonymous")
    anon.show()
    anon.show_stats()


if __name__ == "__main__":
    print("===== Garden statistics =====")
    ft_garden_analytics()
