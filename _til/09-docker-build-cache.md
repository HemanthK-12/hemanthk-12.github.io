---
cat: gotcha
title: "docker build cache breaks on different order in Dockerfile"
# wide: true
---
In Dockerfile, the order in which you write copy commands matter for faster build times. copy `package.json` and run `npm install` before copying the rest of the source code with `COPY . .`. then it only builds the file changes and doesn't build node_modules until there is a change in `package.json`

**bad**

```dockerfile
COPY . .
RUN npm install #builds node_modules everytime there is file change too, instead of only during dependencies change
```

**good** 

```dockerfile
COPY package.json package-lock.json ./ # only for dependencies
RUN npm install
COPY . .
```
