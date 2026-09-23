def input_temperature(temp_str: str):
    print(f"Input data is '{temp_str}'")
    try:
        res = int(temp_str)
        print(f"Temperature is now {res}°C\n")
    except ValueError as e:
        print("Caught input_temperature error: ", end="")
        print(e)


def test_temperature():
    input_temperature("25")
    input_temperature("abc")


if __name__ == "__main__":
    print("=== Garden Temperature ===\n")
    test_temperature()
    print("\nAll tests completed - program didn’t crash!")
