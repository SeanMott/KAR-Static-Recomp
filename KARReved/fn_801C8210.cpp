//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_collideWithStat?.hpp"



void fn_801C8210(PPC::Runtime::GCContext* context)
{
/*801C8210 001C5010*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C8214 001C5014*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C8218 001C5018*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C821C 001C501C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C8220 001C5020*/ PPC::Runtime::ASM::bl(fn_collideWithStat?);
/*801C8224 001C5024*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C8228 001C5028*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C822C 001C502C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C8230 001C5030*/ PPC::Runtime::ASM::blr();
}