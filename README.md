**README: Inverted Indexing in C**

**Overview:**
This project implements inverted indexing in the C programming language. Inverted indexing is a common technique used in information retrieval systems to efficiently store and retrieve documents based on their contents. This README aims to provide an understanding of the project structure, usage, and implementation details.

**Project Structure:**
- **main.c**: Contains the main functionality of the program, including indexing documents and performing searches.
- **inverted_index.h**: Header file containing function declarations and necessary data structures.
- **inverted_index.c**: Implementation file for functions declared in inverted_index.h.
- **utils.h**: Header file for utility functions.
- **utils.c**: Implementation file for utility functions.
- **sample_documents/**: Directory containing sample documents to be indexed.
- **build/**: Directory where compiled binaries are stored.
- **README.md**: This file, providing information about the project.

**Usage:**
1. **Compilation:**
   ```bash
   gcc main.c inverted_index.c utils.c -o inverted_index
   ```
2. **Indexing Documents:**
   ```bash
   ./inverted_index index <directory_path>
   ```
   - Replace `<directory_path>` with the path to the directory containing documents to be indexed.
3. **Searching:**
   ```bash
   ./inverted_index search <query>
   ```
   - Replace `<query>` with the search query.

**Implementation Details:**
- **Data Structures:**
  - **Inverted Index:** A data structure that maps terms (words) to the documents in which they occur. Implemented using a hash table or a balanced tree for efficient lookup.
  - **Document Index:** Stores information about each document, such as its ID and the frequency of terms it contains.
- **Indexing Process:**
  1. Iterate through each document in the specified directory.
  2. Tokenize the content of each document into terms.
  3. For each term, update the inverted index by adding the document ID to its posting list.
- **Search Process:**
  1. Tokenize the search query into terms.
  2. Retrieve the posting list for each term from the inverted index.
  3. Perform set operations (e.g., intersection or union) to find documents containing all or any of the terms in the query.
  4. Rank the documents based on relevance (optional).
- **Handling Large Datasets:**
  - Implement optimizations such as disk-based indexing or parallel processing to handle large datasets efficiently.
- **Error Handling:**
  - Ensure proper error handling for file I/O operations, memory allocation, and command-line arguments.

**Contributing:**
Contributions to this project are welcome. If you find any bugs or have suggestions for improvements, please feel free to open an issue or submit a pull request.

**Author:**
Divya Sirala - divyasirala@gmail.com
