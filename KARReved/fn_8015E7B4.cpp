//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8015E7B4(PPC::Runtime::GCContext* context)
{
/*8015E7B4 0015B5B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015E7B8 0015B5B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8015E7BC 0015B5BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015E7C0 0015B5C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8015E7C4 0015B5C4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8015E7C8 0015B5C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015E7CC 0015B5CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8015E7D0 0015B5D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8015E7D4 0015B5D4*/ PPC::Runtime::ASM::blr();
}