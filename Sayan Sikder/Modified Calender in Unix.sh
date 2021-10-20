# Shell Script to Enhance the Calendar to Accept MM, MMM, YYYY
# using ncal command

# check whether arguments are passed or not
if [ $# -eq 0 ]
then

        # if arguments are not passed then display this
        echo "Invalid Arguments"  
        
        # exit the program
        exit 
fi 

if [ $# -eq 2 ]    # if 2 arguments are passed
then

    # if argument 1 is greater than 12 or argument 2 is 
    # greater than 2021
    if [ $1 -gt 12 -o $2 -gt 2021 ]     
    then
    
        # then display invalid month or year
        echo "invalid Year or month"    
        
    # else display calendar of the specified month and year    
    else
        ncal $1 $2    
    fi
else if [ $# -eq 1 ] # if only one argument is passed then
then
    if [  $1 -gt 12 ]    # if argument is greater than 12
    then
        cal $1 # display calendar of specified year
    else     # else display calendar of specified month
        case $1 in #start switch case
            01) m = jan;;
            02) m = feb;;
            03) m = mar;;
            04) m = apr;;
            05) m = may;;
            06) m = jun;;
            07) m = jul;;
            08) m = aug;;
            09) m = sep;;
            10) m = oct;;
            11) m = nov;;
            12) m = dec;;
        esac # end switch case
        echo \" Calander for $1 Month : \"
        ncal -m $1 # display calendar of specified month using -m

    fi
fi
fi
#end if
