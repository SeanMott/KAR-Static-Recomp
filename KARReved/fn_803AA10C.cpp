//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803A8450.hpp"



void fn_803AA10C(PPC::Runtime::GCContext* context)
{
/*803AA10C 003A6F0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803AA110 003A6F10*/ PPC::Runtime::ASM::mflr(context->r0);
/*803AA114 003A6F14*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F7694 @ Get_MemoryOffset_HighBit);
/*803AA118 003A6F18*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803AA11C 003A6F1C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AA120 003A6F20*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804F7694 @ Get_MemoryOffset_LowBit);
/*803AA124 003A6F24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AA128 003A6F28*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803AA12C 003A6F2C*/ PPC::Runtime::ASM::bl(fn_803A8450);
/*803AA130 003A6F30*/ PPC::Runtime::ASM::lis(context->r4, lbl_804C0DB8 @ Get_MemoryOffset_HighBit);
/*803AA134 003A6F34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803AA138 003A6F38*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804C0DB8 @ Get_MemoryOffset_LowBit);
/*803AA13C 003A6F3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803AA140 003A6F40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803AA144 003A6F44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803AA148 003A6F48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803AA14C 003A6F4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803AA150 003A6F50*/ PPC::Runtime::ASM::blr();
}