INTERFACE
 SUBROUTINE ARO_ADJUST(CST, PARAM_ICEN, RAIN_ICE_PARAMN, TURBN, NEBN, &
 & KLON,KIDIA,KFDIA,KLEV, KRR,&
 & CMICRO, LHGT_QS, &
 & PTSTEP, PZZF, PRHODJ, PEXNREF, PRHODREF,&
 & PPABSM, PTHT, PRT, PSIGS,&
 & PMFCONV, PRC_MF, PRI_MF, PCF_MF,&
 & PTHS, PRS, PSRCS, PCLDFR, &
 & PICLDFR, PWCLDFR, PSSIO, PSSIU, PIFR,&
 & PHLC_HRC, PHLC_HCF, PHLI_HRI, PHLI_HCF, &
 & YDDDH,YDLDDH,YDMDDH,&
 & YSPP_PSIGQSAT,YSPP_ICE_CLD_WGT)

USE PARKIND1  ,ONLY : JPIM     ,JPRB
USE SPP_MOD_TYPE, ONLY : TSPP_CONFIG_TYPE
USE DDH_MIX, ONLY : TYP_DDH
USE YOMLDDH, ONLY : TLDDH
USE YOMMDDH, ONLY : TMDDH
USE MODD_CST, ONLY: CST_t
USE MODD_RAIN_ICE_PARAM_n, ONLY: RAIN_ICE_PARAM_t
USE MODD_PARAM_ICE_n, ONLY: PARAM_ICE_t
USE MODD_TURB_n, ONLY: TURB_t
USE MODD_NEB_n, ONLY: NEB_t

TYPE(CST_t),        INTENT(IN) :: CST
TYPE(PARAM_ICE_t),  INTENT(IN) :: PARAM_ICEN
TYPE(RAIN_ICE_PARAM_t), INTENT(IN) :: RAIN_ICE_PARAMN
TYPE(TURB_t), INTENT(IN) :: TURBN
TYPE(NEB_t), INTENT(IN) :: NEBN
INTEGER(KIND=JPIM), INTENT(IN) :: KLON
INTEGER(KIND=JPIM), INTENT(IN) :: KIDIA
INTEGER(KIND=JPIM), INTENT(IN) :: KFDIA
INTEGER(KIND=JPIM), INTENT(IN) :: KLEV
INTEGER(KIND=JPIM), INTENT(IN) :: KRR
CHARACTER(LEN=4), INTENT(IN) :: CMICRO
LOGICAL, INTENT(IN) :: LHGT_QS
REAL(KIND=JPRB), INTENT(IN) :: PTSTEP
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PZZF
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PRHODJ
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PEXNREF
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PRHODREF
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PPABSM
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PTHT
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV,KRR), INTENT(INOUT) :: PRT
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PSIGS
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PMFCONV
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(IN) :: PRC_MF,PRI_MF,PCF_MF
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(INOUT) :: PTHS
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV,KRR), INTENT(INOUT) :: PRS
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT) :: PSRCS
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(INOUT) :: PCLDFR
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT)  :: PICLDFR 
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT)  :: PWCLDFR
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT)  :: PSSIO 
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT)  :: PSSIU
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT)  :: PIFR
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT) :: PHLC_HRC
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT) :: PHLC_HCF
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT) :: PHLI_HRI
REAL(KIND=JPRB), DIMENSION(KLON,1,KLEV), INTENT(OUT) :: PHLI_HCF
TYPE(TYP_DDH)                          , INTENT(INOUT) :: YDDDH
TYPE(TLDDH)                          , INTENT(IN) :: YDLDDH
TYPE(TMDDH)                          , INTENT(IN) :: YDMDDH
TYPE(TSPP_CONFIG_TYPE), INTENT(INOUT) :: YSPP_PSIGQSAT,YSPP_ICE_CLD_WGT
END SUBROUTINE ARO_ADJUST
END INTERFACE
