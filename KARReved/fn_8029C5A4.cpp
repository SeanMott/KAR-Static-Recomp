//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029C5A4(PPC::Runtime::GCContext* context)
{
/*8029C5A4 002993A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029C5A8 002993A8*/ PPC::Runtime::ASM::li(context->r0, 0x28);
/*8029C5AC 002993AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8029C5B0 002993B0*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x28);
/*8029C5B4 002993B4*/ PPC::Runtime::ASM::add(context->r6, context->r5, context->r4);
/*8029C5B8 002993B8*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x27);
/*8029C5BC 002993BC*/ PPC::Runtime::ASM::subf(context->r4, context->r5, context->r4);
/*8029C5C0 002993C0*/ PPC::Runtime::ASM::divwu(context->r4, context->r4, context->r0);
/*8029C5C4 002993C4*/ PPC::Runtime::ASM::mtctr(context->r4);
/*8029C5C8 002993C8*/ PPC::Runtime::ASM::cmplw(context->r6, context->r5);
/*8029C5CC 002993CC*/ PPC::Runtime::ASM::ble(.L_8029C5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8029C5D0, 0x8029C5D0) //this is a jump label
/*8029C5D0 002993D0*/ PPC::Runtime::ASM::bdnz(.L_8029C5D0);
RUNTIME_PPC_JUMP_LABEL(.L_8029C5D4, 0x8029C5D4) //this is a jump label
/*8029C5D4 002993D4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8029C5D8 002993D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029C5DC 002993DC*/ PPC::Runtime::ASM::blr();
}