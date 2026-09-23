class GardenError(Exception):
    def __init__(self, message="Unknown garden error"):
        self.message = message
        super().__init__(self.message)


class PlantError(GardenError):
    def __init__(self, message="Unknown plant error"):
        self.message = message
        super().__init__(self.message)


def water_plant(plant_name: str):
    x = plant_name.capitalize()
    if x == plant_name:
        print(f"Watering {plant_name}: [OK]")
    else:
        raise PlantError(f"Invalid plant name to water: '{plant_name}'")


def test_watering_system(veg_list):
    print("Opening watering system")
    try:
        for veg in (veg_list):
            water_plant(veg)
    except PlantError as e:
        print(f"Caught PlantError: {e}")
        print(".. ending tests and returning to main")
        return
    finally:
        print("Closing watering system")


if __name__ == "__main__":
    list1 = ["Tomato", "Lettuce", "Carrots"]
    list2 = ["Tomato", "lettuce", "Carrots"]
    print("=== Garden Watering System ===")
    print("\nTesting valid plants...")
    test_watering_system(list1)
    print("\nTesting invalid plants...")
    test_watering_system(list2)
    print("\nCleanup always happens, even with errors!")
