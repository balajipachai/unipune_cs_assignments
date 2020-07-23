1. Retrieving information from a table

    - SELECT: The SELECT statement is used to pull information from a table. The general form of the statement is:

        SELECT `what_to_select` FROM `which_table` WHERE `conditions_to_satisfy`;

    - Limit Clause: The LIMIT `n` returns the first `n` rows of a result set.

2. DELETE: Delete is used to delete records from the table.
    - DELET FROM `table_name` WHERE `condition_to_satisfy`;

3. UPDATE: Update is used to modify a particular record.
    - UPDATE `table_name` SET `column_name = new_value` WHERE `condition_to_satisfy`;

4. Sorting Rows: For sorting result, an `ORDER BY` clause is used. The default sort order is ascending, to sort the rows in descending order use the keyword `DESC` to the name of the column you are sorting by.
    - SELECT name, birth FROM pet ORDER BY birth DESC;

5. Date and time functions
    - CURDATE() Returns the current date as a value in `YYYY-MM-DD` or `YYYYMMDD` format, depending on whether the function is uded in a string or numberic context.
    ```mysql
        Examples:
        mysql> SELECT CURDATE();
                -> '2008-06-13'
        mysql> SELECT CURDATE() + 0;
                -> 20080613

    ```
    - CURTIME() Returns the current time as a value in `HH:MM:SS` or `HHMMSS.uuuuuu` format, depending on whether the function is uded in a string or numberic context.
    ```mysql
        Examples:
        mysql> SELECT CURTIME();
                -> '23:50:26'
        mysql> SELECT CURTIME() + 0;
                -> 235026.000000

    ```
    - DATE(expr) Extracts the date part of the date or datetime expression expr.
    - DATEDIFF(expr1, expr2) Returns the date difference, only the date part is used calculating the difference.
    ```mysql
        Examples:
        mysql> SELECT DATEDIFF('2007-12-31 23:59:59','2007-12-30');
                -> 1
        mysql> SELECT DATEDIFF('2010-11-30 23:59:59','2010-12-31');
                -> -31

    ```
    - DAYNAME(date) Returns the day name for the provided date.
    ```mysql
        Examples:
        mysql> SELECT DAYNAME('2007-02-03');
                -> 'Saturday'

    ```
    - DAYOFMONTH(date) Returns the day of the month in the range 1 to 31.
    ```mysql
        Examples:
        mysql> SELECT DAYOFMONTH('2007-02-03');
                -> 3
    ```
    - DAYOFWEEK(date) Returns the index of the weekday (1 = Sunday, 2 = Monday, ... and so on)
    ```mysql
        Examples:
        mysql> SELECT DAYOFWEEK('2007-02-03');
                -> 7

    ```
    - DAYOFYEAR(date) Returns the day of the year in the range 1 to 366.
    ```mysql
        Examples:
        mysql> SELECT DAYOFYEAR('2007-02-03');
                -> 34

    ```
    - EXTRACT(unit from date) The function uses the same kinds of unit specifiers as DATE_ADD() or DATE_SUB(), but extracts parts from the date rather than performing date arithmetic. The unit can be YEAR, YEAR_MONTH, DAY_MINUTE, MICROSECOND
    ```mysql
        Examples:
        mysql> SELECT EXTRACT(YEAR FROM '2019-07-02');
                -> 2019
        mysql> SELECT EXTRACT(YEAR_MONTH FROM '2019-07-02 01:02:03');
                -> 201907
        mysql> SELECT EXTRACT(DAY_MINUTE FROM '2019-07-02 01:02:03');
                -> 20102
        mysql> SELECT EXTRACT(MICROSECOND
            ->                FROM '2003-01-02 10:30:00.000123');
                -> 123

    ```
    - MONTH(date) Returns the month for the date in the range 1 to 12.
    ```mysql
        Examples:
        mysql> SELECT MONTH('2008-02-03');
                -> 2

    ```
    - MONTHNAME(date) Returns the full name of the month for the date.
    ```mysql
        Examples:
        mysql> SELECT MONTHNAME('2008-02-03');
                -> 'February'

    ```

