//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"
#include "fn_80138AC8.hpp"



void fn_8015670C(PPC::Runtime::GCContext* context)
{
/*8015670C 0015350C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80156710 00153510*/ PPC::Runtime::ASM::mflr(context->r0);
/*80156714 00153514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80156718 00153518*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015671C 0015351C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80156720 00153520*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80156724 00153524*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*80156728 00153528*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8015672C 0015352C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80156730 00153530*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6ac, context->r3));
/*80156734 00153534*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80156738 00153538*/ PPC::Runtime::ASM::beq(.L_80156758);
/*8015673C 0015353C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80156740 00153540*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r4));
/*80156744 00153544*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80156748 00153548*/ PPC::Runtime::ASM::bne(.L_80156754);
/*8015674C 0015354C*/ PPC::Runtime::ASM::bl(fn_80138AB0);
/*80156750 00153550*/ PPC::Runtime::ASM::b(.L_80156758);
RUNTIME_PPC_JUMP_LABEL(.L_80156754, 0x80156754) //this is a jump label
/*80156754 00153554*/ PPC::Runtime::ASM::bl(fn_80138AC8);
RUNTIME_PPC_JUMP_LABEL(.L_80156758, 0x80156758) //this is a jump label
/*80156758 00153558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015675C 0015355C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80156760 00153560*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80156764 00153564*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80156768 00153568*/ PPC::Runtime::ASM::blr();
}