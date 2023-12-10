#used this to rename directories in my repositories [one-time]
for dir in */; do
    mv "$dir" "c-${dir%/}"
done
