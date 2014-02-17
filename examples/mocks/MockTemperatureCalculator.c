/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockTemperatureCalculator.h"

typedef struct _CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  float ReturnVal;
  uint16 Expected_millivolts;

} CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE;

static struct MockTemperatureCalculatorInstance
{
  CMOCK_MEM_INDEX_TYPE TemperatureCalculator_Calculate_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockTemperatureCalculator_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.TemperatureCalculator_Calculate_CallInstance, cmock_line, "Function 'TemperatureCalculator_Calculate' called less times than expected.");
}

void MockTemperatureCalculator_Init(void)
{
  MockTemperatureCalculator_Destroy();
}

void MockTemperatureCalculator_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

float TemperatureCalculator_Calculate(uint16 millivolts)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance = (CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TemperatureCalculator_Calculate_CallInstance);
  Mock.TemperatureCalculator_Calculate_CallInstance = CMock_Guts_MemNext(Mock.TemperatureCalculator_Calculate_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'TemperatureCalculator_Calculate' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_TEST_ASSERT_EQUAL_HEX16(cmock_call_instance->Expected_millivolts, millivolts, cmock_line, "Function 'TemperatureCalculator_Calculate' called with unexpected value for argument 'millivolts'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_TemperatureCalculator_Calculate(CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance, uint16 millivolts)
{
  cmock_call_instance->Expected_millivolts = millivolts;
}

void TemperatureCalculator_Calculate_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint16 millivolts, float cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE));
  CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE* cmock_call_instance = (CMOCK_TemperatureCalculator_Calculate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.TemperatureCalculator_Calculate_CallInstance = CMock_Guts_MemChain(Mock.TemperatureCalculator_Calculate_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_TemperatureCalculator_Calculate(cmock_call_instance, millivolts);
  cmock_call_instance->ReturnVal = cmock_to_return;
}
