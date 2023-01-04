INTERFACE
SUBROUTINE AROINI_MFSHAL(PALP_PERT,PABUO,PBENTR,PBDETR,PCMF,PENTR_MF,PCRAD_MF,PENTR_DRY,&
 &          PDETR_DRY,PDETR_LUP,PKCF_MF,PKRC_MF,PTAUSIGMF,PPRES_UV,PFRAC_UP_MAX,&
 &          PALPHA_MF,PSIGMA_MF,PA1,PB,PC,PBETA1,PR,PLAMBDA,HMF_UPDRAFT,HMF_CLOUD,OMIXUV)

      USE PARKIND1, ONLY : JPRB
      USE YOMHOOK , ONLY : LHOOK, DR_HOOK

REAL(KIND=JPRB),   INTENT(IN)   :: PALP_PERT
REAL(KIND=JPRB),   INTENT(IN)   :: PABUO
REAL(KIND=JPRB),   INTENT(IN)   :: PBENTR
REAL(KIND=JPRB),   INTENT(IN)   :: PBDETR
REAL(KIND=JPRB),   INTENT(IN)   :: PCMF
REAL(KIND=JPRB),   INTENT(IN)   :: PENTR_MF
REAL(KIND=JPRB),   INTENT(IN)   :: PCRAD_MF
REAL(KIND=JPRB),   INTENT(IN)   :: PENTR_DRY
REAL(KIND=JPRB),   INTENT(IN)   :: PDETR_DRY
REAL(KIND=JPRB),   INTENT(IN)   :: PDETR_LUP
REAL(KIND=JPRB),   INTENT(IN)   :: PKCF_MF
REAL(KIND=JPRB),   INTENT(IN)   :: PKRC_MF
REAL(KIND=JPRB),   INTENT(IN)   :: PTAUSIGMF
REAL(KIND=JPRB),   INTENT(IN)   :: PPRES_UV
REAL(KIND=JPRB),   INTENT(IN)   :: PFRAC_UP_MAX
REAL(KIND=JPRB),   INTENT(IN)   :: PALPHA_MF
REAL(KIND=JPRB),   INTENT(IN)   :: PSIGMA_MF
REAL(KIND=JPRB),   INTENT(IN)   :: PA1
REAL(KIND=JPRB),   INTENT(IN)   :: PB
REAL(KIND=JPRB),   INTENT(IN)   :: PC
REAL(KIND=JPRB),   INTENT(IN)   :: PBETA1   
REAL(KIND=JPRB),   INTENT(IN)   :: PR
REAL(KIND=JPRB),   INTENT(IN)   :: PLAMBDA   
CHARACTER (LEN=4), INTENT(IN) :: HMF_UPDRAFT
CHARACTER (LEN=4), INTENT(IN) :: HMF_CLOUD
LOGICAL, INTENT(IN) :: OMIXUV
END SUBROUTINE AROINI_MFSHAL
END INTERFACE
