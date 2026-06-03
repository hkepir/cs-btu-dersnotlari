--Alistirma #1
SELECT *
FROM students AS S
LEFT JOIN student_courses AS SC 
       ON S.student_id = SC.student_id
LEFT JOIN courses AS C 
       ON SC.course_id = C.course_id

--Alistirma #2
SELECT S.student_id, S.student_name, 
       C.course_id, C.course_name
FROM students AS S
LEFT JOIN student_courses AS SC 
       ON S.student_id = SC.student_id
LEFT JOIN courses AS C 
       ON SC.course_id = C.course_id
UNION

SELECT S.student_id, S.student_name, 
       C.course_id, C.course_name
FROM courses AS C
LEFT JOIN student_courses AS SC 
       ON C.course_id = SC.course_id
LEFT JOIN students AS S 
       ON SC.student_id = S.student_id;