//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029AE20(PPC::Runtime::GCContext* context)
{
/*8029AE20 00297C20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029AE24 00297C24*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029AE28 00297C28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029AE2C 00297C2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029AE30 00297C30*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029AE34 00297C34*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029AE38 00297C38*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029AE3C 00297C3C*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029AE40 00297C40*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AE44 00297C44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AE48 00297C48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029AE4C 00297C4C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AE50 00297C50*/ PPC::Runtime::ASM::bctrl();
/*8029AE54 00297C54*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029AE58 00297C58*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AE5C 00297C5C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AE60 00297C60*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029AE64 00297C64*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AE68 00297C68*/ PPC::Runtime::ASM::bctrl();
/*8029AE6C 00297C6C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029AE70 00297C70*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029AE74 00297C74*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8029AE78 00297C78*/ PPC::Runtime::ASM::bl(fn_80391C1C);
/*8029AE7C 00297C7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029AE80 00297C80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029AE84 00297C84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029AE88 00297C88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029AE8C 00297C8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029AE90 00297C90*/ PPC::Runtime::ASM::blr();
}