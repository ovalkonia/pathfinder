# Pathfinder

A utility written in C using [libmx](https://github.com/ovalkonia/libmx) to find shortest paths between islands. Input is read from a structured text file, and results are printed in a clear, block style format.

## Format
### Input

First line is the number of islands. Each line afterwards describes bridges between islands and has to follow the specific format:
`island_a-island_b,length`

- `island_a` - name of the first island  
- `island_b` - name of the second island  
- `length` - distance between them (integer)

### Output

The program prints info blocks for each shortest path found. Each block looks like this:

- **Path** shows the start and end islands.  
- **Route** shows all islands on the shortest path between them.  
- **Distance** shows the total length, broken down if there are intermediate islands.

There will be one such block for every unique shortest path.

## Usage
```bash
git clone https://github.com/ovalkonia/pathfinder.git
cd pathfinder
make
./pathfinder [filename]
```

## Example
### Input
`example.txt`
```
4
Greenland-Bananal,8
Fraser-Greenland,10
Bananal-Fraser,3
Java-Fraser,5
```

### Output
`./pathfinder example.txt`
```
========================================
Path: Greenland -> Bananal
Route: Greenland -> Bananal
Distance: 8
========================================
========================================
Path: Greenland -> Fraser
Route: Greenland -> Fraser
Distance: 10
========================================
========================================
Path: Greenland -> Java
Route: Greenland -> Fraser -> Java
Distance: 10 + 5 = 15
========================================
========================================
Path: Bananal -> Fraser
Route: Bananal -> Fraser
Distance: 3
========================================
========================================
Path: Bananal -> Java
Route: Bananal -> Fraser -> Java
Distance: 3 + 5 = 8
========================================
========================================
Path: Fraser -> Java
Route: Fraser -> Java
Distance: 5
========================================
```
