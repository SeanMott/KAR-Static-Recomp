//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029A44C(PPC::Runtime::GCContext* context)
{
/*8029A44C 0029724C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029A450 00297250*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029A454 00297254*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029A458 00297258*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029A45C 0029725C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029A460 00297260*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029A464 00297264*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029A468 00297268*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029A46C 0029726C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029A470 00297270*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029A474 00297274*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029A478 00297278*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029A47C 0029727C*/ PPC::Runtime::ASM::bctrl();
/*8029A480 00297280*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029A484 00297284*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029A488 00297288*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029A48C 0029728C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029A490 00297290*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029A494 00297294*/ PPC::Runtime::ASM::bctrl();
/*8029A498 00297298*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029A49C 0029729C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029A4A0 002972A0*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8029A4A4 002972A4*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*8029A4A8 002972A8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8029A4AC 002972AC*/ PPC::Runtime::ASM::bl(fn_80391C70);
/*8029A4B0 002972B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029A4B4 002972B4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029A4B8 002972B8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029A4BC 002972BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029A4C0 002972C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029A4C4 002972C4*/ PPC::Runtime::ASM::blr();
}