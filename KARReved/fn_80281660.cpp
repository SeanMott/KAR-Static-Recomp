//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "fn_lbLoadArchive.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"
#include "fn_80059520.hpp"



void fn_80281660(PPC::Runtime::GCContext* context)
{
/*80281660 0027E460*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xf0, context->r1));
/*80281664 0027E464*/ PPC::Runtime::ASM::mflr(context->r0);
/*80281668 0027E468*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8028166C 0027E46C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xf0);
/*80281670 0027E470*/ PPC::Runtime::ASM::bl(_savegpr_14);
/*80281674 0027E474*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80281678 0027E478*/ PPC::Runtime::ASM::lis(context->r5, String_ "EndCityDevil_TopN_join" Get_MemoryOffset_HighBit);
/*8028167C 0027E47C*/ PPC::Runtime::ASM::addi(context->r30, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*80281680 0027E480*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80281684 0027E484*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80281688 0027E488*/ PPC::Runtime::ASM::addi(context->r29, context->r5, String_ "EndCityDevil_TopN_join" Get_MemoryOffset_LowBit);
/*8028168C 0027E48C*/ PPC::Runtime::ASM::li(context->r5, 0x2dc);
/*80281690 0027E490*/ PPC::Runtime::ASM::bl(memset);
/*80281694 0027E494*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*80281698 0027E498*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8028169C 0027E49C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*802816A0 0027E4A0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*802816A4 0027E4A4*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*802816A8 0027E4A8*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055F480 @ Get_MemoryOffset_HighBit);
/*802816AC 0027E4AC*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0xc10);
/*802816B0 0027E4B0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8055F480 @ Get_MemoryOffset_LowBit);
/*802816B4 0027E4B4*/ PPC::Runtime::ASM::addi(context->r11, context->r29, 0xc28);
/*802816B8 0027E4B8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x44);
/*802816BC 0027E4BC*/ PPC::Runtime::ASM::addi(context->r9, context->r29, 0xc48);
/*802816C0 0027E4C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802816C4 0027E4C4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x40);
/*802816C8 0027E4C8*/ PPC::Runtime::ASM::addi(context->r10, context->r31, 0x5c);
/*802816CC 0027E4CC*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x48);
/*802816D0 0027E4D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802816D4 0027E4D4*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0xc6c);
/*802816D8 0027E4D8*/ PPC::Runtime::ASM::addi(context->r0, context->r31, 0x60);
/*802816DC 0027E4DC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xc84);
/*802816E0 0027E4E0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802816E4 0027E4E4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x70);
/*802816E8 0027E4E8*/ PPC::Runtime::ASM::addi(context->r5, context->r29, 0xcb0);
/*802816EC 0027E4EC*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0x4c);
/*802816F0 0027E4F0*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802816F4 0027E4F4*/ PPC::Runtime::ASM::addi(context->r15, context->r29, 0xce0);
/*802816F8 0027E4F8*/ PPC::Runtime::ASM::addi(context->r16, context->r31, 0x64);
/*802816FC 0027E4FC*/ PPC::Runtime::ASM::addi(context->r17, context->r29, 0xcfc);
/*80281700 0027E500*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281704 0027E504*/ PPC::Runtime::ASM::addi(context->r18, context->r31, 0x74);
/*80281708 0027E508*/ PPC::Runtime::ASM::addi(context->r19, context->r29, 0xd30);
/*8028170C 0027E50C*/ PPC::Runtime::ASM::addi(context->r20, context->r31, 0x50);
/*80281710 0027E510*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281714 0027E514*/ PPC::Runtime::ASM::addi(context->r21, context->r29, 0xd68);
/*80281718 0027E518*/ PPC::Runtime::ASM::addi(context->r22, context->r31, 0x68);
/*8028171C 0027E51C*/ PPC::Runtime::ASM::addi(context->r23, context->r29, 0xd84);
/*80281720 0027E520*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80281724 0027E524*/ PPC::Runtime::ASM::addi(context->r24, context->r31, 0x78);
/*80281728 0027E528*/ PPC::Runtime::ASM::addi(context->r25, context->r29, 0xdb8);
/*8028172C 0027E52C*/ PPC::Runtime::ASM::addi(context->r26, context->r31, 0x58);
/*80281730 0027E530*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281734 0027E534*/ PPC::Runtime::ASM::addi(context->r27, context->r29, 0xdf0);
/*80281738 0027E538*/ PPC::Runtime::ASM::addi(context->r28, context->r31, 0x6c);
/*8028173C 0027E53C*/ PPC::Runtime::ASM::addi(context->r12, context->r29, 0xe08);
/*80281740 0027E540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80281744 0027E544*/ PPC::Runtime::ASM::addi(context->r11, context->r31, 0x7c);
/*80281748 0027E548*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0xe34);
/*8028174C 0027E54C*/ PPC::Runtime::ASM::addi(context->r14, context->r31, 0x80);
/*80281750 0027E550*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80281754 0027E554*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xe64);
/*80281758 0027E558*/ PPC::Runtime::ASM::addi(context->r6, context->r29, 0xbc0);
/*8028175C 0027E55C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x34);
/*80281760 0027E560*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80281764 0027E564*/ PPC::Runtime::ASM::addi(context->r4, context->r29, 0xbb0);
/*80281768 0027E568*/ PPC::Runtime::ASM::addi(context->r9, context->r31, 0x38);
/*8028176C 0027E56C*/ PPC::Runtime::ASM::addi(context->r10, context->r29, 0xbf8);
/*80281770 0027E570*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80281774 0027E574*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x30);
/*80281778 0027E578*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8028177C 0027E57C*/ PPC::Runtime::ASM::addi(context->r8, context->r29, 0xbdc);
/*80281780 0027E580*/ PPC::Runtime::ASM::stw(context->r15, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80281784 0027E584*/ PPC::Runtime::ASM::stw(context->r16, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80281788 0027E588*/ PPC::Runtime::ASM::stw(context->r17, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8028178C 0027E58C*/ PPC::Runtime::ASM::stw(context->r18, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80281790 0027E590*/ PPC::Runtime::ASM::stw(context->r19, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80281794 0027E594*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*80281798 0027E598*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8028179C 0027E59C*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802817A0 0027E5A0*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802817A4 0027E5A4*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802817A8 0027E5A8*/ PPC::Runtime::ASM::stw(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802817AC 0027E5AC*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802817B0 0027E5B0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802817B4 0027E5B4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802817B8 0027E5B8*/ PPC::Runtime::ASM::stw(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802817BC 0027E5BC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802817C0 0027E5C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802817C4 0027E5C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x54);
/*802817C8 0027E5C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802817CC 0027E5CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802817D0 0027E5D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802817D4 0027E5D4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xe74);
/*802817D8 0027E5D8*/ PPC::Runtime::ASM::stw(context->r14, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802817DC 0027E5DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802817E0 0027E5E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*802817E4 0027E5E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802817E8 0027E5E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802817EC 0027E5EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802817F0 0027E5F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802817F4 0027E5F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802817F8 0027E5F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802817FC 0027E5FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80281800 0027E600*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80281804 0027E604*/ PPC::Runtime::ASM::bl(fn_lbLoadArchive);
/*80281808 0027E608*/ PPC::Runtime::ASM::li(context->r16, 0x0);
/*8028180C 0027E60C*/ PPC::Runtime::ASM::li(context->r14, 0x0);
/*80281810 0027E610*/ PPC::Runtime::ASM::mr(context->r15, context->r16);
RUNTIME_PPC_JUMP_LABEL(.L_80281814, 0x80281814) //this is a jump label
/*80281814 0027E614*/ PPC::Runtime::ASM::addi(context->r17, context->r29, 0x9d4);
/*80281818 0027E618*/ PPC::Runtime::ASM::add(context->r17, context->r17, context->r15);
/*8028181C 0027E61C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r17));
/*80281820 0027E620*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80281824 0027E624*/ PPC::Runtime::ASM::beq(.L_80281840);
/*80281828 0027E628*/ PPC::Runtime::ASM::addi(context->r4, context->r14, 0xec);
/*8028182C 0027E62C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80281830 0027E630*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80281834 0027E634*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*80281838 0027E638*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8028183C 0027E63C*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_80281840, 0x80281840) //this is a jump label
/*80281840 0027E640*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r17));
/*80281844 0027E644*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80281848 0027E648*/ PPC::Runtime::ASM::beq(.L_80281864);
/*8028184C 0027E64C*/ PPC::Runtime::ASM::addi(context->r4, context->r14, 0x130);
/*80281850 0027E650*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80281854 0027E654*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80281858 0027E658*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*8028185C 0027E65C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80281860 0027E660*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_80281864, 0x80281864) //this is a jump label
/*80281864 0027E664*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r17));
/*80281868 0027E668*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8028186C 0027E66C*/ PPC::Runtime::ASM::beq(.L_80281888);
/*80281870 0027E670*/ PPC::Runtime::ASM::addi(context->r4, context->r14, 0x174);
/*80281874 0027E674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80281878 0027E678*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8028187C 0027E67C*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*80281880 0027E680*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80281884 0027E684*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_80281888, 0x80281888) //this is a jump label
/*80281888 0027E688*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r17));
/*8028188C 0027E68C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80281890 0027E690*/ PPC::Runtime::ASM::beq(.L_802818AC);
/*80281894 0027E694*/ PPC::Runtime::ASM::addi(context->r4, context->r14, 0x1b8);
/*80281898 0027E698*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8028189C 0027E69C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802818A0 0027E6A0*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*802818A4 0027E6A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802818A8 0027E6A8*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_802818AC, 0x802818AC) //this is a jump label
/*802818AC 0027E6AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r17));
/*802818B0 0027E6B0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*802818B4 0027E6B4*/ PPC::Runtime::ASM::beq(.L_802818D0);
/*802818B8 0027E6B8*/ PPC::Runtime::ASM::addi(context->r4, context->r14, 0x1fc);
/*802818BC 0027E6BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*802818C0 0027E6C0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*802818C4 0027E6C4*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r4);
/*802818C8 0027E6C8*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802818CC 0027E6CC*/ PPC::Runtime::ASM::bl(fn_80059520);
RUNTIME_PPC_JUMP_LABEL(.L_802818D0, 0x802818D0) //this is a jump label
/*802818D0 0027E6D0*/ PPC::Runtime::ASM::addi(context->r16, context->r16, 0x1);
/*802818D4 0027E6D4*/ PPC::Runtime::ASM::addi(context->r15, context->r15, 0x14);
/*802818D8 0027E6D8*/ PPC::Runtime::ASM::cmpwi(context->r16, 0x11);
/*802818DC 0027E6DC*/ PPC::Runtime::ASM::addi(context->r14, context->r14, 0x4);
/*802818E0 0027E6E0*/ PPC::Runtime::ASM::blt(.L_80281814);
/*802818E4 0027E6E4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802818E8 0027E6E8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xf0);
/*802818EC 0027E6EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d4, context->r30));
/*802818F0 0027E6F0*/ PPC::Runtime::ASM::bl(_restgpr_14);
/*802818F4 0027E6F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*802818F8 0027E6F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802818FC 0027E6FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xf0);
/*80281900 0027E700*/ PPC::Runtime::ASM::blr();
}