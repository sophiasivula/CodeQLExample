output=$(g++ $PROG_NAME 2>&1)
if [[ $? != 0 ]]; then
    # There was an error, display the error in $output
    echo -e "Error:\n$output"
else
    # Compilation successfull
    ./a.out
fi