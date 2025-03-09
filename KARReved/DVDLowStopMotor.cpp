//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSCreateAlarm.hpp"
#include "AlarmHandlerForTimeout.hpp"
#include "AlarmHandlerForTimeout.hpp"
#include "OSSetAlarm.hpp"



void DVDLowStopMotor(PPC::Runtime::GCContext* context)
{
/*803C49FC 003C17FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C4A00 003C1800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C4A04 003C1804*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C4A08 003C1808*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803C4A0C 003C180C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C4A10 003C1810*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C4A14 003C1814*/ PPC::Runtime::ASM::stw(context->r3, Callback_805DDD48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4A18 003C1818*/ PPC::Runtime::ASM::lis(context->r3, 0xcc00);
/*803C4A1C 003C181C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x6000);
/*803C4A20 003C1820*/ PPC::Runtime::ASM::stw(context->r0, StopAtNextInt_805DDD40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C4A24 003C1824*/ PPC::Runtime::ASM::lis(context->r0, 0xe300);
/*803C4A28 003C1828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6008, context->r3));
/*803C4A2C 003C182C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803C4A30 003C1830*/ PPC::Runtime::ASM::lis(context->r3, AlarmForTimeout_8056CBA8 @ Get_MemoryOffset_HighBit);
/*803C4A34 003C1834*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*803C4A38 003C1838*/ PPC::Runtime::ASM::lis(context->r4, 0x8000);
/*803C4A3C 003C183C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, AlarmForTimeout_8056CBA8 @ Get_MemoryOffset_LowBit);
/*803C4A40 003C1840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r4));
/*803C4A44 003C1844*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803C4A48 003C1848*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 2);
/*803C4A4C 003C184C*/ PPC::Runtime::ASM::mulli(context->r30, context->r0, 0xa);
/*803C4A50 003C1850*/ PPC::Runtime::ASM::bl(OSCreateAlarm);
/*803C4A54 003C1854*/ PPC::Runtime::ASM::lis(context->r3, AlarmHandlerForTimeout @ Get_MemoryOffset_HighBit);
/*803C4A58 003C1858*/ PPC::Runtime::ASM::addi(context->r7, context->r3, AlarmHandlerForTimeout @ Get_MemoryOffset_LowBit);
/*803C4A5C 003C185C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*803C4A60 003C1860*/ PPC::Runtime::ASM::addi(context->r6, context->r30, 0x0);
/*803C4A64 003C1864*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803C4A68 003C1868*/ PPC::Runtime::ASM::bl(OSSetAlarm);
/*803C4A6C 003C186C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803C4A70 003C1870*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C4A74 003C1874*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C4A78 003C1878*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803C4A7C 003C187C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803C4A80 003C1880*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C4A84 003C1884*/ PPC::Runtime::ASM::blr();
}