//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ChangeFace.hpp"



void fn_801BDFC8(PPC::Runtime::GCContext* context)
{
/*801BDFC8 001BADC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BDFCC 001BADCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BDFD0 001BADD0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801BDFD4 001BADD4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801BDFD8 001BADD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDFDC 001BADDC*/ PPC::Runtime::ASM::bl(fn_ChangeFace);
/*801BDFE0 001BADE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BDFE4 001BADE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BDFE8 001BADE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BDFEC 001BADEC*/ PPC::Runtime::ASM::blr();
}