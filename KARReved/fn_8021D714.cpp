//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FEDD4.hpp"
#include "fn_801FF7B0.hpp"
#include "fn_801FF72C.hpp"
#include "fn_8007A9E4.hpp"
#include "fn_801FBF2C.hpp"



void fn_8021D714(PPC::Runtime::GCContext* context)
{
/*8021D714 0021A514*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021D718 0021A518*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021D71C 0021A51C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D720 0021A520*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D724 0021A524*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021D728 0021A528*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8021D72C 0021A52C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r3));
/*8021D730 0021A530*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D734 0021A534*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r3));
/*8021D738 0021A538*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8021D73C 0021A53C*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8021D740 0021A540*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*8021D744 0021A544*/ PPC::Runtime::ASM::ble(.L_8021D764);
/*8021D748 0021A548*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r31));
/* 8021D74C 0021A54C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*8021D750 0021A550*/ PPC::Runtime::ASM::bne(.L_8021D764);
/*8021D754 0021A554*/ PPC::Runtime::ASM::li(context->r4, 0x14);
/*8021D758 0021A558*/ PPC::Runtime::ASM::bl(fn_801FEDD4);
/*8021D75C 0021A55C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021D760 0021A560*/ PPC::Runtime::ASM::bl(fn_801FF7B0);
RUNTIME_PPC_JUMP_LABEL(.L_8021D764, 0x8021D764) //this is a jump label
/*8021D764 0021A564*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021D768 0021A568*/ PPC::Runtime::ASM::bl(fn_801FF72C);
/*8021D76C 0021A56C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021D770 0021A570*/ PPC::Runtime::ASM::beq(.L_8021D78C);
/*8021D774 0021A574*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb9c, context->r31));
/*8021D778 0021A578*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8021D77C 0021A57C*/ PPC::Runtime::ASM::beq(.L_8021D784);
/*8021D780 0021A580*/ PPC::Runtime::ASM::bl(fn_8007A9E4);
RUNTIME_PPC_JUMP_LABEL(.L_8021D784, 0x8021D784) //this is a jump label
/*8021D784 0021A584*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021D788 0021A588*/ PPC::Runtime::ASM::bl(fn_801FBF2C);
RUNTIME_PPC_JUMP_LABEL(.L_8021D78C, 0x8021D78C) //this is a jump label
/*8021D78C 0021A58C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021D790 0021A590*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021D794 0021A594*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021D798 0021A598*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021D79C 0021A59C*/ PPC::Runtime::ASM::blr();
}