//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8036B188(PPC::Runtime::GCContext* context)
{
/*8036B188 00367F88*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8036B18C 00367F8C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036B190 00367F90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036B194 00367F94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036B198 00367F98*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036B19C 00367F9C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x10);
/*8036B1A0 00367FA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8036B1A4 00367FA4*/ PPC::Runtime::ASM::b(.L_8036B1C0);
RUNTIME_PPC_JUMP_LABEL(.L_8036B1A8, 0x8036B1A8) //this is a jump label
/*8036B1A8 00367FA8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*8036B1AC 00367FAC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r31));
/*8036B1B0 00367FB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036B1B4 00367FB4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036B1B8 00367FB8*/ PPC::Runtime::ASM::bctrl();
/*8036B1BC 00367FBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036B1C0, 0x8036B1C0) //this is a jump label
/*8036B1C0 00367FC0*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*8036B1C4 00367FC4*/ PPC::Runtime::ASM::bne(.L_8036B1A8);
/*8036B1C8 00367FC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036B1CC 00367FCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036B1D0 00367FD0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036B1D4 00367FD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036B1D8 00367FD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8036B1DC 00367FDC*/ PPC::Runtime::ASM::blr();
}