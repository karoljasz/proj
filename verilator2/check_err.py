file_values = open("a.txt","r")
values_lines = file_values.readlines()
file_values.close()

error = 0
for line in values_lines:
    line_split = line.split()
    if "!=" in line:
        error_tmp = float(line_split[8][:-1])
        if(error_tmp > error):
            error = error_tmp
print(error)

