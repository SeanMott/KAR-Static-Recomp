//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_SIEnablePollingInterrupt.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_SIRegisterPollingHandler(PPC::Runtime::GCContext* context)
{
/*803E8EA0 003E5CA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E8EA4 003E5CA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E8EA8 003E5CA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803E8EAC 003E5CAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E8EB0 003E5CB0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E8EB4 003E5CB4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803E8EB8 003E5CB8*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803E8EBC 003E5CBC*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18056E8C8 @ Get_MemoryOffset_HighBit);
/*803E8EC0 003E5CC0*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*803E8EC4 003E5CC4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18056E8C8 @ Get_MemoryOffset_LowBit);
/*803E8EC8 003E5CC8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803E8ECC 003E5CCC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E8ED0 003E5CD0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E8ED4, 0x803E8ED4) //this is a jump label
/*803E8ED4 003E5CD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803E8ED8 003E5CD8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*803E8EDC 003E5CDC*/ PPC::Runtime::ASM::bne(.L_803E8EF0);
/*803E8EE0 003E5CE0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E8EE4 003E5CE4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E8EE8 003E5CE8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803E8EEC 003E5CEC*/ PPC::Runtime::ASM::b(.L_803E8F54);
RUNTIME_PPC_JUMP_LABEL(.L_803E8EF0, 0x803E8EF0) //this is a jump label
/*803E8EF0 003E5CF0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803E8EF4 003E5CF4*/ PPC::Runtime::ASM::bdnz(.L_803E8ED4);
/*803E8EF8 003E5CF8*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*803E8EFC 003E5CFC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803E8F00 003E5D00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E8F04, 0x803E8F04) //this is a jump label
/*803E8F04 003E5D04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803E8F08 003E5D08*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803E8F0C 003E5D0C*/ PPC::Runtime::ASM::bne(.L_803E8F3C);
/*803E8F10 003E5D10*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18056E8C8 @ Get_MemoryOffset_HighBit);
/*803E8F14 003E5D14*/ PPC::Runtime::ASM::slwi(context->r4, context->r5, 2);
/*803E8F18 003E5D18*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_18056E8C8 @ Get_MemoryOffset_LowBit);
/*803E8F1C 003E5D1C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*803E8F20 003E5D20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803E8F24 003E5D24*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803E8F28 003E5D28*/ PPC::Runtime::ASM::bl(fn_SIEnablePollingInterrupt);
/*803E8F2C 003E5D2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E8F30 003E5D30*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E8F34 003E5D34*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803E8F38 003E5D38*/ PPC::Runtime::ASM::b(.L_803E8F54);
RUNTIME_PPC_JUMP_LABEL(.L_803E8F3C, 0x803E8F3C) //this is a jump label
/*803E8F3C 003E5D3C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*803E8F40 003E5D40*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*803E8F44 003E5D44*/ PPC::Runtime::ASM::bdnz(.L_803E8F04);
/*803E8F48 003E5D48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803E8F4C 003E5D4C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803E8F50 003E5D50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803E8F54, 0x803E8F54) //this is a jump label
/*803E8F54 003E5D54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E8F58 003E5D58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803E8F5C 003E5D5C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803E8F60 003E5D60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803E8F64 003E5D64*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E8F68 003E5D68*/ PPC::Runtime::ASM::blr();
}