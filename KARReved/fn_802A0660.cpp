//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80311EA0.hpp"



void fn_802A0660(PPC::Runtime::GCContext* context)
{
/*802A0660 0029D460*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A0664 0029D464*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A0668 0029D468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A066C 0029D46C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802A0670 0029D470*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*802A0674 0029D474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*802A0678 0029D478*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*802A067C 0029D47C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*802A0680 0029D480*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*802A0684 0029D484*/ PPC::Runtime::ASM::cmplw(context->r7, context->r0);
/*802A0688 0029D488*/ PPC::Runtime::ASM::bge(.L_802A06A0);
/*802A068C 0029D48C*/ PPC::Runtime::ASM::addi(context->r0, context->r7, 0x2);
/*802A0690 0029D490*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802A0694 0029D494*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*802A0698 0029D498*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*802A069C 0029D49C*/ PPC::Runtime::ASM::bl(fn_80311EA0);
RUNTIME_PPC_JUMP_LABEL(.L_802A06A0, 0x802A06A0) //this is a jump label
/*802A06A0 0029D4A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A06A4 0029D4A4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A06A8 0029D4A8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A06AC 0029D4AC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A06B0 0029D4B0*/ PPC::Runtime::ASM::blr();
}