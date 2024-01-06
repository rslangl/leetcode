install(
    TARGETS add-two-numbers_exe
    RUNTIME COMPONENT add-two-numbers_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