6. String Functions
    - TRIM: Removes the specified character either from the beginning or end of the string.
    ```mysql
        Examples:
        mysql> SELECT TRIM('  bar   ');
                -> 'bar'
        mysql> SELECT TRIM(LEADING 'x' FROM 'xxxbarxxx');
                -> 'barxxx'
        mysql> SELECT TRIM(BOTH 'x' FROM 'xxxbarxxx');
                -> 'bar'
        mysql> SELECT TRIM(TRAILING 'xyz' FROM 'barxxyz');
                -> 'barx'

    ```

    - SUBSTRING

        Examples:
        ```mysql
        mysql> SELECT SUBSTRING('Quadratically',5);
                -> 'ratically'
        mysql> SELECT SUBSTRING('foobarbar' FROM 4);
                -> 'barbar'
        mysql> SELECT SUBSTRING('Quadratically',5,6);
                -> 'ratica'
        mysql> SELECT SUBSTRING('Sakila', -3);
                -> 'ila'
        mysql> SELECT SUBSTRING('Sakila', -5, 3);
                -> 'aki'
        mysql> SELECT SUBSTRING('Sakila' FROM -4 FOR 2);
                -> 'ki'
        ```

7. List of functions available in MySql
    - Bit Functions
    ```mysql
        topics:
        &
        <<
        >>
        BIT_COUNT
        ^
        |
        ~

        mysql> help &
        Name: '&'
        Description:
        Syntax:
        &

        Bitwise AND.

        The result is an unsigned 64-bit integer.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT 29 & 15;
                -> 13

        mysql> help << 
        Name: '<<'
        Description:
        Syntax:
        <<

        Shifts a longlong (BIGINT) number to the left.

        The result is an unsigned 64-bit integer. The value is truncated to 64
        bits. In particular, if the shift count is greater or equal to the
        width of an unsigned 64-bit number, the result is zero.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT 1 << 2;
                -> 4

        mysql> help >>
        Name: '>>'
        Description:
        Syntax:
        >>

        Shifts a longlong (BIGINT) number to the right.

        The result is an unsigned 64-bit integer. The value is truncated to 64
        bits. In particular, if the shift count is greater or equal to the
        width of an unsigned 64-bit number, the result is zero.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT 4 >> 2;
                -> 1

        mysql> help BIT_COUNT
        Name: 'BIT_COUNT'
        Description:
        Syntax:
        BIT_COUNT(N)

        Returns the number of bits that are set in the argument N as an
        unsigned 64-bit integer, or NULL if the argument is NULL.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT BIT_COUNT(29), BIT_COUNT(b'101010');
                -> 4, 3

        mysql> help ^
        Name: '^'
        Description:
        Syntax:
        ^

        Bitwise XOR.

        The result is an unsigned 64-bit integer.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT 1 ^ 1;
                -> 0
        mysql> SELECT 1 ^ 0;
                -> 1
        mysql> SELECT 11 ^ 3;
                -> 8

        mysql> help | 
        Name: '|'
        Description:
        Syntax:
        |

        Bitwise OR.

        The result is an unsigned 64-bit integer.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT 29 | 15;
                -> 31

        mysql> help ~
        Name: '~'
        Description:
        Syntax:
        ~

        Invert all bits.

        The result is an unsigned 64-bit integer.

        URL: https://dev.mysql.com/doc/refman/5.7/en/bit-functions.html

        Examples:
        mysql> SELECT 5 & ~1;
                -> 4

    ```
    - Comparison Operators
    ```mysql
        topics:
        !=
        <
        <=
        <=>
        =
        >
        >=
        BETWEEN AND
        COALESCE
        GREATEST
        IN
        INTERVAL
        IS
        IS NOT
        IS NOT NULL
        IS NULL
        ISNULL
        LEAST
        NOT BETWEEN
        NOT IN

        mysql> help <=>
        Name: '<=>'
        Description:
        Syntax:
        <=>

        NULL-safe equal. This operator performs an equality comparison like the
        = operator, but returns 1 rather than NULL if both operands are NULL,
        and 0 rather than NULL if one operand is NULL.

        The <=> operator is equivalent to the standard SQL IS NOT DISTINCT FROM
        operator.

        URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

        Examples:
        mysql> SELECT 1 <=> 1, NULL <=> NULL, 1 <=> NULL;
                -> 1, 1, 0
        mysql> SELECT 1 = 1, NULL = NULL, 1 = NULL;
                -> 1, NULL, NULL

        mysql> help COALESCE
        Name: 'COALESCE'
        Description:
        Syntax:
        COALESCE(value,...)

        Returns the first non-NULL value in the list, or NULL if there are no
        non-NULL values.

        The return type of COALESCE() is the aggregated type of the argument
        types.

        URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

        Examples:
        mysql> SELECT COALESCE(NULL,1);
                -> 1
        mysql> SELECT COALESCE(NULL,NULL,NULL);
                -> NULL

        mysql> help BETWEEN AND
        Name: 'BETWEEN AND'
        Description:
        Syntax:
        expr BETWEEN min AND max

        If expr is greater than or equal to min and expr is less than or equal
        to max, BETWEEN returns 1, otherwise it returns 0. This is equivalent
        to the expression (min <= expr AND expr <= max) if all the arguments
        are of the same type. Otherwise type conversion takes place according
        to the rules described in
        https://dev.mysql.com/doc/refman/5.7/en/type-conversion.html, but
        applied to all the three arguments.

        URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

        Examples:
        mysql> SELECT 2 BETWEEN 1 AND 3, 2 BETWEEN 3 and 1;
                -> 1, 0
        mysql> SELECT 1 BETWEEN 2 AND 3;
                -> 0
        mysql> SELECT 'b' BETWEEN 'a' AND 'c';
                -> 1
        mysql> SELECT 2 BETWEEN 2 AND '3';
                -> 1
        mysql> SELECT 2 BETWEEN 2 AND 'x-3';
                -> 0

        mysql> help INTERVAL
        Name: 'INTERVAL'
        Description:
        Syntax:
        INTERVAL(N,N1,N2,N3,...)

        Returns 0 if N < N1, 1 if N < N2 and so on or -1 if N is NULL. All
        arguments are treated as integers. It is required that N1 < N2 < N3 <
        ... < Nn for this function to work correctly. This is because a binary
        search is used (very fast).

        URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

        Examples:
        mysql> SELECT INTERVAL(23, 1, 15, 17, 30, 44, 200);
                -> 3
        mysql> SELECT INTERVAL(10, 1, 10, 100, 1000);
                -> 2
        mysql> SELECT INTERVAL(22, 23, 30, 44, 200);
                -> 0

        mysql> help IS NULL
        Name: 'IS NULL'
        Description:
        Syntax:
        IS NULL

        Tests whether a value is NULL.

        URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

        Examples:
        mysql> SELECT 1 IS NULL, 0 IS NULL, NULL IS NULL;
                -> 0, 0, 1

        mysql> help ISNULL
        Name: 'ISNULL'
        Description:
        Syntax:
        ISNULL(expr)

        If expr is NULL, ISNULL() returns 1, otherwise it returns 0.

        URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

        Examples:
        mysql> SELECT ISNULL(1+1);
                -> 0
        mysql> SELECT ISNULL(1/0);
                -> 1

    mysql> help least
    Name: 'LEAST'
    Description:
    Syntax:
    LEAST(value1,value2,...)

    With two or more arguments, returns the smallest (minimum-valued)
    argument. The arguments are compared using the following rules:

    o If any argument is NULL, the result is NULL. No comparison is needed.

    o If all arguments are integer-valued, they are compared as integers.

    o If at least one argument is double precision, they are compared as
    double-precision values. Otherwise, if at least one argument is a
    DECIMAL value, they are compared as DECIMAL values.

    o If the arguments comprise a mix of numbers and strings, they are
    compared as numbers.

    o If any argument is a nonbinary (character) string, the arguments are
    compared as nonbinary strings.

    o In all other cases, the arguments are compared as binary strings.

    The return type of LEAST() is the aggregated type of the comparison
    argument types.

    URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

    Examples:
    mysql> SELECT LEAST(2,0);
            -> 0
    mysql> SELECT LEAST(34.0,3.0,5.0,767.0);
            -> 3.0
    mysql> SELECT LEAST('B','A','C');
            -> 'A'


    mysql> help not between
    Name: 'NOT BETWEEN'
    Description:
    Syntax:
    expr NOT BETWEEN min AND max

    This is the same as NOT (expr BETWEEN min AND max).

    URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html

    mysql> help not in
    Name: 'NOT IN'
    Description:
    Syntax:
    expr NOT IN (value,...)

    This is the same as NOT (expr IN (value,...)).

    URL: https://dev.mysql.com/doc/refman/5.7/en/comparison-operators.html


    ```
    - Control Flow Functions
    ```mysql
        topics:
        CASE OPERATOR
        IF FUNCTION
        IFNULL
        NULLIF

        mysql> help CASE OPERATOR
        Name: 'CASE OPERATOR'
        Description:
        Syntax:
        CASE value WHEN [compare_value] THEN result [WHEN [compare_value] THEN
        result ...] [ELSE result] END

        CASE WHEN [condition] THEN result [WHEN [condition] THEN result ...]
        [ELSE result] END

        Examples:
        mysql> SELECT CASE 1 WHEN 1 THEN 'one'
            ->     WHEN 2 THEN 'two' ELSE 'more' END;
                -> 'one'
        mysql> SELECT CASE WHEN 1>0 THEN 'true' ELSE 'false' END;
                -> 'true'
        mysql> SELECT CASE BINARY 'B'
            ->     WHEN 'a' THEN 1 WHEN 'b' THEN 2 END;
                -> NULL


        mysql> help IF FUNCTION
        Name: 'IF FUNCTION'
        Description:
        Syntax:
        IF(expr1,expr2,expr3)

        If expr1 is TRUE (expr1 <> 0 and expr1 <> NULL), IF() returns expr2.
        Otherwise, it returns expr3.

        Examples:
        mysql> SELECT IF(1>2,2,3);
                -> 3
        mysql> SELECT IF(1<2,'yes','no');
                -> 'yes'
        mysql> SELECT IF(STRCMP('test','test1'),'no','yes');
                -> 'no'

        
        mysql> help IFNULL
        Name: 'IFNULL'
        Description:
        Syntax:
        IFNULL(expr1,expr2)

        If expr1 is not NULL, IFNULL() returns expr1; otherwise it returns
        expr2.

        URL: https://dev.mysql.com/doc/refman/5.7/en/control-flow-functions.html

        Examples:
        mysql> SELECT IFNULL(1,0);
                -> 1
        mysql> SELECT IFNULL(NULL,10);
                -> 10
        mysql> SELECT IFNULL(1/0,10);
                -> 10
        mysql> SELECT IFNULL(1/0,'yes');
                -> 'yes'


        mysql> help nullif
        Name: 'NULLIF'
        Description:
        Syntax:
        NULLIF(expr1,expr2)

        Returns NULL if expr1 = expr2 is true, otherwise returns expr1. This is
        the same as CASE WHEN expr1 = expr2 THEN NULL ELSE expr1 END.

        The return value has the same type as the first argument.

        URL: https://dev.mysql.com/doc/refman/5.7/en/control-flow-functions.html

        Examples:
        mysql> SELECT NULLIF(1,1);
                -> NULL
        mysql> SELECT NULLIF(1,2);
                -> 1

    ```

    - Date and Time Functions  `On the mysql prompt type help Date and Time Functions` you will get a list of available functions
    - Encryption Functions
    ```mysql
        topics:
        AES_DECRYPT
        AES_ENCRYPT
        COMPRESS
        DECODE
        DES_DECRYPT
        DES_ENCRYPT
        ENCODE
        ENCRYPT
        MD5
        OLD_PASSWORD
        PASSWORD
        RANDOM_BYTES
        SHA1
        SHA2
        UNCOMPRESS
        UNCOMPRESSED_LENGTH
        VALIDATE_PASSWORD_STRENGTH

        USE `help topic name` to get more details about it
    ```
    - GROUP BY Functions and Modifiers
    ```mysql
        topics:
        AVG
        BIT_AND
        BIT_OR
        BIT_XOR
        COUNT
        COUNT DISTINCT
        GROUP_CONCAT
        JSON_ARRAYAGG
        JSON_OBJECTAGG
        MAX
        MIN
        STD
        STDDEV
        STDDEV_POP
        STDDEV_SAMP
        SUM
        VARIANCE
        VAR_POP
        VAR_SAMP
    ```
    - Information Functions
    ```mysql
        topics:
        BENCHMARK
        CHARSET
        COERCIBILITY
        COLLATION
        CONNECTION_ID
        CURRENT_USER
        DATABASE
        FOUND_ROWS
        LAST_INSERT_ID
        ROW_COUNT
        SCHEMA
        SESSION_USER
        SYSTEM_USER
        USER
        VERSION
    ```
    - Locking Functions
    ```mysql
        topics:
        GET_LOCK
        IS_FREE_LOCK
        IS_USED_LOCK
        RELEASE_ALL_LOCKS
        RELEASE_LOCK
    ```
    - Logical Operators
    ```mysql
        topics:
        !
        AND
        ASSIGN-EQUAL
        ASSIGN-VALUE
        OR
        XOR
    ```
    - Miscellaneous Functions
    ```mysql
        topics:
        ANY_VALUE
        DEFAULT
        INET6_ATON
        INET6_NTOA
        INET_ATON
        INET_NTOA
        IS_IPV4
        IS_IPV4_COMPAT
        IS_IPV4_MAPPED
        IS_IPV6
        MASTER_POS_WAIT
        NAME_CONST
        SLEEP
        UUID
        UUID_SHORT
        VALUES
    ```
    - Numeric Functions
    ```mysql
        topics:
        %
        *
        +
        - BINARY
        - UNARY
        /
        ABS
        ACOS
        ASIN
        ATAN
        ATAN2
        CEIL
        CEILING
        CONV
        COS
        COT
        CRC32
        DEGREES
        DIV
        EXP
        FLOOR
        LN
        LOG
        LOG10
        LOG2
        MOD
        PI
        POW
        POWER
        RADIANS
        RAND
        ROUND
        SIGN
        SIN
        SQRT
        TAN
        TRUNCATE
    ```
    - Spatial Functions
    ```mysql
        categories:
        Geometry Constructors
        Geometry Property Functions
        Geometry Relation Functions
        GeometryCollection Property Functions
        LineString Property Functions
        MBR Functions
        Point Property Functions
        Polygon Property Functions
        WKB Functions
        WKT Functions
    ```
    - String Functions
    ```mysql
        topics:
        ASCII
        BIN
        BINARY OPERATOR
        BIT_LENGTH
        CAST
        CHAR FUNCTION
        CHARACTER_LENGTH
        CHAR_LENGTH
        CONCAT
        CONCAT_WS
        CONVERT
        ELT
        EXPORT_SET
        EXTRACTVALUE
        FIELD
        FIND_IN_SET
        FORMAT
        FROM_BASE64
        HEX
        INSERT FUNCTION
        INSTR
        LCASE
        LEFT
        LENGTH
        LIKE
        LOAD_FILE
        LOCATE
        LOWER
        LPAD
        LTRIM
        MAKE_SET
        MATCH AGAINST
        MID
        NOT LIKE
        NOT REGEXP
        OCT
        OCTET_LENGTH
        ORD
        POSITION
        QUOTE
        REGEXP
        REPEAT FUNCTION
        REPLACE FUNCTION
        REVERSE
        RIGHT
        RPAD
        RTRIM
        SOUNDEX
        SOUNDS LIKE
        SPACE
        STRCMP
        SUBSTR
        SUBSTRING
        SUBSTRING_INDEX
        TO_BASE64
        TRIM
        UCASE
        UNHEX
        UPDATEXML
        UPPER
        WEIGHT_STRING
    ```

#### COMMAND TO LOAD DATA FROM FILE INTO TABLE

`LOAD DATA LOCAL INFILE 'path/to/file/.csv' INTO table branch FIELDS TERMINATED BY ',' (name, city)`