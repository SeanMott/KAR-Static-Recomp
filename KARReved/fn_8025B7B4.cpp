//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8025B7E0.hpp"
#include "fn_8025B7E0.hpp"
#include "fn_80254D4C.hpp"



void fn_8025B7B4(PPC::Runtime::GCContext* context)
{
/*8025B7B4 002585B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B7B8 002585B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B7BC 002585BC*/ PPC::Runtime::ASM::lis(context->r4, fn_8025B7E0 @ Get_MemoryOffset_HighBit);
/*8025B7C0 002585C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B7C4 002585C4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8025B7E0 @ Get_MemoryOffset_LowBit);
/*8025B7C8 002585C8*/ PPC::Runtime::ASM::bl(fn_80254D4C);
/*8025B7CC 002585CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B7D0 002585D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B7D4 002585D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B7D8 002585D8*/ PPC::Runtime::ASM::blr();
}