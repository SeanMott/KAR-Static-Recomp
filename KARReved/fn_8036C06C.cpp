//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8036C06C(PPC::Runtime::GCContext* context)
{
/*8036C06C 00368E6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8036C070 00368E70*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036C074 00368E74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036C078 00368E78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036C07C 00368E7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036C080 00368E80*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x10);
/*8036C084 00368E84*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8036C088 00368E88*/ PPC::Runtime::ASM::b(.L_8036C0B0);
RUNTIME_PPC_JUMP_LABEL(.L_8036C08C, 0x8036C08C) //this is a jump label
/*8036C08C 00368E8C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x82, context->r31));
/*8036C090 00368E90*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8036C094 00368E94*/ PPC::Runtime::ASM::bne(.L_8036C0AC);
/*8036C098 00368E98*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x6c);
/*8036C09C 00368E9C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8036C0A0 00368EA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036C0A4 00368EA4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036C0A8 00368EA8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8036C0AC, 0x8036C0AC) //this is a jump label
/*8036C0AC 00368EAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036C0B0, 0x8036C0B0) //this is a jump label
/*8036C0B0 00368EB0*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*8036C0B4 00368EB4*/ PPC::Runtime::ASM::bne(.L_8036C08C);
/*8036C0B8 00368EB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036C0BC 00368EBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036C0C0 00368EC0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036C0C4 00368EC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036C0C8 00368EC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8036C0CC 00368ECC*/ PPC::Runtime::ASM::blr();
}