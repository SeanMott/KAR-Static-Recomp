//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802A5D34.hpp"
#include "fn_802A5D34.hpp"
#include "fn_802A6734.hpp"



void fn_802A649C(PPC::Runtime::GCContext* context)
{
/*802A649C 002A329C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802A64A0 002A32A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A64A4 002A32A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A64A8 002A32A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A64AC 002A32AC*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802A64B0 002A32B0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 802A64B4 002A32B4  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*802A64B8 002A32B8*/ PPC::Runtime::ASM::beq(.L_802A6718);
/*802A64BC 002A32BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C310C @ Get_MemoryOffset_HighBit);
/*802A64C0 002A32C0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa7c);
/*802A64C4 002A32C4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804C310C @ Get_MemoryOffset_LowBit);
/*802A64C8 002A32C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A64CC 002A32CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A64D0 002A32D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A64D4 002A32D4*/ PPC::Runtime::ASM::beq(.L_802A64F8);
/*802A64D8 002A32D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa7c, context->r30));
/*802A64DC 002A32DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A64E0 002A32E0*/ PPC::Runtime::ASM::beq(.L_802A64F8);
/*802A64E4 002A32E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A64E8 002A32E8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A64EC 002A32EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A64F0 002A32F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A64F4 002A32F4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A64F8, 0x802A64F8) //this is a jump label
/*802A64F8 002A32F8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa78);
/*802A64FC 002A32FC*/ PPC::Runtime::ASM::beq(.L_802A6520);
/*802A6500 002A3300*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa78, context->r30));
/*802A6504 002A3304*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802A6508 002A3308*/ PPC::Runtime::ASM::beq(.L_802A6520);
/*802A650C 002A330C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A6510 002A3310*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802A6514 002A3314*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802A6518 002A3318*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A651C 002A331C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A6520, 0x802A6520) //this is a jump label
/*802A6520 002A3320*/ PPC::Runtime::ASM::lis(context->r4, fn_802A5D34 @ Get_MemoryOffset_HighBit);
/*802A6524 002A3324*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa68);
/*802A6528 002A3328*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_802A5D34 @ Get_MemoryOffset_LowBit);
/*802A652C 002A332C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802A6530 002A3330*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*802A6534 002A3334*/ PPC::Runtime::ASM::bl(fn___destroy_arr);
/*802A6538 002A3338*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A653C 002A333C*/ PPC::Runtime::ASM::beq(.L_802A662C);
/*802A6540 002A3340*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC4A4 @ Get_MemoryOffset_HighBit);
/*802A6544 002A3344*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa5c);
/*802A6548 002A3348*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BC4A4 @ Get_MemoryOffset_LowBit);
/*802A654C 002A334C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6550 002A3350*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x48);
/*802A6554 002A3354*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r30));
/*802A6558 002A3358*/ PPC::Runtime::ASM::beq(.L_802A6568);
/*802A655C 002A335C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A6560 002A3360*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A6564 002A3364*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa5c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6568, 0x802A6568) //this is a jump label
/*802A6568 002A3368*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A656C 002A336C*/ PPC::Runtime::ASM::beq(.L_802A662C);
/*802A6570 002A3370*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F58DC @ Get_MemoryOffset_HighBit);
/*802A6574 002A3374*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xa48);
/*802A6578 002A3378*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F58DC @ Get_MemoryOffset_LowBit);
/*802A657C 002A337C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6580 002A3380*/ PPC::Runtime::ASM::beq(.L_802A65B4);
/*802A6584 002A3384*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5970 @ Get_MemoryOffset_HighBit);
/*802A6588 002A3388*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A658C 002A338C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5970 @ Get_MemoryOffset_LowBit);
/*802A6590 002A3390*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
/*802A6594 002A3394*/ PPC::Runtime::ASM::beq(.L_802A65B4);
/*802A6598 002A3398*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F5078 @ Get_MemoryOffset_HighBit);
/*802A659C 002A339C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F5078 @ Get_MemoryOffset_LowBit);
/*802A65A0 002A33A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
/*802A65A4 002A33A4*/ PPC::Runtime::ASM::beq(.L_802A65B4);
/*802A65A8 002A33A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC430 @ Get_MemoryOffset_HighBit);
/*802A65AC 002A33AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC430 @ Get_MemoryOffset_LowBit);
/*802A65B0 002A33B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa48, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A65B4, 0x802A65B4) //this is a jump label
/*802A65B4 002A33B4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A65B8 002A33B8*/ PPC::Runtime::ASM::beq(.L_802A662C);
/*802A65BC 002A33BC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A65C0 002A33C0*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0xa40);
/*802A65C4 002A33C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A65C8 002A33C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A65CC 002A33CC*/ PPC::Runtime::ASM::beq(.L_802A65F0);
/*802A65D0 002A33D0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A65D4 002A33D4*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A65D8 002A33D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A65DC 002A33DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r30));
/*802A65E0 002A33E0*/ PPC::Runtime::ASM::beq(.L_802A65F0);
/*802A65E4 002A33E4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A65E8 002A33E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A65EC 002A33EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa40, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A65F0, 0x802A65F0) //this is a jump label
/*802A65F0 002A33F0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A65F4 002A33F4*/ PPC::Runtime::ASM::beq(.L_802A662C);
/*802A65F8 002A33F8*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A65FC 002A33FC*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xa18);
/*802A6600 002A3400*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A6604 002A3404*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6608 002A3408*/ PPC::Runtime::ASM::beq(.L_802A662C);
/*802A660C 002A340C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A6610 002A3410*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xa18);
/*802A6614 002A3414*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A6618 002A3418*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A661C 002A341C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa18, context->r30));
/*802A6620 002A3420*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A6624 002A3424*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A6628 002A3428*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A662C, 0x802A662C) //this is a jump label
/*802A662C 002A342C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x48);
/*802A6630 002A3430*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802A6634 002A3434*/ PPC::Runtime::ASM::bl(fn_802A6734);
/*802A6638 002A3438*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A663C 002A343C*/ PPC::Runtime::ASM::beq(.L_802A6708);
/*802A6640 002A3440*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F66FC @ Get_MemoryOffset_HighBit);
/*802A6644 002A3444*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A6648 002A3448*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F66FC @ Get_MemoryOffset_LowBit);
/*802A664C 002A344C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A6650 002A3450*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x10);
/*802A6654 002A3454*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6658 002A3458*/ PPC::Runtime::ASM::beq(.L_802A667C);
/*802A665C 002A345C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A6660 002A3460*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x3c);
/*802A6664 002A3464*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A6668 002A3468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*802A666C 002A346C*/ PPC::Runtime::ASM::beq(.L_802A667C);
/*802A6670 002A3470*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A6674 002A3474*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A6678 002A3478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A667C, 0x802A667C) //this is a jump label
/*802A667C 002A347C*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A6680 002A3480*/ PPC::Runtime::ASM::beq(.L_802A66F4);
/*802A6684 002A3484*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*802A6688 002A3488*/ PPC::Runtime::ASM::addic.(context->r4, context->r30, 0x30);
/*802A668C 002A348C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*802A6690 002A3490*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A6694 002A3494*/ PPC::Runtime::ASM::beq(.L_802A66B8);
/*802A6698 002A3498*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*802A669C 002A349C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802A66A0 002A34A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*802A66A4 002A34A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
/*802A66A8 002A34A8*/ PPC::Runtime::ASM::beq(.L_802A66B8);
/*802A66AC 002A34AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*802A66B0 002A34B0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*802A66B4 002A34B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A66B8, 0x802A66B8) //this is a jump label
/*802A66B8 002A34B8*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A66BC 002A34BC*/ PPC::Runtime::ASM::beq(.L_802A66F4);
/*802A66C0 002A34C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*802A66C4 002A34C4*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x8);
/*802A66C8 002A34C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*802A66CC 002A34CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A66D0 002A34D0*/ PPC::Runtime::ASM::beq(.L_802A66F4);
/*802A66D4 002A34D4*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*802A66D8 002A34D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*802A66DC 002A34DC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*802A66E0 002A34E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A66E4 002A34E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802A66E8 002A34E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*802A66EC 002A34EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A66F0 002A34F0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_802A66F4, 0x802A66F4) //this is a jump label
/*802A66F4 002A34F4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*802A66F8 002A34F8*/ PPC::Runtime::ASM::beq(.L_802A6708);
/*802A66FC 002A34FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC454 @ Get_MemoryOffset_HighBit);
/*802A6700 002A3500*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC454 @ Get_MemoryOffset_LowBit);
/*802A6704 002A3504*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_802A6708, 0x802A6708) //this is a jump label
/*802A6708 002A3508*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*802A670C 002A350C*/ PPC::Runtime::ASM::ble(.L_802A6718);
/*802A6710 002A3510*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6714 002A3514*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802A6718, 0x802A6718) //this is a jump label
/*802A6718 002A3518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A671C 002A351C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802A6720 002A3520*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802A6724 002A3524*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A6728 002A3528*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A672C 002A352C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802A6730 002A3530*/ PPC::Runtime::ASM::blr();
}