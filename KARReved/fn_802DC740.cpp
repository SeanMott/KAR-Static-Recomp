//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80369C9C.hpp"
#include "fn_8036B188.hpp"
#include "fn_8036C06C.hpp"
#include "fn_8036E8D4.hpp"
#include "fn_8037103C.hpp"
#include "fn_8034C988.hpp"



void fn_802DC740(PPC::Runtime::GCContext* context)
{
/*802DC740 002D9540*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802DC744 002D9544*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DC748 002D9548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DC74C 002D954C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802DC750 002D9550*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802DC754 002D9554*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x406c, context->r3));
/*802DC758 002D9558*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802DC75C 002D955C*/ PPC::Runtime::ASM::beq(.L_802DC7C8);
/*802DC760 002D9560*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3f38);
/*802DC764 002D9564*/ PPC::Runtime::ASM::bl(fn_80369C9C);
/*802DC768 002D9568*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3f58);
/*802DC76C 002D956C*/ PPC::Runtime::ASM::bl(fn_8036B188);
/*802DC770 002D9570*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3fa8);
/*802DC774 002D9574*/ PPC::Runtime::ASM::bl(fn_8036C06C);
/*802DC778 002D9578*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3fc4);
/*802DC77C 002D957C*/ PPC::Runtime::ASM::bl(fn_8036E8D4);
/*802DC780 002D9580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e88, context->r31));
/*802DC784 002D9584*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802DC788 002D9588*/ PPC::Runtime::ASM::beq(.L_802DC7A0);
/*802DC78C 002D958C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e84, context->r31));
/*802DC790 002D9590*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802DC794 002D9594*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*802DC798 002D9598*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802DC79C 002D959C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802DC7A0, 0x802DC7A0) //this is a jump label
/*802DC7A0 002D95A0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3f1c);
/*802DC7A4 002D95A4*/ PPC::Runtime::ASM::bl(fn_8037103C);
/*802DC7A8 002D95A8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802DC7AC 002D95AC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*802DC7B0 002D95B0*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*802DC7B4 002D95B4*/ PPC::Runtime::ASM::bl(fn_GXSetZMode);
/*802DC7B8 002D95B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x3de8);
/*802DC7BC 002D95BC*/ PPC::Runtime::ASM::bl(fn_8034C988);
/*802DC7C0 002D95C0*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*802DC7C4 002D95C4*/ PPC::Runtime::ASM::bl(fn_HSD_StateInvalidate);
RUNTIME_PPC_JUMP_LABEL(.L_802DC7C8, 0x802DC7C8) //this is a jump label
/*802DC7C8 002D95C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DC7CC 002D95CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802DC7D0 002D95D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DC7D4 002D95D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802DC7D8 002D95D8*/ PPC::Runtime::ASM::blr();
}