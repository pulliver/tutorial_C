import sys

def main(args):
    animals: dict[str, str] = {
        'Alice': 'dog', 
        'Bob': 'cat', 
        'Charlie': 'dog', 
        'Diana': 'rabbit', 
        'Erwin': 'dog', 
        'Florence': 'cat'
    }
    pet_owner : dict[str, list[str]] = {}
    for chiave, valore in animals.items():
        if valore not in pet_owner:
            pet_owner[valore] = []
        pet_owner[valore].append(chiave)
    print(pet_owner)
    
#    print(animals)
    assert pet_owner == {
        'dog': ['Alice', 'Charlie', 'Erwin'], 
        'cat': ['Bob', 'Florence'], 
        'rabbit': ['Diana']
    }

    return 0


if __name__ == '__main__':
    sys.exit(main(sys.argv[1:]))
