install(
    TARGETS median-sorted-arrays_exe
    RUNTIME COMPONENT median-sorted-arrays_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
