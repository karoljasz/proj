file_values = open("coeffs.txt","r")
values_temp = file_values.readlines()
values_lines = values_temp[1:]
file_values.close()

file_lut = open("CoeffTable.hpp","r")
lut_lines = file_lut.readlines()
a_cases = ""
b_cases = ""
c_cases = ""
text = ""
for line in lut_lines:
    if "    {" not in line:
    	text += line
    if "//" in line:
        for line_values in values_lines:
    	    line_split = line_values.split()
    	    text += "    {"
    	    text += f"{line_split[0]},"
    	    text += f"{line_split[1]},"
    	    text += f"{line_split[2]},"
    	    text += f"{line_split[3]}" + "},\n"
text = text[:-3] + "}};"
file_lut.close()

file_lut = open("CoeffTable.hpp","w")
file_lut.write(text)
file_lut.close()

