//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8030C79C(PPC::Runtime::GCContext* context)
{
/*8030C79C 0030959C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8030C7A0 003095A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8030C7A4 003095A4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x24);
/*8030C7A8 003095A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030C7AC 003095AC*/ PPC::Runtime::ASM::bl(fn_80393820);
/*8030C7B0 003095B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030C7B4 003095B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8030C7B8 003095B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8030C7BC 003095BC*/ PPC::Runtime::ASM::blr();
}