import csv

# Prompt the user to enter the CSV file path
while True:
    csv_path = input("Enter the path to the CSV file: ")
    csv_path = csv_path.strip()
    try:
        # Try to open the CSV file
        with open(csv_path, newline='') as csvfile:
            # Read the CSV file using the csv module
            reader = csv.reader(csvfile, delimiter=',', quotechar='"')

            # Initialize a variable to store the table text
            table = ""

            # Loop over each row in the CSV file
            for row in reader:
                # Add the row to the table text, separating each cell with pipes
                table += "| " + " | ".join(row) + " |\n"

            # Print the table text
            file = open("readMeTemp.txt","w")
            # i assigned ["This is Lagos \n","This is Python \n","This is Fcc \n"] to #variable L, you can use any letter or word of your choice.
            # Variable are containers in which values can be stored.
            # The \n is placed to indicate the end of the line.
            table = "# CP\nCompetitive Programming\n#\n\n"+table
            file.writelines(table)
            file.close()
            
            break
    except FileNotFoundError:
        # If the file is not found, print an error message and try again
        print("File not found. Please try again.")
