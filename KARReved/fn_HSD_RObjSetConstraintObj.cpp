//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_JObjUnrefThis.hpp"
#include "fn_80420F34.hpp"
#include "fn___assert.hpp"
#include "OSReport.hpp"
#include "fn___assert.hpp"



void fn_HSD_RObjSetConstraintObj(PPC::Runtime::GCContext* context)
{
/*8041A438 00417238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8041A43C 0041723C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041A440 00417240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8041A444 00417244*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041A448 00417248*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041A44C 0041724C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8041A450 00417250*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/* 8041A454 00417254  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8041A458 00417258*/ PPC::Runtime::ASM::lis(context->r3, lbl_80504060 @ Get_MemoryOffset_HighBit);
/*8041A45C 0041725C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80504060 @ Get_MemoryOffset_LowBit);
/*8041A460 00417260*/ PPC::Runtime::ASM::beq(.L_8041A4E8);
/*8041A464 00417264*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8041A468 00417268*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041A46C 0041726C*/ PPC::Runtime::ASM::beq(.L_8041A47C);
/*8041A470 00417270*/ PPC::Runtime::ASM::bl(fn_HSD_JObjUnrefThis);
/*8041A474 00417274*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8041A478 00417278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_8041A47C, 0x8041A47C) //this is a jump label
/*8041A47C 0041727C*/ PPC::Runtime::ASM::lis(context->r4, lbl_805037C8 @ Get_MemoryOffset_HighBit);
/*8041A480 00417280*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8041A484 00417284*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_805037C8 @ Get_MemoryOffset_LowBit);
/*8041A488 00417288*/ PPC::Runtime::ASM::bl(fn_80420F34);
/*8041A48C 0041728C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8041A490 00417290*/ PPC::Runtime::ASM::beq(.L_8041A4CC);
/*8041A494 00417294*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8041A498 00417298*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8041A49C 0041729C*/ PPC::Runtime::ASM::beq(.L_8041A4E8);
/*8041A4A0 004172A0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8041A4A4 004172A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8041A4A8 004172A8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8041A4AC 004172AC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8041A4B0 004172B0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8041A4B4 004172B4*/ PPC::Runtime::ASM::bne(.L_8041A4E8);
/*8041A4B8 004172B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5c);
/*8041A4BC 004172BC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x68);
/*8041A4C0 004172C0*/ PPC::Runtime::ASM::li(context->r4, 0x9e);
/*8041A4C4 004172C4*/ PPC::Runtime::ASM::bl(fn___assert);
/*8041A4C8 004172C8*/ PPC::Runtime::ASM::b(.L_8041A4E8);
RUNTIME_PPC_JUMP_LABEL(.L_8041A4CC, 0x8041A4CC) //this is a jump label
/*8041A4CC 004172CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x140);
/*8041A4D0 004172D0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8041A4D4 004172D4*/ PPC::Runtime::ASM::bl(OSReport);
/*8041A4D8 004172D8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_507 @ Get_MemoryOffset_SDA21);
/*8041A4DC 004172DC*/ PPC::Runtime::ASM::li(context->r4, 0x51d);
/*8041A4E0 004172E0*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_503 @ Get_MemoryOffset_SDA21);
/*8041A4E4 004172E4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8041A4E8, 0x8041A4E8) //this is a jump label
/*8041A4E8 004172E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8041A4EC 004172EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8041A4F0 004172F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8041A4F4 004172F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041A4F8 004172F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041A4FC 004172FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8041A500 00417300*/ PPC::Runtime::ASM::blr();
}