//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003F6F0(PPC::Runtime::GCContext* context)
{
/*8003F6F0 0003C4F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003F6F4 0003C4F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003F6F8 0003C4F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F6FC 0003C4FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F700 0003C500*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003F704 0003C504*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F708 0003C508*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x394);
/*8003F70C 0003C50C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8003F710 0003C510*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r0);
/*8003F714 0003C514*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcf, context->r4));
/*8003F718 0003C518*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8003F71C 0003C51C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x63);
/*8003F720 0003C520*/ PPC::Runtime::ASM::bge(.L_8003F72C);
/*8003F724 0003C524*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8003F728 0003C528*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcf, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8003F72C, 0x8003F72C) //this is a jump label
/*8003F72C 0003C52C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F730 0003C530*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F734 0003C534*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003F738 0003C538*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003F73C 0003C53C*/ PPC::Runtime::ASM::blr();
}