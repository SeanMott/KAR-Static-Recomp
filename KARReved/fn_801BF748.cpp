//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FE98.hpp"
#include "fn_801BED04.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_801C05A8.hpp"



void fn_801BF748(PPC::Runtime::GCContext* context)
{
/*801BF748 001BC548*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF74C 001BC54C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF750 001BC550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF754 001BC554*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF758 001BC558*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BF75C 001BC55C*/ PPC::Runtime::ASM::bl(fn_8019FE98);
/*801BF760 001BC560*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF764 001BC564*/ PPC::Runtime::ASM::bl(fn_801BED04);
/*801BF768 001BC568*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BF76C 001BC56C*/ PPC::Runtime::ASM::bne(.L_801BF784);
/*801BF770 001BC570*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF774 001BC574*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801BF778 001BC578*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF77C 001BC57C*/ PPC::Runtime::ASM::bl(fn_801C05A8);
/*801BF780 001BC580*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801BF784, 0x801BF784) //this is a jump label
/*801BF784 001BC584*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF788 001BC588*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF78C 001BC58C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF790 001BC590*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF794 001BC594*/ PPC::Runtime::ASM::blr();
}