//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B3944.hpp"
#include "fn_800B5554.hpp"
#include "fn_800BABD0.hpp"
#include "fn_800BAC5C.hpp"
#include "fn_800BACF4.hpp"
#include "fn_800B6018.hpp"
#include "fn_800BAB78.hpp"
#include "fn_800B5B94.hpp"
#include "fn_800BA738.hpp"



void fn_800B94E8(PPC::Runtime::GCContext* context)
{
/*800B94E8 000B62E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*800B94EC 000B62EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800B94F0 000B62F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800B94F4 000B62F4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*800B94F8 000B62F8*/ PPC::Runtime::ASM::bl(_savegpr_24);
/*800B94FC 000B62FC*/ PPC::Runtime::ASM::lis(context->r8, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B9500 000B6300*/ PPC::Runtime::ASM::li(context->r0, 0x9);
/*800B9504 000B6304*/ PPC::Runtime::ASM::addi(context->r8, context->r8, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B9508 000B6308*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*800B950C 000B630C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*800B9510 000B6310*/ PPC::Runtime::ASM::mr(context->r25, context->r5);
/*800B9514 000B6314*/ PPC::Runtime::ASM::mr(context->r26, context->r6);
/*800B9518 000B6318*/ PPC::Runtime::ASM::mr(context->r27, context->r7);
/*800B951C 000B631C*/ PPC::Runtime::ASM::addi(context->r4, context->r8, 0x14);
/*800B9520 000B6320*/ PPC::Runtime::ASM::li(context->r31, 0x5);
/*800B9524 000B6324*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_800B9528, 0x800B9528) //this is a jump label
/*800B9528 000B6328*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800B952C 000B632C*/ PPC::Runtime::ASM::blt(.L_800B9538);
/*800B9530 000B6330*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x20);
/*800B9534 000B6334*/ PPC::Runtime::ASM::blt(.L_800B9540);
RUNTIME_PPC_JUMP_LABEL(.L_800B9538, 0x800B9538) //this is a jump label
/*800B9538 000B6338*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B953C 000B633C*/ PPC::Runtime::ASM::b(.L_800B9544);
RUNTIME_PPC_JUMP_LABEL(.L_800B9540, 0x800B9540) //this is a jump label
/*800B9540 000B6340*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800B9544, 0x800B9544) //this is a jump label
/*800B9544 000B6344*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B9548 000B6348*/ PPC::Runtime::ASM::beq(.L_800B9554);
/*800B954C 000B634C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B9550 000B6350*/ PPC::Runtime::ASM::b(.L_800B9558);
RUNTIME_PPC_JUMP_LABEL(.L_800B9554, 0x800B9554) //this is a jump label
/*800B9554 000B6354*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B9558, 0x800B9558) //this is a jump label
/*800B9558 000B6358*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B955C 000B635C*/ PPC::Runtime::ASM::beq(.L_800B9568);
/*800B9560 000B6360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B9564 000B6364*/ PPC::Runtime::ASM::b(.L_800B956C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9568, 0x800B9568) //this is a jump label
/*800B9568 000B6368*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B956C, 0x800B956C) //this is a jump label
/*800B956C 000B636C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B9570 000B6370*/ PPC::Runtime::ASM::bne(.L_800B9578);
/*800B9574 000B6374*/ PPC::Runtime::ASM::b(.L_800B964C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9578, 0x800B9578) //this is a jump label
/*800B9578 000B6378*/ PPC::Runtime::ASM::addic.(context->r31, context->r31, 0x1);
/*800B957C 000B637C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B9580 000B6380*/ PPC::Runtime::ASM::blt(.L_800B958C);
/*800B9584 000B6384*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x20);
/*800B9588 000B6388*/ PPC::Runtime::ASM::blt(.L_800B9594);
RUNTIME_PPC_JUMP_LABEL(.L_800B958C, 0x800B958C) //this is a jump label
/*800B958C 000B638C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B9590 000B6390*/ PPC::Runtime::ASM::b(.L_800B9598);
RUNTIME_PPC_JUMP_LABEL(.L_800B9594, 0x800B9594) //this is a jump label
/*800B9594 000B6394*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800B9598, 0x800B9598) //this is a jump label
/*800B9598 000B6398*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B959C 000B639C*/ PPC::Runtime::ASM::beq(.L_800B95A8);
/*800B95A0 000B63A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B95A4 000B63A4*/ PPC::Runtime::ASM::b(.L_800B95AC);
RUNTIME_PPC_JUMP_LABEL(.L_800B95A8, 0x800B95A8) //this is a jump label
/*800B95A8 000B63A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B95AC, 0x800B95AC) //this is a jump label
/*800B95AC 000B63AC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B95B0 000B63B0*/ PPC::Runtime::ASM::beq(.L_800B95BC);
/*800B95B4 000B63B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B95B8 000B63B8*/ PPC::Runtime::ASM::b(.L_800B95C0);
RUNTIME_PPC_JUMP_LABEL(.L_800B95BC, 0x800B95BC) //this is a jump label
/*800B95BC 000B63BC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B95C0, 0x800B95C0) //this is a jump label
/*800B95C0 000B63C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B95C4 000B63C4*/ PPC::Runtime::ASM::bne(.L_800B95CC);
/*800B95C8 000B63C8*/ PPC::Runtime::ASM::b(.L_800B964C);
RUNTIME_PPC_JUMP_LABEL(.L_800B95CC, 0x800B95CC) //this is a jump label
/*800B95CC 000B63CC*/ PPC::Runtime::ASM::addic.(context->r31, context->r31, 0x1);
/*800B95D0 000B63D0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B95D4 000B63D4*/ PPC::Runtime::ASM::blt(.L_800B95E0);
/*800B95D8 000B63D8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x20);
/*800B95DC 000B63DC*/ PPC::Runtime::ASM::blt(.L_800B95E8);
RUNTIME_PPC_JUMP_LABEL(.L_800B95E0, 0x800B95E0) //this is a jump label
/*800B95E0 000B63E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B95E4 000B63E4*/ PPC::Runtime::ASM::b(.L_800B95EC);
RUNTIME_PPC_JUMP_LABEL(.L_800B95E8, 0x800B95E8) //this is a jump label
/*800B95E8 000B63E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_800B95EC, 0x800B95EC) //this is a jump label
/*800B95EC 000B63EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B95F0 000B63F0*/ PPC::Runtime::ASM::beq(.L_800B95FC);
/*800B95F4 000B63F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B95F8 000B63F8*/ PPC::Runtime::ASM::b(.L_800B9600);
RUNTIME_PPC_JUMP_LABEL(.L_800B95FC, 0x800B95FC) //this is a jump label
/*800B95FC 000B63FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B9600, 0x800B9600) //this is a jump label
/*800B9600 000B6400*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B9604 000B6404*/ PPC::Runtime::ASM::beq(.L_800B9610);
/*800B9608 000B6408*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B960C 000B640C*/ PPC::Runtime::ASM::b(.L_800B9614);
RUNTIME_PPC_JUMP_LABEL(.L_800B9610, 0x800B9610) //this is a jump label
/*800B9610 000B6410*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B9614, 0x800B9614) //this is a jump label
/*800B9614 000B6414*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800B9618 000B6418*/ PPC::Runtime::ASM::bne(.L_800B9620);
/*800B961C 000B641C*/ PPC::Runtime::ASM::b(.L_800B964C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9620, 0x800B9620) //this is a jump label
/*800B9620 000B6420*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*800B9624 000B6424*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*800B9628 000B6428*/ PPC::Runtime::ASM::bdnz(.L_800B9528);
/*800B962C 000B642C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x20);
/*800B9630 000B6430*/ PPC::Runtime::ASM::blt(.L_800B9648);
/*800B9634 000B6434*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_781 @ Get_MemoryOffset_HighBit);
/*800B9638 000B6438*/ PPC::Runtime::ASM::li(context->r3, String_ "cmlib." Get_MemoryOffset_SDA21);
/*800B963C 000B643C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_781 @ Get_MemoryOffset_LowBit);
/*800B9640 000B6440*/ PPC::Runtime::ASM::li(context->r4, 0x4ab);
/*800B9644 000B6444*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800B9648, 0x800B9648) //this is a jump label
/*800B9648 000B6448*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B964C, 0x800B964C) //this is a jump label
/*800B964C 000B644C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B9650 000B6450*/ PPC::Runtime::ASM::bl(fn_800B3944);
/*800B9654 000B6454*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800B9658 000B6458*/ PPC::Runtime::ASM::blt(.L_800B9664);
/*800B965C 000B645C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x20);
/*800B9660 000B6460*/ PPC::Runtime::ASM::blt(.L_800B966C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9664, 0x800B9664) //this is a jump label
/*800B9664 000B6464*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B9668 000B6468*/ PPC::Runtime::ASM::b(.L_800B9680);
RUNTIME_PPC_JUMP_LABEL(.L_800B966C, 0x800B966C) //this is a jump label
/*800B966C 000B646C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B9670 000B6470*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*800B9674 000B6474*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B9678 000B6478*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800B967C 000B647C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800B9680, 0x800B9680) //this is a jump label
/*800B9680 000B6480*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B9684 000B6484*/ PPC::Runtime::ASM::beq(.L_800B9690);
/*800B9688 000B6488*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B968C 000B648C*/ PPC::Runtime::ASM::b(.L_800B9694);
RUNTIME_PPC_JUMP_LABEL(.L_800B9690, 0x800B9690) //this is a jump label
/*800B9690 000B6490*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B9694, 0x800B9694) //this is a jump label
/*800B9694 000B6494*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B9698 000B6498*/ PPC::Runtime::ASM::beq(.L_800B96A4);
/*800B969C 000B649C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800B96A0 000B64A0*/ PPC::Runtime::ASM::b(.L_800B96A8);
RUNTIME_PPC_JUMP_LABEL(.L_800B96A4, 0x800B96A4) //this is a jump label
/*800B96A4 000B64A4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B96A8, 0x800B96A8) //this is a jump label
/*800B96A8 000B64A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B96AC 000B64AC*/ PPC::Runtime::ASM::bl(fn_800B5554);
/*800B96B0 000B64B0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*800B96B4 000B64B4*/ PPC::Runtime::ASM::blt(.L_800B96C0);
/*800B96B8 000B64B8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x20);
/*800B96BC 000B64BC*/ PPC::Runtime::ASM::blt(.L_800B96C8);
RUNTIME_PPC_JUMP_LABEL(.L_800B96C0, 0x800B96C0) //this is a jump label
/*800B96C0 000B64C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B96C4 000B64C4*/ PPC::Runtime::ASM::b(.L_800B96DC);
RUNTIME_PPC_JUMP_LABEL(.L_800B96C8, 0x800B96C8) //this is a jump label
/*800B96C8 000B64C8*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B96CC 000B64CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*800B96D0 000B64D0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B96D4 000B64D4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800B96D8 000B64D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800B96DC, 0x800B96DC) //this is a jump label
/*800B96DC 000B64DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B96E0 000B64E0*/ PPC::Runtime::ASM::beq(.L_800B96EC);
/*800B96E4 000B64E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B96E8 000B64E8*/ PPC::Runtime::ASM::b(.L_800B96F0);
RUNTIME_PPC_JUMP_LABEL(.L_800B96EC, 0x800B96EC) //this is a jump label
/*800B96EC 000B64EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B96F0, 0x800B96F0) //this is a jump label
/*800B96F0 000B64F0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B96F4 000B64F4*/ PPC::Runtime::ASM::beq(.L_800B96FC);
/*800B96F8 000B64F8*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_800B96FC, 0x800B96FC) //this is a jump label
/*800B96FC 000B64FC*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x1);
/*800B9700 000B6500*/ PPC::Runtime::ASM::bne(.L_800B9710);
/*800B9704 000B6504*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B9708 000B6508*/ PPC::Runtime::ASM::bl(fn_800BABD0);
/*800B970C 000B650C*/ PPC::Runtime::ASM::b(.L_800B973C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9710, 0x800B9710) //this is a jump label
/*800B9710 000B6510*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x2);
/*800B9714 000B6514*/ PPC::Runtime::ASM::bne(.L_800B9728);
/*800B9718 000B6518*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B971C 000B651C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800B9720 000B6520*/ PPC::Runtime::ASM::bl(fn_800BAC5C);
/*800B9724 000B6524*/ PPC::Runtime::ASM::b(.L_800B973C);
RUNTIME_PPC_JUMP_LABEL(.L_800B9728, 0x800B9728) //this is a jump label
/*800B9728 000B6528*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x3);
/*800B972C 000B652C*/ PPC::Runtime::ASM::bne(.L_800B973C);
/*800B9730 000B6530*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B9734 000B6534*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800B9738 000B6538*/ PPC::Runtime::ASM::bl(fn_800BACF4);
RUNTIME_PPC_JUMP_LABEL(.L_800B973C, 0x800B973C) //this is a jump label
/*800B973C 000B653C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B9740 000B6540*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*800B9744 000B6544*/ PPC::Runtime::ASM::bl(fn_800B6018);
/*800B9748 000B6548*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800B974C 000B654C*/ PPC::Runtime::ASM::lis(context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_HighBit);
/*800B9750 000B6550*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800B9754 000B6554*/ PPC::Runtime::ASM::addi(context->r29, context->r3, Struct_PlayerDataStruct_MayebASkipAddress @ Get_MemoryOffset_LowBit);
/*800B9758 000B6558*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800B975C 000B655C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*800B9760 000B6560*/ PPC::Runtime::ASM::fsubs(context->f6, context->f5, context->f4);
/*800B9764 000B6564*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF274 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800B9768 000B6568*/ PPC::Runtime::ASM::fctiwz(context->f3, context->f2);
/*800B976C 000B656C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800B9770 000B6570*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f6);
/*800B9774 000B6574*/ PPC::Runtime::ASM::fctiwz(context->f2, context->f1);
/*800B9778 000B6578*/ PPC::Runtime::ASM::stfd(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*800B977C 000B657C*/ PPC::Runtime::ASM::fadds(context->f1, context->f4, context->f0);
/*800B9780 000B6580*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*800B9784 000B6584*/ PPC::Runtime::ASM::fsubs(context->f0, context->f5, context->f0);
/*800B9788 000B6588*/ PPC::Runtime::ASM::stfd(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800B978C 000B658C*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f1);
/*800B9790 000B6590*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*800B9794 000B6594*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*800B9798 000B6598*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800B979C 000B659C*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*800B97A0 000B65A0*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*800B97A4 000B65A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*800B97A8 000B65A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800B97AC 000B65AC*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*800B97B0 000B65B0*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800B97B4 000B65B4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800B97B8, 0x800B97B8) //this is a jump label
/*800B97B8 000B65B8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*800B97BC 000B65BC*/ PPC::Runtime::ASM::blt(.L_800B97C8);
/*800B97C0 000B65C0*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x20);
/*800B97C4 000B65C4*/ PPC::Runtime::ASM::blt(.L_800B97D0);
RUNTIME_PPC_JUMP_LABEL(.L_800B97C8, 0x800B97C8) //this is a jump label
/*800B97C8 000B65C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800B97CC 000B65CC*/ PPC::Runtime::ASM::b(.L_800B97D4);
RUNTIME_PPC_JUMP_LABEL(.L_800B97D0, 0x800B97D0) //this is a jump label
/*800B97D0 000B65D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_800B97D4, 0x800B97D4) //this is a jump label
/*800B97D4 000B65D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B97D8 000B65D8*/ PPC::Runtime::ASM::beq(.L_800B97E4);
/*800B97DC 000B65DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800B97E0 000B65E0*/ PPC::Runtime::ASM::b(.L_800B97E8);
RUNTIME_PPC_JUMP_LABEL(.L_800B97E4, 0x800B97E4) //this is a jump label
/*800B97E4 000B65E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800B97E8, 0x800B97E8) //this is a jump label
/*800B97E8 000B65E8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800B97EC 000B65EC*/ PPC::Runtime::ASM::beq(.L_800B9838);
/*800B97F0 000B65F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x71, context->r3));
/*800B97F4 000B65F4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r25);
/*800B97F8 000B65F8*/ PPC::Runtime::ASM::bne(.L_800B9838);
/*800B97FC 000B65FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x72, context->r3));
/*800B9800 000B6600*/ PPC::Runtime::ASM::cmpw(context->r0, context->r26);
/*800B9804 000B6604*/ PPC::Runtime::ASM::bne(.L_800B9838);
/*800B9808 000B6608*/ PPC::Runtime::ASM::cmpw(context->r28, context->r31);
/*800B980C 000B660C*/ PPC::Runtime::ASM::beq(.L_800B981C);
/*800B9810 000B6610*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/* 800B9814 000B6614  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*800B9818 000B6618*/ PPC::Runtime::ASM::beq(.L_800B982C);
RUNTIME_PPC_JUMP_LABEL(.L_800B981C, 0x800B981C) //this is a jump label
/*800B981C 000B661C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800B9820 000B6620*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800B9824 000B6624*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetScissor);
/*800B9828 000B6628*/ PPC::Runtime::ASM::b(.L_800B9838);
RUNTIME_PPC_JUMP_LABEL(.L_800B982C, 0x800B982C) //this is a jump label
/*800B982C 000B662C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800B9830 000B6630*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800B9834 000B6634*/ PPC::Runtime::ASM::bl(fn_800BAB78);
RUNTIME_PPC_JUMP_LABEL(.L_800B9838, 0x800B9838) //this is a jump label
/*800B9838 000B6638*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*800B983C 000B663C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*800B9840 000B6640*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x20);
/*800B9844 000B6644*/ PPC::Runtime::ASM::blt(.L_800B97B8);
/*800B9848 000B6648*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*800B984C 000B664C*/ PPC::Runtime::ASM::li(context->r6, 0x1002);
/*800B9850 000B6650*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800B9854 000B6654*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800B9858 000B6658*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800B985C 000B665C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*800B9860 000B6660*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800B9864 000B6664*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800B9868 000B6668*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800B986C 000B666C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*800B9870 000B6670*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800B9874 000B6674*/ PPC::Runtime::ASM::bl(fn_800B5B94);
/*800B9878 000B6678*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B987C 000B667C*/ PPC::Runtime::ASM::bl(fn_800BA738);
/*800B9880 000B6680*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800B9884 000B6684*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*800B9888 000B6688*/ PPC::Runtime::ASM::bl(_restgpr_24);
/*800B988C 000B668C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*800B9890 000B6690*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800B9894 000B6694*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*800B9898 000B6698*/ PPC::Runtime::ASM::blr();
}