WITH movies_id_with_kevin AS (
    SELECT movie_id
    FROM stars
    WHERE person_id IN (
        SELECT id
        FROM people
        WHERE birth = 1958 AND name = "Kevin Bacon"
    )
)


SELECT DISTINCT name
FROM people
WHERE id IN (
    SELECT person_id
    FROM stars
    WHERE movie_id IN movies_id_with_kevin
)
AND name != "Kevin Bacon"

GROUP BY people.name
;