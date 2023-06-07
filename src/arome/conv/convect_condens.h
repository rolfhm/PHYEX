INTERFACE

SUBROUTINE CONVECT_CONDENS( CST, D, CONVPAR,                        &
KICE, PPRES, PTHL, PRW, PRCO, PRIO, PZ, &
PT, PEW, PRC, PRI, PLV, PLS, PCPH   )
USE YOMHOOK , ONLY : LHOOK, DR_HOOK
USE MODD_CST, ONLY : CST_T
USE MODD_CONVPAR, ONLY : CONVPAR_T
USE MODD_DIMPHYEX, ONLY: DIMPHYEX_T
TYPE(CST_T),              INTENT(IN) :: CST
TYPE(DIMPHYEX_T),         INTENT(IN) :: D
TYPE(CONVPAR_T),          INTENT(IN) :: CONVPAR
INTEGER,                  INTENT(IN) :: KICE
REAL, DIMENSION(D%NIT),   INTENT(IN) :: PPRES
REAL, DIMENSION(D%NIT),   INTENT(IN) :: PTHL
REAL, DIMENSION(D%NIT),   INTENT(IN) :: PRW
REAL, DIMENSION(D%NIT),   INTENT(IN) :: PRCO
REAL, DIMENSION(D%NIT),   INTENT(IN) :: PRIO
REAL, DIMENSION(D%NIT),   INTENT(IN) :: PZ
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PT
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PRC
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PRI
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PLV
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PLS
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PCPH
REAL, DIMENSION(D%NIT),   INTENT(OUT):: PEW
END SUBROUTINE CONVECT_CONDENS

END INTERFACE
