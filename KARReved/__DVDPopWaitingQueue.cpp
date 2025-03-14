//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void __DVDPopWaitingQueue(PPC::Runtime::GCContext* context)
{
/*803C7F14 003C4D14*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C7F18 003C4D18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803C7F1C 003C4D1C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803C7F20 003C4D20*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C7F24 003C4D24*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C7F28 003C4D28*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*803C7F2C 003C4D2C*/ PPC::Runtime::ASM::lis(context->r4, WaitingQueue_8056CCB8 @ Get_MemoryOffset_HighBit);
/*803C7F30 003C4D30*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803C7F34 003C4D34*/ PPC::Runtime::ASM::addi(context->r4, context->r4, WaitingQueue_8056CCB8 @ Get_MemoryOffset_LowBit);
/*803C7F38 003C4D38*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803C7F3C, 0x803C7F3C) //this is a jump label
/*803C7F3C 003C4D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803C7F40 003C4D40*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*803C7F44 003C4D44*/ PPC::Runtime::ASM::beq(.L_803C7F8C);
/*803C7F48 003C4D48*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C7F4C 003C4D4C*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803C7F50 003C4D50*/ PPC::Runtime::ASM::lis(context->r4, WaitingQueue_8056CCB8 @ Get_MemoryOffset_HighBit);
/*803C7F54 003C4D54*/ PPC::Runtime::ASM::slwi(context->r5, context->r31, 3);
/*803C7F58 003C4D58*/ PPC::Runtime::ASM::addi(context->r0, context->r4, WaitingQueue_8056CCB8 @ Get_MemoryOffset_LowBit);
/*803C7F5C 003C4D5C*/ PPC::Runtime::ASM::add(context->r5, context->r0, context->r5);
/*803C7F60 003C4D60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803C7F64 003C4D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C7F68 003C4D68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803C7F6C 003C4D6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C7F70 003C4D70*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803C7F74 003C4D74*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C7F78 003C4D78*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803C7F7C 003C4D7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803C7F80 003C4D80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C7F84 003C4D84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803C7F88 003C4D88*/ PPC::Runtime::ASM::b(.L_803C7FA0);
RUNTIME_PPC_JUMP_LABEL(.L_803C7F8C, 0x803C7F8C) //this is a jump label
/*803C7F8C 003C4D8C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*803C7F90 003C4D90*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*803C7F94 003C4D94*/ PPC::Runtime::ASM::bdnz(.L_803C7F3C);
/*803C7F98 003C4D98*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803C7F9C 003C4D9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803C7FA0, 0x803C7FA0) //this is a jump label
/*803C7FA0 003C4DA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803C7FA4 003C4DA4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803C7FA8 003C4DA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803C7FAC 003C4DAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C7FB0 003C4DB0*/ PPC::Runtime::ASM::blr();
}