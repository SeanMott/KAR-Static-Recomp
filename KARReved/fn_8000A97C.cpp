//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_8003D5F0.hpp"
#include "fn_gmGetGlobalP.hpp"



void fn_8000A97C(PPC::Runtime::GCContext* context)
{
/*8000A97C 0000777C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000A980 00007780*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000A984 00007784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A988 00007788*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*8000A98C 0000778C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8000A990 00007790*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8000A994 00007794*/ PPC::Runtime::ASM::beq(.L_8000A9A0);
/*8000A998 00007798*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000A99C 0000779C*/ PPC::Runtime::ASM::b(.L_8000A9D4);
RUNTIME_PPC_JUMP_LABEL(.L_8000A9A0, 0x8000A9A0) //this is a jump label
/*8000A9A0 000077A0*/ PPC::Runtime::ASM::bl(fn_8003D5F0);
/*8000A9A4 000077A4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8000A9A8 000077A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8000A9AC 000077AC*/ PPC::Runtime::ASM::beq(.L_8000A9B8);
/*8000A9B0 000077B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8000A9B4 000077B4*/ PPC::Runtime::ASM::b(.L_8000A9D4);
RUNTIME_PPC_JUMP_LABEL(.L_8000A9B8, 0x8000A9B8) //this is a jump label
/*8000A9B8 000077B8*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000A9BC 000077BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x832, context->r3));
/*8000A9C0 000077C0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000A9C4 000077C4*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x5);
/*8000A9C8 000077C8*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/*8000A9CC 000077CC*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
/*8000A9D0 000077D0*/ PPC::Runtime::ASM::extsb(context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8000A9D4, 0x8000A9D4) //this is a jump label
/*8000A9D4 000077D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000A9D8 000077D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000A9DC 000077DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000A9E0 000077E0*/ PPC::Runtime::ASM::blr();
}