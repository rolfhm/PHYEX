INTERFACE

SUBROUTINE CONVECT_CHEM_TRANSPORT( CVPEXT, D, NSV, KCH, PCH1, PCH1C, &
KDPL, KPBL, KLCL, KCTL, KLFS, KDBL, &
PUMF, PUER, PUDR, PDMF, PDER, PDDR, &
PTIMEC, PDXDY, PMIXF, PLMASS, PWSUB,&
KFTSTEPS )
USE YOMHOOK , ONLY : LHOOK, DR_HOOK
USE MODD_CST, ONLY : XG
USE MODD_CONVPAREXT, ONLY : CONVPAREXT
USE MODD_NSV,  ONLY : NSV_T
USE MODD_DIMPHYEX, ONLY: DIMPHYEX_T
TYPE(CONVPAREXT),       INTENT(IN) :: CVPEXT
TYPE(DIMPHYEX_T),       INTENT(IN) :: D
TYPE(NSV_T),            INTENT(IN) :: NSV
INTEGER,                INTENT(IN) :: KCH
REAL,DIMENSION(D%NIT,D%NKT,KCH),INTENT(IN) :: PCH1
REAL,DIMENSION(D%NIT,D%NKT,KCH),INTENT(OUT):: PCH1C
INTEGER, DIMENSION(D%NIT), INTENT(IN) :: KDPL
INTEGER, DIMENSION(D%NIT), INTENT(IN) :: KPBL
INTEGER, DIMENSION(D%NIT), INTENT(IN) :: KLCL
INTEGER, DIMENSION(D%NIT), INTENT(IN) :: KCTL
INTEGER, DIMENSION(D%NIT), INTENT(IN) :: KLFS
INTEGER, DIMENSION(D%NIT), INTENT(IN) :: KDBL
REAL, DIMENSION(D%NIT,D%NKT), INTENT(IN) :: PUMF
REAL, DIMENSION(D%NIT,D%NKT), INTENT(IN) :: PUER
REAL, DIMENSION(D%NIT,D%NKT), INTENT(IN) :: PUDR
REAL, DIMENSION(D%NIT,D%NKT), INTENT(IN) :: PDMF
REAL, DIMENSION(D%NIT,D%NKT), INTENT(IN) :: PDER
REAL, DIMENSION(D%NIT,D%NKT), INTENT(IN) :: PDDR
REAL, DIMENSION(D%NIT),     INTENT(IN) :: PTIMEC
REAL,                      INTENT(IN) :: PDXDY
REAL, DIMENSION(D%NIT),     INTENT(IN) :: PMIXF
REAL, DIMENSION(D%NIT,D%NKT),INTENT(IN) :: PLMASS
REAL, DIMENSION(D%NIT,D%NKT),INTENT(IN) :: PWSUB
INTEGER,                INTENT(IN) :: KFTSTEPS
END SUBROUTINE CONVECT_CHEM_TRANSPORT

END INTERFACE
