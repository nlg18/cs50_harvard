-- (a log of any SQL queries executed to solve the mystery.)

-- coments contain info acquired from the query next above them



--crime was in 28th july at Chamberlin Street

sqlite3 fiftyville.db

SELECT description
FROM crime_scene_reports
WHERE day=28
AND month=7
AND street='Chamberlin Street';

--the theft was at 10:15, at the Courthouse
--there was interviews that mention the courthouse

SELECT transcript
FROM interviews
WHERE month=7
AND day=28;

--thief left the parking in 10 minutes range of the theft
--thief withdrawed money at fifer street in the morning before theft
--entre o roubo e a saida de carro, o ladrao ligou para alguem e conversou por menos de 10 min
--o ladrao pretendia deixar a cidade no primeiro voo do DIA SEGUINTE
--solicitou ao cumplice que comprasse logo a passagem




--fiftyville airport id = 8

SELECT id, destination_airport_id
FROM flights
WHERE origin_airport_id = 8
AND day=29
AND month=7
ORDER by hour, minute;

--flight id=36 airport destination=4 (London)

--====crossing suspects info=======

--personal suspects info:
--passport + bank account + license_plate + phone number

SELECT name 
FROM people
WHERE id IN (
    SELECT person_id 
    FROM bank_accounts
    WHERE account_number IN (
        SELECT account_number
        FROM atm_transactions
        WHERE month=7
        AND day=28
        AND atm_location LIKE 'Fifer Street'
        AND transaction_type LIKE 'withdraw'
    )
)
AND license_plate IN (
    SELECT license_plate
    FROM courthouse_security_logs
    WHERE day=28
    AND month=7
    AND activity='exit'
    AND hour=10
    AND minute<25
)
AND phone_number IN (
    SELECT caller
    FROM phone_calls
    WHERE month=7
    AND day=28
    AND duration<60
)
AND passport_number IN (
    SELECT passport_number
    FROM passengers
    WHERE flight_id = 36
);

-- >>result: Ernest

-- now the accomplice:

SELECT name 
FROM people
WHERE phone_number IN (
    SELECT receiver 
    FROM phone_calls
    WHERE caller IN (
        SELECT phone_number
        FROM people
        WHERE name = 'Ernest'
        AND day=28
        AND month=7
    )
    AND duration<60
);

-- >> Berthold


-- ====ANSWERS====
-- The THIEF is: Ernest
-- The thief ESCAPED TO: London
-- The ACCOMPLICE is: Berthold
--