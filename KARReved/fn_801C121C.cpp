//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F3FC.hpp"



void fn_801C121C(PPC::Runtime::GCContext* context)
{
/*801C121C 001BE01C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1220 001BE020*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1224 001BE024*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1228 001BE028*/ PPC::Runtime::ASM::bl(fn_8019F3FC);
/*801C122C 001BE02C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1230 001BE030*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1234 001BE034*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1238 001BE038*/ PPC::Runtime::ASM::blr();
}