//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800A9854.hpp"



void fn_8007A420(PPC::Runtime::GCContext* context)
{
/*8007A420 00077220*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8007A424 00077224*/ PPC::Runtime::ASM::mflr(context->r0);
/*8007A428 00077228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007A42C 0007722C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007A430 00077230*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*8007A434 00077234*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007A438 00077238*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8007A43C 0007723C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A440 00077240*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8007A444 00077244*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8007A448 00077248*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007A44C 0007724C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8007A450 00077250*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8007A454 00077254*/ PPC::Runtime::ASM::bl(fn_800A9854);
/*8007A458 00077258*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8007A45C 0007725C*/ PPC::Runtime::ASM::beq(.L_8007A468);
/*8007A460 00077260*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8007A464 00077264*/ PPC::Runtime::ASM::b(.L_8007A4A8);
RUNTIME_PPC_JUMP_LABEL(.L_8007A468, 0x8007A468) //this is a jump label
/*8007A468 00077268*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11, context->r28));
/*8007A46C 0007726C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8007A470 00077270*/ PPC::Runtime::ASM::beq(.L_8007A4A4);
/*8007A474 00077274*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8007A478 00077278*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8007A47C 0007727C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8007A480 00077280*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8007A484 00077284*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8007A488 00077288*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8007A48C 0007728C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8007A490 00077290*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8007A494 00077294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8007A498 00077298*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*8007A49C 0007729C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8007A4A0 000772A0*/ PPC::Runtime::ASM::b(.L_8007A4A8);
RUNTIME_PPC_JUMP_LABEL(.L_8007A4A4, 0x8007A4A4) //this is a jump label
/*8007A4A4 000772A4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8007A4A8, 0x8007A4A8) //this is a jump label
/*8007A4A8 000772A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8007A4AC 000772AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8007A4B0 000772B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8007A4B4 000772B4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8007A4B8 000772B8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8007A4BC 000772BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8007A4C0 000772C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8007A4C4 000772C4*/ PPC::Runtime::ASM::blr();
}