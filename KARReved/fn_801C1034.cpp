//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F39C.hpp"



void fn_801C1034(PPC::Runtime::GCContext* context)
{
/*801C1034 001BDE34*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1038 001BDE38*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C103C 001BDE3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1040 001BDE40*/ PPC::Runtime::ASM::bl(fn_8019F39C);
/*801C1044 001BDE44*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1048 001BDE48*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C104C 001BDE4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1050 001BDE50*/ PPC::Runtime::ASM::blr();
}