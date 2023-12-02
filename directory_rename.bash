for dir in */; do
    mv "$dir" "c-${dir%/}"
done
