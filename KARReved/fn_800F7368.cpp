//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D8B40.hpp"



void fn_800F7368(PPC::Runtime::GCContext* context)
{
/*800F7368 000F4168*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F736C 000F416C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F7370 000F4170*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x64);
/*800F7374 000F4174*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F7378 000F4178*/ PPC::Runtime::ASM::bl(fn_800D8B40);
/*800F737C 000F417C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F7380 000F4180*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F7384 000F4184*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F7388 000F4188*/ PPC::Runtime::ASM::blr();
}