//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802EFFB8.hpp"



void fn_802FC35C(PPC::Runtime::GCContext* context)
{
/*802FC35C 002F915C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FC360 002F9160*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FC364 002F9164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FC368 002F9168*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FC36C 002F916C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802FC370 002F9170*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802FC374 002F9174  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802FC378 002F9178*/ PPC::Runtime::ASM::beq(.L_802FC470);
/*802FC37C 002F917C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D91F8 @ Get_MemoryOffset_HighBit);
/*802FC380 002F9180*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802FC384 002F9184*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804D91F8 @ Get_MemoryOffset_LowBit);
/*802FC388 002F9188*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC38C 002F918C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC390 002F9190*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802FC394 002F9194*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC398 002F9198*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3cc, context->r3));
/*802FC39C 002F919C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FC3A0 002F91A0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC3A4 002F91A4*/ PPC::Runtime::ASM::bctrl();
/*802FC3A8 002F91A8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC3AC 002F91AC*/ PPC::Runtime::ASM::beq(.L_802FC460);
/*802FC3B0 002F91B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DA158 @ Get_MemoryOffset_HighBit);
/*802FC3B4 002F91B4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DA158 @ Get_MemoryOffset_LowBit);
/*802FC3B8 002F91B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC3BC 002F91BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC3C0 002F91C0*/ PPC::Runtime::ASM::lwzu(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f8, context->r3));
/*802FC3C4 002F91C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*802FC3C8 002F91C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC3CC 002F91CC*/ PPC::Runtime::ASM::bctrl();
/*802FC3D0 002F91D0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC3D4 002F91D4*/ PPC::Runtime::ASM::beq(.L_802FC420);
/*802FC3D8 002F91D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*802FC3DC 002F91DC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC3E0 002F91E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*802FC3E4 002F91E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC3E8 002F91E8*/ PPC::Runtime::ASM::beq(.L_802FC420);
/*802FC3EC 002F91EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*802FC3F0 002F91F0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802FC3F4 002F91F4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*802FC3F8 002F91F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC3FC 002F91FC*/ PPC::Runtime::ASM::beq(.L_802FC420);
/*802FC400 002F9200*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*802FC404 002F9204*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802FC408 002F9208*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*802FC40C 002F920C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC410 002F9210*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802FC414 002F9214*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*802FC418 002F9218*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802FC41C 002F921C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802FC420, 0x802FC420) //this is a jump label
/*802FC420 002F9220*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC424 002F9224*/ PPC::Runtime::ASM::beq(.L_802FC460);
/*802FC428 002F9228*/ PPC::Runtime::ASM::lis(context->r4, lbl_804D6F5C @ Get_MemoryOffset_HighBit);
/*802FC42C 002F922C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8F18 @ Get_MemoryOffset_HighBit);
/*802FC430 002F9230*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804D6F5C @ Get_MemoryOffset_LowBit);
/*802FC434 002F9234*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802FC438 002F9238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802FC43C 002F923C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8F18 @ Get_MemoryOffset_LowBit);
/*802FC440 002F9240*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802FC444 002F9244*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4ac, context->r3));
/*802FC448 002F9248*/ PPC::Runtime::ASM::bl(fn_802EFFB8);
/*802FC44C 002F924C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802FC450 002F9250*/ PPC::Runtime::ASM::beq(.L_802FC460);
/*802FC454 002F9254*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D1A98 @ Get_MemoryOffset_HighBit);
/*802FC458 002F9258*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804D1A98 @ Get_MemoryOffset_LowBit);
/*802FC45C 002F925C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802FC460, 0x802FC460) //this is a jump label
/*802FC460 002F9260*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802FC464 002F9264*/ PPC::Runtime::ASM::ble(.L_802FC470);
/*802FC468 002F9268*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FC46C 002F926C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802FC470, 0x802FC470) //this is a jump label
/*802FC470 002F9270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FC474 002F9274*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802FC478 002F9278*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FC47C 002F927C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FC480 002F9280*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FC484 002F9284*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FC488 002F9288*/ PPC::Runtime::ASM::blr();
}