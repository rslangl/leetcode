install(
    TARGETS two_sum_exe
    RUNTIME COMPONENT two_sum_Runtime
)

if(PROJECT_IS_TOP_LEVEL)
  include(CPack)
endif()
