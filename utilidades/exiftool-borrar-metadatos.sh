# borrar linea de comandos
"clear"

# nombre carpeta
DIR_MEDIA="$PWD/../clases/clase-07/imagenes"

# extension de archivos
EXT_ORIGINAL="jpg"

# anunciar que script empieza
echo "start running " $PWD/$0

echo "looking for files with extension $EXT_ORIGINAL in $DIR_MEDIA/"

# check if directory exists
if [ -d "$DIR_MEDIA/" ];

# if directory exists then
then

  # announce directory exists
  echo "success, $DIR_MEDIA/ exists"

  find "$DIR_MEDIA" -iname "*.$EXT_ORIGINAL" | while read f
    do
      exiftool -all= -overwrite_original "$f"
      echo "formatted $f"
    done

else
  # announce directory does not exist
  echo "fail, $DIR_MEDIA/ does not exist"

# end of if statement for existence of directory
fi

# announce finished running script
echo "finished running " $PWD/$0
