//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80200838.hpp"
#include "fn_802017D0.hpp"



void fn_80200BA4(PPC::Runtime::GCContext* context)
{
/*80200BA4 001FD9A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80200BA8 001FD9A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80200BAC 001FD9AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80200BB0 001FD9B0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80200BB4 001FD9B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80200BB8 001FD9B8*/ PPC::Runtime::ASM::bl(fn_80200838);
/*80200BBC 001FD9BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80200BC0 001FD9C0*/ PPC::Runtime::ASM::bl(fn_802017D0);
/*80200BC4 001FD9C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80200BC8 001FD9C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80200BCC 001FD9CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80200BD0 001FD9D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80200BD4 001FD9D4*/ PPC::Runtime::ASM::blr();
}