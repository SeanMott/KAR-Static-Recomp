//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80368560.hpp"
#include "fn_80368D00.hpp"
#include "fn_8037B33C.hpp"



void fn_803683B4(PPC::Runtime::GCContext* context)
{
/*803683B4 003651B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x130, context->r1));
/*803683B8 003651B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803683BC 003651BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*803683C0 003651C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r1));
/*803683C4 003651C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1));
/*803683C8 003651C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r1));
/*803683CC 003651CC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803683D0 003651D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803683D4 003651D4*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x40);
/*803683D8 003651D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803683DC 003651DC*/ PPC::Runtime::ASM::beq(.L_80368544);
/*803683E0 003651E0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803683E4 003651E4*/ PPC::Runtime::ASM::bl(fn_80368560);
/*803683E8 003651E8*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x10);
/*803683EC 003651EC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803683F0 003651F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803683F4 003651F4*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0x4);
/*803683F8 003651F8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*803683FC 003651FC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*80368400 00365200*/ PPC::Runtime::ASM::bl(fn_80368D00);
/*80368404 00365204*/ PPC::Runtime::ASM::lis(context->r3, lbl_804EFA10 @ Get_MemoryOffset_HighBit);
/*80368408 00365208*/ PPC::Runtime::ASM::addic.(context->r29, context->r1, 0xd4);
/*8036840C 0036520C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804EFA10 @ Get_MemoryOffset_LowBit);
/*80368410 00365210*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x24);
/*80368414 00365214*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x28);
/*80368418 00365218*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036841C 0036521C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x68);
/*80368420 00365220*/ PPC::Runtime::ASM::addi(context->r31, context->r1, 0x64);
/*80368424 00365224*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80368428 00365228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8036842C 0036522C*/ PPC::Runtime::ASM::beq(.L_80368470);
/*80368430 00365230*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*80368434 00365234*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80368438 00365238*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8036843C 0036523C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80368440 00365240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80368444 00365244*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*80368448 00365248*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8036844C 0036524C*/ PPC::Runtime::ASM::beq(.L_80368470);
/*80368450 00365250*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*80368454 00365254*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80368458 00365258*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8036845C 0036525C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80368460 00365260*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80368464 00365264*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80368468 00365268*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036846C 0036526C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80368470, 0x80368470) //this is a jump label
/*80368470 00365270*/ PPC::Runtime::ASM::addic.(context->r3, context->r1, 0x7c);
/*80368474 00365274*/ PPC::Runtime::ASM::beq(.L_803684D4);
/*80368478 00365278*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF424 @ Get_MemoryOffset_HighBit);
/*8036847C 0036527C*/ PPC::Runtime::ASM::addic.(context->r5, context->r1, 0xa0);
/*80368480 00365280*/ PPC::Runtime::ASM::addi(context->r4, context->r4, lbl_804BF424 @ Get_MemoryOffset_LowBit);
/*80368484 00365284*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80368488 00365288*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x38);
/*8036848C 0036528C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*80368490 00365290*/ PPC::Runtime::ASM::beq(.L_803684A0);
/*80368494 00365294*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF3C0 @ Get_MemoryOffset_HighBit);
/*80368498 00365298*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF3C0 @ Get_MemoryOffset_LowBit);
/*8036849C 0036529C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803684A0, 0x803684A0) //this is a jump label
/*803684A0 003652A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803684A4 003652A4*/ PPC::Runtime::ASM::beq(.L_803684D4);
/*803684A8 003652A8*/ PPC::Runtime::ASM::lis(context->r4, FuncPtrList_2 @ Get_MemoryOffset_HighBit);
/*803684AC 003652AC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, FuncPtrList_2 @ Get_MemoryOffset_LowBit);
/*803684B0 003652B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803684B4 003652B4*/ PPC::Runtime::ASM::beq(.L_803684D4);
/*803684B8 003652B8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF4DC @ Get_MemoryOffset_HighBit);
/*803684BC 003652BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF4DC @ Get_MemoryOffset_LowBit);
/*803684C0 003652C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803684C4 003652C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803684C8 003652C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803684CC 003652CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803684D0 003652D0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803684D4, 0x803684D4) //this is a jump label
/*803684D4 003652D4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803684D8 003652D8*/ PPC::Runtime::ASM::beq(.L_803684FC);
/*803684DC 003652DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BF398 @ Get_MemoryOffset_HighBit);
/*803684E0 003652E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803684E4 003652E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BF398 @ Get_MemoryOffset_LowBit);
/*803684E8 003652E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*803684EC 003652EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803684F0 003652F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*803684F4 003652F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803684F8 003652F8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803684FC, 0x803684FC) //this is a jump label
/*803684FC 003652FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDBE8 @ Get_MemoryOffset_HighBit);
/*80368500 00365300*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80368504 00365304*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BDBE8 @ Get_MemoryOffset_LowBit);
/*80368508 00365308*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x28);
/*8036850C 0036530C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80368510 00365310*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80368514 00365314*/ PPC::Runtime::ASM::beq(.L_80368538);
/*80368518 00365318*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDBC0 @ Get_MemoryOffset_HighBit);
/*8036851C 0036531C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80368520 00365320*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDBC0 @ Get_MemoryOffset_LowBit);
/*80368524 00365324*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80368528 00365328*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8036852C 0036532C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r12));
/*80368530 00365330*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80368534 00365334*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80368538, 0x80368538) //this is a jump label
/*80368538 00365338*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDB74 @ Get_MemoryOffset_HighBit);
/*8036853C 0036533C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDB74 @ Get_MemoryOffset_LowBit);
/*80368540 00365340*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80368544, 0x80368544) //this is a jump label
/*80368544 00365344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r1));
/*80368548 00365348*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12c, context->r1));
/*8036854C 0036534C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x128, context->r1));
/*80368550 00365350*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x124, context->r1));
/*80368554 00365354*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80368558 00365358*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x130);
/*8036855C 0036535C*/ PPC::Runtime::ASM::blr();
}