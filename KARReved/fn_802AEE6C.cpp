//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80381A44.hpp"
#include "fn_80381A50.hpp"



void fn_802AEE6C(PPC::Runtime::GCContext* context)
{
/*802AEE6C 002ABC6C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802AEE70 002ABC70*/ PPC::Runtime::ASM::mflr(context->r0);
/*802AEE74 002ABC74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AEE78 002ABC78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802AEE7C 002ABC7C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802AEE80 002ABC80*/ PPC::Runtime::ASM::beq(.L_802AEEB4);
/*802AEE84 002ABC84*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*802AEE88 002ABC88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802AEE8C 002ABC8C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D800C @ Get_MemoryOffset_SDA21);
/*802AEE90 002ABC90*/ PPC::Runtime::ASM::li(context->r6, lbl_805D7F20 @ Get_MemoryOffset_SDA21);
/*802AEE94 002ABC94*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802AEE98 002ABC98*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802AEE9C 002ABC9C*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*802AEEA0 002ABCA0*/ PPC::Runtime::ASM::bl(fn_8039A7BC);
/* 802AEEA4 002ABCA4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802AEEA8 002ABCA8*/ PPC::Runtime::ASM::beq(.L_802AEEB4);
/*802AEEAC 002ABCAC*/ PPC::Runtime::ASM::bl(fn_80381A44);
/*802AEEB0 002ABCB0*/ PPC::Runtime::ASM::bl(fn_80381A50);
RUNTIME_PPC_JUMP_LABEL(.L_802AEEB4, 0x802AEEB4) //this is a jump label
/*802AEEB4 002ABCB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802AEEB8 002ABCB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802AEEBC 002ABCBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802AEEC0 002ABCC0*/ PPC::Runtime::ASM::blr();
}