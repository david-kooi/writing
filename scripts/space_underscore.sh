# Change spaces and commas to underscore
# Of all files in directory
space_to_underscore(){
	rename "s/( )|(, )/_/g" *
}

space_to_underscore 
