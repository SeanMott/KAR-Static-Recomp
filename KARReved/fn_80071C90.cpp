//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80071840.hpp"



void fn_80071C90(PPC::Runtime::GCContext* context)
{
/*80071C90 0006EA90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80071C94 0006EA94*/ PPC::Runtime::ASM::mflr(context->r0);
/*80071C98 0006EA98*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*80071C9C 0006EA9C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80071CA0 0006EAA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071CA4 0006EAA4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80071CA8 0006EAA8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x194, context->r3));
/*80071CAC 0006EAAC*/ PPC::Runtime::ASM::bl(fn_80071840);
/*80071CB0 0006EAB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071CB4 0006EAB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80071CB8 0006EAB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80071CBC 0006EABC*/ PPC::Runtime::ASM::blr();
}