//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "__OSGetSystemTime.hpp"
#include "OSCreateAlarm.hpp"
#include "AlarmHandlerForTimeout.hpp"
#include "AlarmHandlerForTimeout.hpp"
#include "OSSetAlarm.hpp"
#include "OSCreateAlarm.hpp"
#include "AlarmHandlerForTimeout.hpp"
#include "AlarmHandlerForTimeout.hpp"
#include "OSSetAlarm.hpp"



void fn_Read(PPC::Runtime::GCContext* context)
{
/*803C4470 003C1270*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C4474 003C1274*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C4478 003C1278*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C447C 003C127C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803C4480 003C1280*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C4484 003C1284*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C4488 003C1288*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*803C448C 003C128C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C4490 003C1290*/ PPC::Runtime::ASM::addi(context->r29, context->r4, 0x0);
/*803C4494 003C1294*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C4498 003C1298*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x0);
/*803C449C 003C129C*/ PPC::Runtime::ASM::stw(context->r0, StopAtNextInt_805DDD40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C44A0 003C12A0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C44A4 003C12A4*/ PPC::Runtime::ASM::stw(context->r6, Callback_805DDD48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C44A8 003C12A8*/ PPC::Runtime::ASM::lis(context->r6, CommandList_8056CB40 @ Get_MemoryOffset_HighBit);
/*803C44AC 003C12AC*/ PPC::Runtime::ASM::addi(context->r31, context->r6, CommandList_8056CB40 @ Get_MemoryOffset_LowBit);
/*803C44B0 003C12B0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDD80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C44B4 003C12B4*/ PPC::Runtime::ASM::bl(__OSGetSystemTime);
/*803C44B8 003C12B8*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDD7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C44BC 003C12BC*/ PPC::Runtime::ASM::lis(context->r4, 0xcc00);
/*803C44C0 003C12C0*/ PPC::Runtime::ASM::lis(context->r0, 0xa0);
/*803C44C4 003C12C4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDD78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C44C8 003C12C8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x6000);
/*803C44CC 003C12CC*/ PPC::Runtime::ASM::lis(context->r3, 0xa800);
/*803C44D0 003C12D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803C44D4 003C12D4*/ PPC::Runtime::ASM::srwi(context->r3, context->r30, 2);
/*803C44D8 003C12D8*/ PPC::Runtime::ASM::cmplw(context->r29, context->r0);
/*803C44DC 003C12DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*803C44E0 003C12E0*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*803C44E4 003C12E4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*803C44E8 003C12E8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*803C44EC 003C12EC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*803C44F0 003C12F0*/ PPC::Runtime::ASM::stw(context->r29, STRUCT_BYTE4_COUNT_1805DDD44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C44F4 003C12F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*803C44F8 003C12F8*/ PPC::Runtime::ASM::ble(.L_803C4530);
/*803C44FC 003C12FC*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803C4500 003C1300*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803C4504 003C1304*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x68);
/*803C4508 003C1308*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*803C450C 003C130C*/ PPC::Runtime::ASM::mulli(context->r30, context->r0, 0x14);
/*803C4510 003C1310*/ PPC::Runtime::ASM::bl(OSCreateAlarm);
/*803C4514 003C1314*/ PPC::Runtime::ASM::lis(context->r3, AlarmHandlerForTimeout @ Get_MemoryOffset_HighBit);
/*803C4518 003C1318*/ PPC::Runtime::ASM::addi(context->r7, context->r3, AlarmHandlerForTimeout @ Get_MemoryOffset_LowBit);
/*803C451C 003C131C*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x0);
/*803C4520 003C1320*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x68);
/*803C4524 003C1324*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803C4528 003C1328*/ PPC::Runtime::ASM::bl(OSSetAlarm);
/*803C452C 003C132C*/ PPC::Runtime::ASM::b(.L_803C4560);
RUNTIME_PPC_JUMP_LABEL(.L_803C4530, 0x803C4530) //this is a jump label
/*803C4530 003C1330*/ PPC::Runtime::ASM::lis(context->r3, 0x8000);
/*803C4534 003C1334*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r3));
/*803C4538 003C1338*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x68);
/*803C453C 003C133C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*803C4540 003C1340*/ PPC::Runtime::ASM::mulli(context->r30, context->r0, 0xa);
/*803C4544 003C1344*/ PPC::Runtime::ASM::bl(OSCreateAlarm);
/*803C4548 003C1348*/ PPC::Runtime::ASM::lis(context->r3, AlarmHandlerForTimeout @ Get_MemoryOffset_HighBit);
/*803C454C 003C134C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, AlarmHandlerForTimeout @ Get_MemoryOffset_LowBit);
/*803C4550 003C1350*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x0);
/*803C4554 003C1354*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x68);
/*803C4558 003C1358*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803C455C 003C135C*/ PPC::Runtime::ASM::bl(OSSetAlarm);
RUNTIME_PPC_JUMP_LABEL(.L_803C4560, 0x803C4560) //this is a jump label
/*803C4560 003C1360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803C4564 003C1364*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803C4568 003C1368*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803C456C 003C136C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C4570 003C1370*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803C4574 003C1374*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803C4578 003C1378*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C457C 003C137C*/ PPC::Runtime::ASM::blr();
}