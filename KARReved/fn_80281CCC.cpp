//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80281CCC(PPC::Runtime::GCContext* context)
{
/*80281CCC 0027EACC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80281CD0 0027EAD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80281CD4 0027EAD4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x2);
/*80281CD8 0027EAD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80281CDC 0027EADC*/ PPC::Runtime::ASM::bne(.L_80281CE4);
/*80281CE0 0027EAE0*/ PPC::Runtime::ASM::bl(fn_GXLink_Common);
RUNTIME_PPC_JUMP_LABEL(.L_80281CE4, 0x80281CE4) //this is a jump label
/*80281CE4 0027EAE4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80281CE8 0027EAE8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80281CEC 0027EAEC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80281CF0 0027EAF0*/ PPC::Runtime::ASM::blr();
}