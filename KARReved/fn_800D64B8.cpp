//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D64B8(PPC::Runtime::GCContext* context)
{
/*800D64B8 000D32B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*800D64BC 000D32BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D64C0 000D32C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800D64C4 000D32C4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800D64C8 000D32C8*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800D64CC 000D32CC*/ PPC::Runtime::ASM::mulli(context->r0, context->r8, 0x1c);
/*800D64D0 000D32D0*/ PPC::Runtime::ASM::lis(context->r12, MemoryOffset_921 @ Get_MemoryOffset_HighBit);
/*800D64D4 000D32D4*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*800D64D8 000D32D8*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*800D64DC 000D32DC*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*800D64E0 000D32E0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800D64E4 000D32E4*/ PPC::Runtime::ASM::lwzx(context->r5, context->r11, context->r0);
/*800D64E8 000D32E8*/ PPC::Runtime::ASM::mulli(context->r30, context->r8, 0x98);
/*800D64EC 000D32EC*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800D64F0 000D32F0*/ PPC::Runtime::ASM::add(context->r7, context->r11, context->r0);
/*800D64F4 000D32F4*/ PPC::Runtime::ASM::slwi(context->r5, context->r5, 3);
/*800D64F8 000D32F8*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800D64FC 000D32FC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6500 000D3300*/ PPC::Runtime::ASM::lwzx(context->r5, context->r9, context->r5);
/*800D6504 000D3304*/ PPC::Runtime::ASM::add(context->r7, context->r10, context->r30);
/*800D6508 000D3308*/ PPC::Runtime::ASM::mulli(context->r8, context->r11, 0x18);
/*800D650C 000D330C*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800D6510 000D3310*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*800D6514 000D3314*/ PPC::Runtime::ASM::addi(context->r31, context->r12, MemoryOffset_921 @ Get_MemoryOffset_LowBit);
/*800D6518 000D3318*/ PPC::Runtime::ASM::slwi(context->r10, context->r26, 6);
/*800D651C 000D331C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*800D6520 000D3320*/ PPC::Runtime::ASM::mulli(context->r11, context->r11, 0xc);
/*800D6524 000D3324*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*800D6528 000D3328*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D652C 000D332C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800D6530 000D3330*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r8);
/*800D6534 000D3334*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800D6538 000D3338*/ PPC::Runtime::ASM::add(context->r3, context->r25, context->r11);
/*800D653C 000D333C*/ PPC::Runtime::ASM::mulli(context->r12, context->r26, 0x14);
/*800D6540 000D3340*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*800D6544 000D3344*/ PPC::Runtime::ASM::add(context->r11, context->r8, context->r0);
/*800D6548 000D3348*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r11));
/*800D654C 000D334C*/ PPC::Runtime::ASM::add(context->r8, context->r24, context->r12);
/*800D6550 000D3350*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800D6554 000D3354*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800D6558 000D3358*/ PPC::Runtime::ASM::add(context->r10, context->r11, context->r10);
/*800D655C 000D335C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6560 000D3360*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*800D6564 000D3364*/ PPC::Runtime::ASM::add(context->r10, context->r10, context->r0);
/*800D6568 000D3368*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r10));
/*800D656C 000D336C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*800D6570 000D3370*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*800D6574 000D3374*/ PPC::Runtime::ASM::add(context->r10, context->r10, context->r0);
/*800D6578 000D3378*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r10));
/*800D657C 000D337C*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r7));
/*800D6580 000D3380*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*800D6584 000D3384*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r0);
/*800D6588 000D3388*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*800D658C 000D338C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r7));
/*800D6590 000D3390*/ PPC::Runtime::ASM::b(.L_800D65C0);
RUNTIME_PPC_JUMP_LABEL(.L_800D6594, 0x800D6594) //this is a jump label
/*800D6594 000D3394*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*800D6598 000D3398*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x1);
/*800D659C 000D339C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D65A0 000D33A0*/ PPC::Runtime::ASM::add(context->r10, context->r0, context->r5);
/*800D65A4 000D33A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D65A8 000D33A8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x18);
/*800D65AC 000D33AC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*800D65B0 000D33B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r10));
/*800D65B4 000D33B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D65B8 000D33B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*800D65BC 000D33BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r10));
RUNTIME_PPC_JUMP_LABEL(.L_800D65C0, 0x800D65C0) //this is a jump label
/*800D65C0 000D33C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*800D65C4 000D33C4*/ PPC::Runtime::ASM::cmpw(context->r9, context->r0);
/*800D65C8 000D33C8*/ PPC::Runtime::ASM::blt(.L_800D6594);
/*800D65CC 000D33CC*/ PPC::Runtime::ASM::mr(context->r3, context->r8);
/*800D65D0 000D33D0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800D65D4 000D33D4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800D65D8 000D33D8*/ PPC::Runtime::ASM::b(.L_800D668C);
RUNTIME_PPC_JUMP_LABEL(.L_800D65DC, 0x800D65DC) //this is a jump label
/*800D65DC 000D33DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D65E0 000D33E0*/ PPC::Runtime::ASM::addi(context->r25, context->r5, 0x4);
/*800D65E4 000D33E4*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D65E8 000D33E8*/ PPC::Runtime::ASM::addi(context->r12, context->r5, 0x8);
/*800D65EC 000D33EC*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*800D65F0 000D33F0*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D65F4 000D33F4*/ PPC::Runtime::ASM::addi(context->r9, context->r5, 0x30);
/*800D65F8 000D33F8*/ PPC::Runtime::ASM::addi(context->r8, context->r5, 0x34);
/*800D65FC 000D33FC*/ PPC::Runtime::ASM::add(context->r0, context->r10, context->r0);
/*800D6600 000D3400*/ PPC::Runtime::ASM::addi(context->r10, context->r5, 0x3c);
/*800D6604 000D3404*/ PPC::Runtime::ASM::stwx(context->r0, context->r11, context->r5);
/*800D6608 000D3408*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x38);
/*800D660C 000D340C*/ PPC::Runtime::ASM::li(context->r11, 0x1);
/*800D6610 000D3410*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x40);
/*800D6614 000D3414*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800D6618 000D3418*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*800D661C 000D341C*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D6620 000D3420*/ PPC::Runtime::ASM::mulli(context->r27, context->r26, 0x18);
/*800D6624 000D3424*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6628 000D3428*/ PPC::Runtime::ASM::add(context->r27, context->r24, context->r27);
/*800D662C 000D342C*/ PPC::Runtime::ASM::stwx(context->r27, context->r26, context->r25);
/*800D6630 000D3430*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D6634 000D3434*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*800D6638 000D3438*/ PPC::Runtime::ASM::mulli(context->r26, context->r26, 0x18);
/*800D663C 000D343C*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6640 000D3440*/ PPC::Runtime::ASM::add(context->r26, context->r25, context->r26);
/*800D6644 000D3444*/ PPC::Runtime::ASM::stwx(context->r26, context->r27, context->r12);
/*800D6648 000D3448*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800D664C 000D344C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6650 000D3450*/ PPC::Runtime::ASM::stwx(context->r27, context->r12, context->r9);
/*800D6654 000D3454*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*800D6658 000D3458*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*800D665C 000D345C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6660 000D3460*/ PPC::Runtime::ASM::stwx(context->r12, context->r9, context->r8);
/*800D6664 000D3464*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6668 000D3468*/ PPC::Runtime::ASM::lbzx(context->r8, context->r9, context->r10);
/*800D666C 000D346C*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r11, 6, 25, 25);
/*800D6670 000D3470*/ PPC::Runtime::ASM::stbx(context->r8, context->r9, context->r10);
/*800D6674 000D3474*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6678 000D3478*/ PPC::Runtime::ASM::lbzx(context->r8, context->r9, context->r10);
/*800D667C 000D347C*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r11, 5, 26, 26);
/*800D6680 000D3480*/ PPC::Runtime::ASM::stbx(context->r8, context->r9, context->r10);
/*800D6684 000D3484*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D6688 000D3488*/ PPC::Runtime::ASM::stwx(context->r7, context->r8, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800D668C, 0x800D668C) //this is a jump label
/*800D668C 000D348C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*800D6690 000D3490*/ PPC::Runtime::ASM::cmpw(context->r6, context->r0);
/*800D6694 000D3494*/ PPC::Runtime::ASM::blt(.L_800D65DC);
/*800D6698 000D3498*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*800D669C 000D349C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*800D66A0 000D34A0*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 26, 26);
/*800D66A4 000D34A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x20);
/*800D66A8 000D34A8*/ PPC::Runtime::ASM::bne(.L_800D670C);
/*800D66AC 000D34AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*800D66B0 000D34B0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*800D66B4 000D34B4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r5);
/*800D66B8 000D34B8*/ PPC::Runtime::ASM::ble(.L_800D66DC);
/*800D66BC 000D34BC*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*800D66C0 000D34C0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x4c);
/*800D66C4 000D34C4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800D66C8 000D34C8*/ PPC::Runtime::ASM::bl(OSReport);
/*800D66CC 000D34CC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x24);
/*800D66D0 000D34D0*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x60);
/*800D66D4 000D34D4*/ PPC::Runtime::ASM::li(context->r4, 0xc9);
/*800D66D8 000D34D8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800D66DC, 0x800D66DC) //this is a jump label
/*800D66DC 000D34DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*800D66E0 000D34E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800D66E4 000D34E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*800D66E8 000D34E8*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r30);
/*800D66EC 000D34EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800D66F0 000D34F0*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r0);
/*800D66F4 000D34F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800D66F8 000D34F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D66FC 000D34FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*800D6700 000D3500*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*800D6704 000D3504*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*800D6708 000D3508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_800D670C, 0x800D670C) //this is a jump label
/*800D670C 000D350C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*800D6710 000D3510*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800D6714 000D3514*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*800D6718 000D3518*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D671C 000D351C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*800D6720 000D3520*/ PPC::Runtime::ASM::blr();
}