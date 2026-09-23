def garden_operations(operation_number):
    try:
        if operation_number == 0:
            int("abc")
        elif operation_number == 1:
            int(10 / 0)
        elif operation_number == 2:
            open("unknown.txt", "r")
        elif operation_number == 3:
            10 + "test"
        else:
            print("Operation completed succesfully")
            return

    except ValueError as e:
        print(f"Caught ValueError: {e}")
    except ZeroDivisionError as e:
        print(f"Caught ZeroDivisionError: {e}")
    except FileNotFoundError as e:
        print(f"Caught FileNotFoundError: {e}")
    except TypeError as e:
        print(f"Caught TypeError: {e}")


def test_error_types():
    print("\nTesting operation 0...")
    garden_operations(0)
    print("\nTesting operation 1...")
    garden_operations(1)
    print("\nTesting operation 2...")
    garden_operations(2)
    print("\nTesting operation 3...")
    garden_operations(3)
    print("\nTesting operation 4...")
    garden_operations(4)


if __name__ == "__main__":
    print("=== Garden Error Types Demo ===")
    test_error_types()
    print("\nAll error types tested succesfully")
