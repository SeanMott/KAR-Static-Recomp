//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_memcmp.hpp"



void fn_80480B50(PPC::Runtime::GCContext* context)
{
/*80480B50 0047D950*/ PPC::Runtime::ASM::mflr(context->r0);
/*80480B54 0047D954*/ PPC::Runtime::ASM::mr(context->r6, context->r3);
/*80480B58 0047D958*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80480B5C 0047D95C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*80480B60 0047D960*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r6));
/*80480B64 0047D964*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r4));
/*80480B68 0047D968*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x4);
/*80480B6C 0047D96C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80480B70 0047D970*/ PPC::Runtime::ASM::bne(.L_80480B88);
/*80480B74 0047D974*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x4);
/*80480B78 0047D978*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x21c);
/*80480B7C 0047D97C*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*80480B80 0047D980*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80480B84 0047D984*/ PPC::Runtime::ASM::beq(.L_80480B90);
RUNTIME_PPC_JUMP_LABEL(.L_80480B88, 0x80480B88) //this is a jump label
/*80480B88 0047D988*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80480B8C 0047D98C*/ PPC::Runtime::ASM::b(.L_80480B94);
RUNTIME_PPC_JUMP_LABEL(.L_80480B90, 0x80480B90) //this is a jump label
/*80480B90 0047D990*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80480B94, 0x80480B94) //this is a jump label
/*80480B94 0047D994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80480B98 0047D998*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*80480B9C 0047D99C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80480BA0 0047D9A0*/ PPC::Runtime::ASM::blr();
}