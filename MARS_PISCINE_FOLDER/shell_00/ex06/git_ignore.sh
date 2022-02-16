find . -type f -print -exec git check-ignore {} + | xargs -I{} basename {}
