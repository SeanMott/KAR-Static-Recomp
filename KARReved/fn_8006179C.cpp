//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8006179C(PPC::Runtime::GCContext* context)
{
/*8006179C 0005E59C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800617A0 0005E5A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*800617A4 0005E5A4*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r4, 24);
/*800617A8 0005E5A8*/ PPC::Runtime::ASM::li(context->r6, 0xa);
/*800617AC 0005E5AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800617B0 0005E5B0*/ PPC::Runtime::ASM::clrlwi(context->r5, context->r5, 24);
/*800617B4 0005E5B4*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*800617B8 0005E5B8*/ PPC::Runtime::ASM::bl(fn_playSoundFX);
/*800617BC 0005E5BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800617C0 0005E5C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800617C4 0005E5C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800617C8 0005E5C8*/ PPC::Runtime::ASM::blr();
}