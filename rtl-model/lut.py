file_values = open("hex_coeffs.txt","r")
values_lines = file_values.readlines()
file_values.close()

file_lut = open("lut.vs","r")
lut_lines = file_lut.readlines()
a_cases = ""
b_cases = ""
c_cases = ""
text = ""
for line in lut_lines:
    if "7'h" not in line:
    	text += line
    if "begin a" in line:
        for line_values in values_lines:
    	    line_split = line_values.split()
    	    text += "        7'h"
    	    hex_to_string = "'h" + str(hex(int(line_split[1], 0)))[2:]
    	    bin_to_string = str(hex(int(line_split[0])))[2:]
    	    text += f"{bin_to_string} : a = {hex_to_string};\n"
    if "begin b" in line:
        for line_values in values_lines:
    	    line_split = line_values.split()
    	    text += "        7'h"
    	    hex_to_string = "'h" + str(hex(int(line_split[2], 0)))[2:]
    	    bin_to_string = str(hex(int(line_split[0])))[2:]
    	    text += f"{bin_to_string} : b = {hex_to_string};\n"
    if "begin c" in line:
        for line_values in values_lines:
    	    line_split = line_values.split()
    	    text += "        7'h"
    	    hex_to_string = "'h" + str(hex(int(line_split[3], 0)))[2:]
    	    bin_to_string = str(hex(int(line_split[0])))[2:]
    	    text += f"{bin_to_string} : c = {hex_to_string};\n"
file_lut.close()

file_lut = open("lut.vs","w")
file_lut.write(text)
file_lut.close()

