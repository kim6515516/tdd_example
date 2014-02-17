/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockAdcConductor.h"

typedef struct _CMOCK_AdcConductor_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_AdcConductor_Init_CALL_INSTANCE;

typedef struct _CMOCK_AdcConductor_Run_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_AdcConductor_Run_CALL_INSTANCE;

typedef struct _CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;

} CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE;

typedef struct _CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;

} CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE;

typedef struct _CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;

} CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE;

static struct MockAdcConductorInstance
{
  CMOCK_MEM_INDEX_TYPE AdcConductor_Init_CallInstance;
  CMOCK_MEM_INDEX_TYPE AdcConductor_Run_CallInstance;
  CMOCK_MEM_INDEX_TYPE AdcConductor_JustHereToTest_CallInstance;
  CMOCK_MEM_INDEX_TYPE AdcConductor_AlsoHereToTest_CallInstance;
  CMOCK_MEM_INDEX_TYPE AdcConductor_YetAnotherTest_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockAdcConductor_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.AdcConductor_Init_CallInstance, cmock_line, "Function 'AdcConductor_Init' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.AdcConductor_Run_CallInstance, cmock_line, "Function 'AdcConductor_Run' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.AdcConductor_JustHereToTest_CallInstance, cmock_line, "Function 'AdcConductor_JustHereToTest' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.AdcConductor_AlsoHereToTest_CallInstance, cmock_line, "Function 'AdcConductor_AlsoHereToTest' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.AdcConductor_YetAnotherTest_CallInstance, cmock_line, "Function 'AdcConductor_YetAnotherTest' called less times than expected.");
}

void MockAdcConductor_Init(void)
{
  MockAdcConductor_Destroy();
}

void MockAdcConductor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void AdcConductor_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcConductor_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcConductor_Init_CallInstance);
  Mock.AdcConductor_Init_CallInstance = CMock_Guts_MemNext(Mock.AdcConductor_Init_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'AdcConductor_Init' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
}

void AdcConductor_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcConductor_Init_CALL_INSTANCE));
  CMOCK_AdcConductor_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.AdcConductor_Init_CallInstance = CMock_Guts_MemChain(Mock.AdcConductor_Init_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
}

void AdcConductor_Run(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcConductor_Run_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcConductor_Run_CallInstance);
  Mock.AdcConductor_Run_CallInstance = CMock_Guts_MemNext(Mock.AdcConductor_Run_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'AdcConductor_Run' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
}

void AdcConductor_Run_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcConductor_Run_CALL_INSTANCE));
  CMOCK_AdcConductor_Run_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_Run_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.AdcConductor_Run_CallInstance = CMock_Guts_MemChain(Mock.AdcConductor_Run_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
}

bool AdcConductor_JustHereToTest(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcConductor_JustHereToTest_CallInstance);
  Mock.AdcConductor_JustHereToTest_CallInstance = CMock_Guts_MemNext(Mock.AdcConductor_JustHereToTest_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'AdcConductor_JustHereToTest' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  return cmock_call_instance->ReturnVal;
}

void AdcConductor_JustHereToTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE));
  CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_JustHereToTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.AdcConductor_JustHereToTest_CallInstance = CMock_Guts_MemChain(Mock.AdcConductor_JustHereToTest_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

bool AdcConductor_AlsoHereToTest(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcConductor_AlsoHereToTest_CallInstance);
  Mock.AdcConductor_AlsoHereToTest_CallInstance = CMock_Guts_MemNext(Mock.AdcConductor_AlsoHereToTest_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'AdcConductor_AlsoHereToTest' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  return cmock_call_instance->ReturnVal;
}

void AdcConductor_AlsoHereToTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE));
  CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_AlsoHereToTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.AdcConductor_AlsoHereToTest_CallInstance = CMock_Guts_MemChain(Mock.AdcConductor_AlsoHereToTest_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

bool AdcConductor_YetAnotherTest(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.AdcConductor_YetAnotherTest_CallInstance);
  Mock.AdcConductor_YetAnotherTest_CallInstance = CMock_Guts_MemNext(Mock.AdcConductor_YetAnotherTest_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'AdcConductor_YetAnotherTest' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  return cmock_call_instance->ReturnVal;
}

void AdcConductor_YetAnotherTest_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE));
  CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE* cmock_call_instance = (CMOCK_AdcConductor_YetAnotherTest_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  Mock.AdcConductor_YetAnotherTest_CallInstance = CMock_Guts_MemChain(Mock.AdcConductor_YetAnotherTest_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
}
