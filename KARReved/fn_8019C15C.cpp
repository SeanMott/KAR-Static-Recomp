//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006AD80.hpp"



void fn_8019C15C(PPC::Runtime::GCContext* context)
{
/*8019C15C 00198F5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8019C160 00198F60*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019C164 00198F64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C168 00198F68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019C16C 00198F6C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8019C170 00198F70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*8019C174 00198F74*/ PPC::Runtime::ASM::bl(fn_8006AD80);
/*8019C178 00198F78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8019C17C 00198F7C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADBD8 @ Get_MemoryOffset_HighBit);
/*8019C180 00198F80*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADBD8 @ Get_MemoryOffset_LowBit);
/*8019C184 00198F84*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8019C188 00198F88*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*8019C18C 00198F8C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r3));
/*8019C190 00198F90*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8019C194 00198F94*/ PPC::Runtime::ASM::beq(.L_8019C1A4);
/*8019C198 00198F98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019C19C 00198F9C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8019C1A0 00198FA0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8019C1A4, 0x8019C1A4) //this is a jump label
/*8019C1A4 00198FA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019C1A8 00198FA8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8019C1AC 00198FAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8019C1B0 00198FB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8019C1B4 00198FB4*/ PPC::Runtime::ASM::blr();
}