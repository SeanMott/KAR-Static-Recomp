//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80259F30.hpp"
#include "fn_80259F30.hpp"
#include "fn_80254D4C.hpp"



void fn_80259F04(PPC::Runtime::GCContext* context)
{
/*80259F04 00256D04*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80259F08 00256D08*/ PPC::Runtime::ASM::mflr(context->r0);
/*80259F0C 00256D0C*/ PPC::Runtime::ASM::lis(context->r4, fn_80259F30 @ Get_MemoryOffset_HighBit);
/*80259F10 00256D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259F14 00256D14*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80259F30 @ Get_MemoryOffset_LowBit);
/*80259F18 00256D18*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*80259F1C 00256D1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259F20 00256D20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80259F24 00256D24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259F28 00256D28*/ PPC::Runtime::ASM::blr();
}