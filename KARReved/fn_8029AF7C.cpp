//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029AF7C(PPC::Runtime::GCContext* context)
{
/*8029AF7C 00297D7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8029AF80 00297D80*/ PPC::Runtime::ASM::mflr(context->r0);
/*8029AF84 00297D84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029AF88 00297D88*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029AF8C 00297D8C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029AF90 00297D90*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8029AF94 00297D94*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8029AF98 00297D98*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8029AF9C 00297D9C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AFA0 00297DA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AFA4 00297DA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8029AFA8 00297DA8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AFAC 00297DAC*/ PPC::Runtime::ASM::bctrl();
/*8029AFB0 00297DB0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8029AFB4 00297DB4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8029AFB8 00297DB8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8029AFBC 00297DBC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8029AFC0 00297DC0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8029AFC4 00297DC4*/ PPC::Runtime::ASM::bctrl();
/*8029AFC8 00297DC8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8029AFCC 00297DCC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8029AFD0 00297DD0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8029AFD4 00297DD4*/ PPC::Runtime::ASM::bl(fn_80391C1C);
/*8029AFD8 00297DD8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8029AFDC 00297DDC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8029AFE0 00297DE0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8029AFE4 00297DE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8029AFE8 00297DE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8029AFEC 00297DEC*/ PPC::Runtime::ASM::blr();
}