//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DB278.hpp"



void fn_80081208(PPC::Runtime::GCContext* context)
{
/*80081208 0007E008*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8008120C 0007E00C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80081210 0007E010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80081214 0007E014*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80081218 0007E018*/ PPC::Runtime::ASM::bl(fn_801DB278);
/*8008121C 0007E01C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80081220 0007E020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80081224 0007E024*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80081228 0007E028*/ PPC::Runtime::ASM::blr();
}