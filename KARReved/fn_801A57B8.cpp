//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199668.hpp"
#include "fn_80198B90.hpp"
#include "fn_801A5020.hpp"



void fn_801A57B8(PPC::Runtime::GCContext* context)
{
/*801A57B8 001A25B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A57BC 001A25BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A57C0 001A25C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A57C4 001A25C4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A57C8 001A25C8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A57CC 001A25CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa84, context->r3));
/* 801A57D0 001A25D0  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801A57D4 001A25D4*/ PPC::Runtime::ASM::bne(.L_801A5804);
/*801A57D8 001A25D8*/ PPC::Runtime::ASM::bl(fn_80199668);
/*801A57DC 001A25DC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A57E0 001A25E0*/ PPC::Runtime::ASM::beq(.L_801A5804);
/*801A57E4 001A25E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A57E8 001A25E8*/ PPC::Runtime::ASM::bl(fn_80198B90);
/*801A57EC 001A25EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A57F0 001A25F0*/ PPC::Runtime::ASM::beq(.L_801A5804);
/*801A57F4 001A25F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A57F8 001A25F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A57FC 001A25FC*/ PPC::Runtime::ASM::bl(fn_801A5020);
/*801A5800 001A2600*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A5804, 0x801A5804) //this is a jump label
/*801A5804 001A2604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A5808 001A2608*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A580C 001A260C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A5810 001A2610*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A5814 001A2614*/ PPC::Runtime::ASM::blr();
}