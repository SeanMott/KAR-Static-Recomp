//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5D34.hpp"
#include "fn_802A5D34.hpp"
#include "fn_802A9764.hpp"



void fn_802A94CC(PPC::Runtime::GCContext* context)
{
/*802A94CC 002A62CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A94D0 002A62D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A94D4 002A62D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A94D8 002A62D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A94DC 002A62DC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A94E0 002A62E0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A94E4 002A62E4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A94E8 002A62E8*/ PPC::Runtime::ASM::beq(.L_802A9748);
/*802A94EC 002A62EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C1BE8 @ Get_MemoryOffset_HighBit);
/*802A94F0 002A62F0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb80);
/*802A94F4 002A62F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C1BE8 @ Get_MemoryOffset_LowBit);
/*802A94F8 002A62F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A94FC 002A62FC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A9500 002A6300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9504 002A6304*/ PPC::Runtime::ASM::beq(.L_802A9528);
/*802A9508 002A6308*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb80, context->r30));
/*802A950C 002A630C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A9510 002A6310*/ PPC::Runtime::ASM::beq(.L_802A9528);
/*802A9514 002A6314*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A9518 002A6318*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A951C 002A631C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A9520 002A6320*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A9524 002A6324*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A9528, 0x802A9528) //this is a jump label
/*802A9528 002A6328*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb7c);
/*802A952C 002A632C*/ PPC::Runtime::ASM::beq(.L_802A9550);
/*802A9530 002A6330*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb7c, context->r30));
/*802A9534 002A6334*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A9538 002A6338*/ PPC::Runtime::ASM::beq(.L_802A9550);
/*802A953C 002A633C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A9540 002A6340*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A9544 002A6344*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A9548 002A6348*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A954C 002A634C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A9550, 0x802A9550) //this is a jump label
/*802A9550 002A6350*/ PPC::Runtime::ASM::lis(context->r4, fn_802A5D34 @ Get_MemoryOffset_HighBit);
/*802A9554 002A6354*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xb6c);
/*802A9558 002A6358*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802A5D34 @ Get_MemoryOffset_LowBit);
/*802A955C 002A635C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802A9560 002A6360*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802A9564 002A6364*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802A9568 002A6368*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb1c);
/*802A956C 002A636C*/ PPC::Runtime::ASM::beq(.L_802A965C);
/*802A9570 002A6370*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802A9574 002A6374*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb60);
/*802A9578 002A6378*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802A957C 002A637C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*802A9580 002A6380*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802A9584 002A6384*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
/*802A9588 002A6388*/ PPC::Runtime::ASM::beq(.L_802A9598);
/*802A958C 002A638C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A9590 002A6390*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A9594 002A6394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb60, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A9598, 0x802A9598) //this is a jump label
/*802A9598 002A6398*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb1c);
/*802A959C 002A639C*/ PPC::Runtime::ASM::beq(.L_802A965C);
/*802A95A0 002A63A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802A95A4 002A63A4*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xb4c);
/*802A95A8 002A63A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802A95AC 002A63AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*802A95B0 002A63B0*/ PPC::Runtime::ASM::beq(.L_802A95E4);
/*802A95B4 002A63B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802A95B8 002A63B8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A95BC 002A63BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802A95C0 002A63C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
/*802A95C4 002A63C4*/ PPC::Runtime::ASM::beq(.L_802A95E4);
/*802A95C8 002A63C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802A95CC 002A63CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802A95D0 002A63D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
/*802A95D4 002A63D4*/ PPC::Runtime::ASM::beq(.L_802A95E4);
/*802A95D8 002A63D8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802A95DC 002A63DC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802A95E0 002A63E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A95E4, 0x802A95E4) //this is a jump label
/*802A95E4 002A63E4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb1c);
/*802A95E8 002A63E8*/ PPC::Runtime::ASM::beq(.L_802A965C);
/*802A95EC 002A63EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A95F0 002A63F0*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xb44);
/*802A95F4 002A63F4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A95F8 002A63F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*802A95FC 002A63FC*/ PPC::Runtime::ASM::beq(.L_802A9620);
/*802A9600 002A6400*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A9604 002A6404*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A9608 002A6408*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A960C 002A640C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb44, context->r30));
/*802A9610 002A6410*/ PPC::Runtime::ASM::beq(.L_802A9620);
/*802A9614 002A6414*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A9618 002A6418*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A961C 002A641C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb44, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A9620, 0x802A9620) //this is a jump label
/*802A9620 002A6420*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb1c);
/*802A9624 002A6424*/ PPC::Runtime::ASM::beq(.L_802A965C);
/*802A9628 002A6428*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A962C 002A642C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xb1c);
/*802A9630 002A6430*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A9634 002A6434*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*802A9638 002A6438*/ PPC::Runtime::ASM::beq(.L_802A965C);
/*802A963C 002A643C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A9640 002A6440*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xb1c);
/*802A9644 002A6444*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A9648 002A6448*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*802A964C 002A644C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb1c, context->r30));
/*802A9650 002A6450*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A9654 002A6454*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A9658 002A6458*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A965C, 0x802A965C) //this is a jump label
/*802A965C 002A645C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802A9660 002A6460*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A9664 002A6464*/ PPC::Runtime::ASM::bl(fn_802A9764);
/*802A9668 002A6468*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A966C 002A646C*/ PPC::Runtime::ASM::beq(.L_802A9738);
/*802A9670 002A6470*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802A9674 002A6474*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A9678 002A6478*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802A967C 002A647C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A9680 002A6480*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A9684 002A6484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9688 002A6488*/ PPC::Runtime::ASM::beq(.L_802A96AC);
/*802A968C 002A648C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A9690 002A6490*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A9694 002A6494*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A9698 002A6498*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802A969C 002A649C*/ PPC::Runtime::ASM::beq(.L_802A96AC);
/*802A96A0 002A64A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A96A4 002A64A4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A96A8 002A64A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A96AC, 0x802A96AC) //this is a jump label
/*802A96AC 002A64AC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A96B0 002A64B0*/ PPC::Runtime::ASM::beq(.L_802A9724);
/*802A96B4 002A64B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A96B8 002A64B8*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802A96BC 002A64BC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A96C0 002A64C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A96C4 002A64C4*/ PPC::Runtime::ASM::beq(.L_802A96E8);
/*802A96C8 002A64C8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A96CC 002A64CC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A96D0 002A64D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A96D4 002A64D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802A96D8 002A64D8*/ PPC::Runtime::ASM::beq(.L_802A96E8);
/*802A96DC 002A64DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A96E0 002A64E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A96E4 002A64E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A96E8, 0x802A96E8) //this is a jump label
/*802A96E8 002A64E8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A96EC 002A64EC*/ PPC::Runtime::ASM::beq(.L_802A9724);
/*802A96F0 002A64F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A96F4 002A64F4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A96F8 002A64F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A96FC 002A64FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9700 002A6500*/ PPC::Runtime::ASM::beq(.L_802A9724);
/*802A9704 002A6504*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A9708 002A6508*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802A970C 002A650C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A9710 002A6510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9714 002A6514*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A9718 002A6518*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A971C 002A651C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A9720 002A6520*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A9724, 0x802A9724) //this is a jump label
/*802A9724 002A6524*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A9728 002A6528*/ PPC::Runtime::ASM::beq(.L_802A9738);
/*802A972C 002A652C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A9730 002A6530*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A9734 002A6534*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A9738, 0x802A9738) //this is a jump label
/*802A9738 002A6538*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A973C 002A653C*/ PPC::Runtime::ASM::ble(.L_802A9748);
/*802A9740 002A6540*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A9744 002A6544*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A9748, 0x802A9748) //this is a jump label
/*802A9748 002A6548*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A974C 002A654C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A9750 002A6550*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A9754 002A6554*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A9758 002A6558*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A975C 002A655C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A9760 002A6560*/ PPC::Runtime::ASM::blr();
}