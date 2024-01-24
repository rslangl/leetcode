install(
    TARGETS median_exe
    RUNTIME COMPONENT median_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
