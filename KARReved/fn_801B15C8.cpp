//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801B15E8.hpp"



void fn_801B15C8(PPC::Runtime::GCContext* context)
{
/*801B15C8 001AE3C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B15CC 001AE3CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B15D0 001AE3D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B15D4 001AE3D4*/ PPC::Runtime::ASM::bl(fn_801B15E8);
/*801B15D8 001AE3D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B15DC 001AE3DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B15E0 001AE3E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B15E4 001AE3E4*/ PPC::Runtime::ASM::blr();
}