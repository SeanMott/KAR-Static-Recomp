//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029BA00(PPC::Runtime::GCContext* context)
{
/*8029BA00 00298800*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029BA04 00298804*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029BA08 00298808*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029BA0C 0029880C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8029BA10 00298810*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029BA14 00298814*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029BA18 00298818*/ PPC::Runtime::ASM::bctrl();
/*8029BA1C 0029881C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029BA20 00298820*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029BA24 00298824*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029BA28 00298828*/ PPC::Runtime::ASM::blr();
}