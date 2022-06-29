; Attributes
; module declaration
(attribute
  name: (atom) @keyword
  (arguments (atom) @module)
 (#match? @keyword "(module|behaviou?r)"))

(attribute
  name: (atom) @keyword
  (arguments
    .
    (atom) @module)
 (#eq? @keyword "import"))

(attribute
  name: (atom) @keyword
  (arguments
    .
    (atom) @type
    [
      (tuple)
      (tuple (atom) @property)
      (tuple
        (binary_operator
          left: (atom) @property
          operator: ["=" "::"]))
      (tuple
        (binary_operator
          left:
            (binary_operator
              left: (atom) @property
              operator: "=")
          operator: "::"))
    ])
 (#eq? @keyword "record"))

(attribute
  name: (atom) @keyword
  (arguments
    .
    [
      (atom) @constant
      (variable) @constant
      (call
        function:
          [(variable) (atom)] @keyword.directive)
    ])
 (#eq? @keyword "define"))

(attribute
  name: (atom) @keyword
  (arguments
    (_) @keyword.directive)
 (#match? @keyword "ifn?def"))

(attribute
  name: (atom) @keyword
  module: (atom) @module
 (#match? @keyword "(spec|callback)"))

(attribute
  name: (atom) @keyword
 (#eq? @keyword "compile"))

; Functions
(function_clause name: (atom) @function)
(call module: (atom) @module)
(call function: (atom) @function)
(stab_clause name: (atom) @function)
(function_capture module: (atom) @module)
(function_capture function: (atom) @function)

; Records

(record_content
  (binary_operator
    left: (atom) @property
    operator: "="))

(record field: (atom) @property)
(record name: (atom) @type)

; Keywords
(attribute name: (atom) @keyword)

["case" "fun" "if" "of" "when" "end" "receive" "try" "catch" "after" "maybe" "begin"] @keyword

; Operators
(binary_operator
  left: (atom) @function
  operator: "/"
  right: (integer) @number)

(binary_operator
  operator: ["orelse" "andalso"] @keyword.operator)

(binary_operator operator: _ @operator)
(unary_operator operator: _ @operator)
["/" ":" "#" "->"] @operator

(tripledot) @comment.discard

(comment) @comment

; Macros
(macro
  "?"+ @constant
  name: (_) @constant
  !arguments)

(macro
  "?"+ @keyword.directive
  name: (_) @keyword.directive)

; Comments
((variable) @comment.discard
 (#match? @comment.discard "^_"))

; Basic types
(variable) @variable
(atom) @string.special.symbol
(string) @string
(character) @constant

[
  (integer)
  (float)
] @number

; Punctuation
["," "." "-" ";"] @punctuation.delimiter
["(" ")" "{" "}" "[" "]" "<<" ">>"] @punctuation.bracket

; (ERROR) @error
