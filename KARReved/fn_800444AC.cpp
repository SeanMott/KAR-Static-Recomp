//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801377E8.hpp"
#include "fn_8000B884.hpp"
#include "fn_80071D7C.hpp"
#include "fn_8005E5D0.hpp"



void fn_800444AC(PPC::Runtime::GCContext* context)
{
/*800444AC 000412AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800444B0 000412B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800444B4 000412B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800444B8 000412B8*/ PPC::Runtime::ASM::bl(fn_801377E8);
/*800444BC 000412BC*/ PPC::Runtime::ASM::bl(fn_8000B884);
/*800444C0 000412C0*/ PPC::Runtime::ASM::bl(fn_80071D7C);
/*800444C4 000412C4*/ PPC::Runtime::ASM::bl(fn_8005E5D0);
/*800444C8 000412C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800444CC 000412CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800444D0 000412D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800444D4 000412D4*/ PPC::Runtime::ASM::blr();
}