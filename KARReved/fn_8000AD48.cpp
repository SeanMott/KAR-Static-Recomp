//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000AD48(PPC::Runtime::GCContext* context)
{
/*8000AD48 00007B48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000AD4C 00007B4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000AD50 00007B50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000AD54 00007B54*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000AD58 00007B58*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r3));
/*8000AD5C 00007B5C*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
/*8000AD60 00007B60*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x7);
/*8000AD64 00007B64*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xb);
/*8000AD68 00007B68*/ PPC::Runtime::ASM::bgt(.L_8000AD8C);
/*8000AD6C 00007B6C*/ PPC::Runtime::ASM::lis(context->r3, jumptable_80495798 @ Get_MemoryOffset_HighBit);
/*8000AD70 00007B70*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8000AD74 00007B74*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_80495798 @ Get_MemoryOffset_LowBit);
/*8000AD78 00007B78*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8000AD7C 00007B7C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8000AD80 00007B80*/ PPC::Runtime::ASM::bctr();
/*8000AD84 00007B84*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8000AD88 00007B88*/ PPC::Runtime::ASM::b(.L_8000AD90);
RUNTIME_PPC_JUMP_LABEL(.L_8000AD8C, 0x8000AD8C) //this is a jump label
/*8000AD8C 00007B8C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8000AD90, 0x8000AD90) //this is a jump label
/*8000AD90 00007B90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000AD94 00007B94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000AD98 00007B98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000AD9C 00007B9C*/ PPC::Runtime::ASM::blr();
}