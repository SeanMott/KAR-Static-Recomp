//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015F50C.hpp"



void fn_80135C0C(PPC::Runtime::GCContext* context)
{
/*80135C0C 00132A0C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80135C10 00132A10*/ PPC::Runtime::ASM::mflr(context->r0);
/*80135C14 00132A14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135C18 00132A18*/ PPC::Runtime::ASM::bl(fn_8015F50C);
/*80135C1C 00132A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80135C20 00132A20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80135C24 00132A24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80135C28 00132A28*/ PPC::Runtime::ASM::blr();
}