//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019F37C.hpp"



void fn_801B09FC(PPC::Runtime::GCContext* context)
{
/*801B09FC 001AD7FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B0A00 001AD800*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B0A04 001AD804*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0A08 001AD808*/ PPC::Runtime::ASM::bl(fn_8019F37C);
/*801B0A0C 001AD80C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B0A10 001AD810*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B0A14 001AD814*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B0A18 001AD818*/ PPC::Runtime::ASM::blr();
}