//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80220530.hpp"
#include "fn_80220554.hpp"
#include "fn_8022263C.hpp"
#include "fn_802225F0.hpp"



void fn_8022233C(PPC::Runtime::GCContext* context)
{
/*8022233C 0021F13C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80222340 0021F140*/ PPC::Runtime::ASM::mflr(context->r0);
/*80222344 0021F144*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80222348 0021F148*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8022234C 0021F14C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80222350 0021F150*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80222354 0021F154*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*80222358 0021F158*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8022235C 0021F15C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*80222360 0021F160*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*80222364 0021F164*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 4, 27, 27);
/*80222368 0021F168*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/*8022236C 0021F16C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r3));
/* 80222370 0021F170  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*80222374 0021F174*/ PPC::Runtime::ASM::bne(.L_802223C4);
/*80222378 0021F178*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8022237C 0021F17C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80222380 0021F180*/ PPC::Runtime::ASM::beq(.L_802223C4);
/*80222384 0021F184*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80222388 0021F188*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8022238C 0021F18C*/ PPC::Runtime::ASM::bne(.L_802223C4);
/*80222390 0021F190*/ PPC::Runtime::ASM::bl(fn_80220530);
/*80222394 0021F194*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/*80222398 0021F198*/ PPC::Runtime::ASM::extrwi(context->r0, context->r4, 1, 26);
/*8022239C 0021F19C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802223A0 0021F1A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802223A4 0021F1A4*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 5, 26, 26);
/*802223A8 0021F1A8*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/*802223AC 0021F1AC*/ PPC::Runtime::ASM::bl(fn_80220554);
/*802223B0 0021F1B0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/*802223B4 0021F1B4*/ PPC::Runtime::ASM::extrwi(context->r0, context->r4, 1, 27);
/*802223B8 0021F1B8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*802223BC 0021F1BC*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r0, 4, 27, 27);
/*802223C0 0021F1C0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802223C4, 0x802223C4) //this is a jump label
/*802223C4 0021F1C4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/* 802223C8 0021F1C8  54 60 DF FF */ extrwi. context->r0 , context->r3 , 1 , 26
/*802223CC 0021F1CC*/ PPC::Runtime::ASM::bne(.L_802223EC);
/* 802223D0 0021F1D0  54 60 EF FF */ extrwi. context->r0 , context->r3 , 1 , 28
/*802223D4 0021F1D4*/ PPC::Runtime::ASM::bne(.L_802223EC);
/* 802223D8 0021F1D8  54 60 D7 FF */ extrwi. context->r0 , context->r3 , 1 , 25
/*802223DC 0021F1DC*/ PPC::Runtime::ASM::beq(.L_80222400);
/*802223E0 0021F1E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802223E4 0021F1E4*/ PPC::Runtime::ASM::bl(fn_8022263C);
/*802223E8 0021F1E8*/ PPC::Runtime::ASM::b(.L_80222400);
RUNTIME_PPC_JUMP_LABEL(.L_802223EC, 0x802223EC) //this is a jump label
/*802223EC 0021F1EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r31));
/* 802223F0 0021F1F0  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*802223F4 0021F1F4*/ PPC::Runtime::ASM::bne(.L_80222400);
/*802223F8 0021F1F8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802223FC 0021F1FC*/ PPC::Runtime::ASM::bl(fn_802225F0);
RUNTIME_PPC_JUMP_LABEL(.L_80222400, 0x80222400) //this is a jump label
/*80222400 0021F200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80222404 0021F204*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80222408 0021F208*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8022240C 0021F20C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80222410 0021F210*/ PPC::Runtime::ASM::blr();
}