install(
    TARGETS two-sum_exe
    RUNTIME COMPONENT two-sum_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
