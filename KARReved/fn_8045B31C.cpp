//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8045B718.hpp"
#include "fn_8045ADF4.hpp"
#include "fn_8045B7A8.hpp"
#include "fn_8045A600.hpp"
#include "fn_8045A490.hpp"



void fn_8045B31C(PPC::Runtime::GCContext* context)
{
/*8045B31C 0045811C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8045B320 00458120*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045B324 00458124*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B328 00458128*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045B32C 0045812C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045B330 00458130*/ PPC::Runtime::ASM::addi(context->r31, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B334 00458134*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045B338 00458138*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8045B33C 0045813C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r31));
/*8045B340 00458140*/ PPC::Runtime::ASM::bl(fn_8045B718);
/*8045B344 00458144*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8045B348 00458148*/ PPC::Runtime::ASM::bne(.L_8045B3D8);
/*8045B34C 0045814C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8045B350 00458150*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r31));
/*8045B354 00458154*/ PPC::Runtime::ASM::beq(.L_8045B360);
/*8045B358 00458158*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8045B35C 0045815C*/ PPC::Runtime::ASM::b(.L_8045B364);
RUNTIME_PPC_JUMP_LABEL(.L_8045B360, 0x8045B360) //this is a jump label
/*8045B360 00458160*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B364, 0x8045B364) //this is a jump label
/*8045B364 00458164*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8045B368 00458168*/ PPC::Runtime::ASM::beq(.L_8045B374);
/*8045B36C 0045816C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8045B370 00458170*/ PPC::Runtime::ASM::b(.L_8045B3C0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B374, 0x8045B374) //this is a jump label
/*8045B374 00458174*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B378 00458178*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8045B37C 0045817C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B380 00458180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8045B384 00458184*/ PPC::Runtime::ASM::beq(.L_8045B390);
/*8045B388 00458188*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8045B38C 0045818C*/ PPC::Runtime::ASM::b(.L_8045B394);
RUNTIME_PPC_JUMP_LABEL(.L_8045B390, 0x8045B390) //this is a jump label
/*8045B390 00458190*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B394, 0x8045B394) //this is a jump label
/*8045B394 00458194*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8045B398 00458198*/ PPC::Runtime::ASM::beq(.L_8045B3A4);
/*8045B39C 0045819C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8045B3A0 004581A0*/ PPC::Runtime::ASM::b(.L_8045B3C0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3A4, 0x8045B3A4) //this is a jump label
/*8045B3A4 004581A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8045B3A8 004581A8*/ PPC::Runtime::ASM::beq(.L_8045B3B4);
/*8045B3AC 004581AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8045B3B0 004581B0*/ PPC::Runtime::ASM::bne(.L_8045B3BC);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3B4, 0x8045B3B4) //this is a jump label
/*8045B3B4 004581B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8045B3B8 004581B8*/ PPC::Runtime::ASM::b(.L_8045B3C0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3BC, 0x8045B3BC) //this is a jump label
/*8045B3BC 004581BC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3C0, 0x8045B3C0) //this is a jump label
/*8045B3C0 004581C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8045B3C4 004581C4*/ PPC::Runtime::ASM::beq(.L_8045B3D0);
/*8045B3C8 004581C8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8045B3CC 004581CC*/ PPC::Runtime::ASM::b(.L_8045B3DC);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3D0, 0x8045B3D0) //this is a jump label
/*8045B3D0 004581D0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8045B3D4 004581D4*/ PPC::Runtime::ASM::b(.L_8045B3DC);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3D8, 0x8045B3D8) //this is a jump label
/*8045B3D8 004581D8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3DC, 0x8045B3DC) //this is a jump label
/*8045B3DC 004581DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8045B3E0 004581E0*/ PPC::Runtime::ASM::beq(.L_8045B50C);
/*8045B3E4 004581E4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8045B3E8 004581E8*/ PPC::Runtime::ASM::beq(.L_8045B3F4);
/*8045B3EC 004581EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8045B3F0 004581F0*/ PPC::Runtime::ASM::b(.L_8045B3F8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3F4, 0x8045B3F4) //this is a jump label
/*8045B3F4 004581F4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B3F8, 0x8045B3F8) //this is a jump label
/*8045B3F8 004581F8*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8045B3FC 004581FC*/ PPC::Runtime::ASM::beq(.L_8045B408);
/*8045B400 00458200*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8045B404 00458204*/ PPC::Runtime::ASM::b(.L_8045B40C);
RUNTIME_PPC_JUMP_LABEL(.L_8045B408, 0x8045B408) //this is a jump label
/*8045B408 00458208*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B40C, 0x8045B40C) //this is a jump label
/*8045B40C 0045820C*/ PPC::Runtime::ASM::bl(fn_8045ADF4);
/*8045B410 00458210*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x5);
/*8045B414 00458214*/ PPC::Runtime::ASM::beq(.L_8045B49C);
/*8045B418 00458218*/ PPC::Runtime::ASM::bge(.L_8045B448);
/*8045B41C 0045821C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xe);
/*8045B420 00458220*/ PPC::Runtime::ASM::beq(.L_8045B4B4);
/*8045B424 00458224*/ PPC::Runtime::ASM::bge(.L_8045B434);
/*8045B428 00458228*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x80);
/*8045B42C 0045822C*/ PPC::Runtime::ASM::beq(.L_8045B49C);
/*8045B430 00458230*/ PPC::Runtime::ASM::b(.L_8045B4B4);
RUNTIME_PPC_JUMP_LABEL(.L_8045B434, 0x8045B434) //this is a jump label
/*8045B434 00458234*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x6);
/*8045B438 00458238*/ PPC::Runtime::ASM::bge(.L_8045B4AC);
/*8045B43C 0045823C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0xc);
/*8045B440 00458240*/ PPC::Runtime::ASM::bge(.L_8045B4B4);
/*8045B444 00458244*/ PPC::Runtime::ASM::b(.L_8045B4A4);
RUNTIME_PPC_JUMP_LABEL(.L_8045B448, 0x8045B448) //this is a jump label
/*8045B448 00458248*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8045B44C 0045824C*/ PPC::Runtime::ASM::beq(.L_8045B474);
/*8045B450 00458250*/ PPC::Runtime::ASM::bge(.L_8045B464);
/*8045B454 00458254*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x3);
/*8045B458 00458258*/ PPC::Runtime::ASM::beq(.L_8045B47C);
/*8045B45C 0045825C*/ PPC::Runtime::ASM::bge(.L_8045B484);
/*8045B460 00458260*/ PPC::Runtime::ASM::b(.L_8045B48C);
RUNTIME_PPC_JUMP_LABEL(.L_8045B464, 0x8045B464) //this is a jump label
/*8045B464 00458264*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*8045B468 00458268*/ PPC::Runtime::ASM::beq(.L_8045B4B4);
/*8045B46C 0045826C*/ PPC::Runtime::ASM::bge(.L_8045B4B4);
/*8045B470 00458270*/ PPC::Runtime::ASM::b(.L_8045B494);
RUNTIME_PPC_JUMP_LABEL(.L_8045B474, 0x8045B474) //this is a jump label
/*8045B474 00458274*/ PPC::Runtime::ASM::li(context->r3, 0xb);
/*8045B478 00458278*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B47C, 0x8045B47C) //this is a jump label
/*8045B47C 0045827C*/ PPC::Runtime::ASM::li(context->r3, 0xe);
/*8045B480 00458280*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B484, 0x8045B484) //this is a jump label
/*8045B484 00458284*/ PPC::Runtime::ASM::li(context->r3, 0xf);
/*8045B488 00458288*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B48C, 0x8045B48C) //this is a jump label
/*8045B48C 0045828C*/ PPC::Runtime::ASM::li(context->r3, 0x6);
/*8045B490 00458290*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B494, 0x8045B494) //this is a jump label
/*8045B494 00458294*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8045B498 00458298*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B49C, 0x8045B49C) //this is a jump label
/*8045B49C 0045829C*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*8045B4A0 004582A0*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B4A4, 0x8045B4A4) //this is a jump label
/*8045B4A4 004582A4*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*8045B4A8 004582A8*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B4AC, 0x8045B4AC) //this is a jump label
/*8045B4AC 004582AC*/ PPC::Runtime::ASM::li(context->r3, 0xa);
/*8045B4B0 004582B0*/ PPC::Runtime::ASM::b(.L_8045B4B8);
RUNTIME_PPC_JUMP_LABEL(.L_8045B4B4, 0x8045B4B4) //this is a jump label
/*8045B4B4 004582B4*/ PPC::Runtime::ASM::li(context->r3, 0xc);
RUNTIME_PPC_JUMP_LABEL(.L_8045B4B8, 0x8045B4B8) //this is a jump label
/*8045B4B8 004582B8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0xd);
/*8045B4BC 004582BC*/ PPC::Runtime::ASM::bne(.L_8045B4C4);
/*8045B4C0 004582C0*/ PPC::Runtime::ASM::b(.L_8045B510);
RUNTIME_PPC_JUMP_LABEL(.L_8045B4C4, 0x8045B4C4) //this is a jump label
/*8045B4C4 004582C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r31));
/*8045B4C8 004582C8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045B4CC 004582CC*/ PPC::Runtime::ASM::bl(fn_8045B7A8);
/*8045B4D0 004582D0*/ PPC::Runtime::ASM::bl(fn_8045A600);
/*8045B4D4 004582D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r31));
/*8045B4D8 004582D8*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B4DC 004582DC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B4E0 004582E0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x1c);
/*8045B4E4 004582E4*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*8045B4E8 004582E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x618, context->r4));
/*8045B4EC 004582EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r31));
/*8045B4F0 004582F0*/ PPC::Runtime::ASM::bl(fn_8045A490);
/*8045B4F4 004582F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50c, context->r31));
/*8045B4F8 004582F8*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045B4FC 004582FC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045B500 00458300*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x1c);
/*8045B504 00458304*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*8045B508 00458308*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x614, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_8045B50C, 0x8045B50C) //this is a jump label
/*8045B50C 0045830C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8045B510, 0x8045B510) //this is a jump label
/*8045B510 00458310*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045B514 00458314*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8045B518 00458318*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8045B51C 0045831C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045B520 00458320*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8045B524 00458324*/ PPC::Runtime::ASM::blr();
}