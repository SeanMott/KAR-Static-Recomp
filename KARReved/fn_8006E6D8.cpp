//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8006E9EC.hpp"
#include "fn_8006E6D8.hpp"



void fn_8006E6D8(PPC::Runtime::GCContext* context)
{
/*8006E6D8 0006B4D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8006E6DC 0006B4DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8006E6E0 0006B4E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006E6E4 0006B4E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8006E6E8 0006B4E8*/ PPC::Runtime::ASM::bl(_savegpr_14);
/*8006E6EC 0006B4EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8006E6F0 0006B4F0*/ PPC::Runtime::ASM::mr(context->r15, context->r3);
/*8006E6F4 0006B4F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006E6F8 0006B4F8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006E6FC 0006B4FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8006E700 0006B500*/ PPC::Runtime::ASM::mr(context->r16, context->r5);
/*8006E704 0006B504*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006E708 0006B508*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006E70C 0006B50C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006E710 0006B510*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E714 0006B514*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_8006E718, 0x8006E718) //this is a jump label
/*8006E718 0006B518*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006E71C 0006B51C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E720 0006B520*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x18);
/*8006E724 0006B524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006E728 0006B528*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8006E72C 0006B52C*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E730 0006B530*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E734 0006B534*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E738 0006B538*/ PPC::Runtime::ASM::beq(.L_8006E9B0);
/*8006E73C 0006B53C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006E740 0006B540*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E744 0006B544*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8006E748 0006B548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8006E74C 0006B54C*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8006E750 0006B550*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006E754 0006B554*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E758 0006B558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E75C, 0x8006E75C) //this is a jump label
/*8006E75C 0006B55C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8006E760 0006B560*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E764 0006B564*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x18);
/*8006E768 0006B568*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8006E76C 0006B56C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8006E770 0006B570*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E774 0006B574*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E778 0006B578*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E77C 0006B57C*/ PPC::Runtime::ASM::beq(.L_8006E98C);
/*8006E780 0006B580*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8006E784 0006B584*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E788 0006B588*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8006E78C 0006B58C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8006E790 0006B590*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8006E794 0006B594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8006E798 0006B598*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E79C 0006B59C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E7A0, 0x8006E7A0) //this is a jump label
/*8006E7A0 0006B5A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8006E7A4 0006B5A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E7A8 0006B5A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x18);
/*8006E7AC 0006B5AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8006E7B0 0006B5B0*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8006E7B4 0006B5B4*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E7B8 0006B5B8*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E7BC 0006B5BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E7C0 0006B5C0*/ PPC::Runtime::ASM::beq(.L_8006E968);
/*8006E7C4 0006B5C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E7C8 0006B5C8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8006E7CC 0006B5CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8006E7D0 0006B5D0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8006E7D4 0006B5D4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E7D8 0006B5D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E7DC 0006B5DC*/ PPC::Runtime::ASM::mr(context->r17, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_8006E7E0, 0x8006E7E0) //this is a jump label
/*8006E7E0 0006B5E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E7E4 0006B5E4*/ PPC::Runtime::ASM::addi(context->r0, context->r17, 0x18);
/*8006E7E8 0006B5E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8006E7EC 0006B5EC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r4);
/*8006E7F0 0006B5F0*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E7F4 0006B5F4*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E7F8 0006B5F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E7FC 0006B5FC*/ PPC::Runtime::ASM::beq(.L_8006E958);
/*8006E800 0006B600*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E804 0006B604*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8006E808 0006B608*/ PPC::Runtime::ASM::mr(context->r18, context->r30);
/*8006E80C 0006B60C*/ PPC::Runtime::ASM::slwi(context->r14, context->r4, 2);
/*8006E810 0006B610*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E814 0006B614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E818, 0x8006E818) //this is a jump label
/*8006E818 0006B618*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E81C 0006B61C*/ PPC::Runtime::ASM::addi(context->r0, context->r18, 0x18);
/*8006E820 0006B620*/ PPC::Runtime::ASM::lwzx(context->r3, context->r14, context->r3);
/*8006E824 0006B624*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E828 0006B628*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E82C 0006B62C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E830 0006B630*/ PPC::Runtime::ASM::beq(.L_8006E948);
/*8006E834 0006B634*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E838 0006B638*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8006E83C 0006B63C*/ PPC::Runtime::ASM::mr(context->r20, context->r29);
/*8006E840 0006B640*/ PPC::Runtime::ASM::slwi(context->r19, context->r4, 2);
/*8006E844 0006B644*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E848 0006B648*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E84C, 0x8006E84C) //this is a jump label
/*8006E84C 0006B64C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E850 0006B650*/ PPC::Runtime::ASM::addi(context->r0, context->r20, 0x18);
/*8006E854 0006B654*/ PPC::Runtime::ASM::lwzx(context->r3, context->r19, context->r3);
/*8006E858 0006B658*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E85C 0006B65C*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E860 0006B660*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E864 0006B664*/ PPC::Runtime::ASM::beq(.L_8006E938);
/*8006E868 0006B668*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E86C 0006B66C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8006E870 0006B670*/ PPC::Runtime::ASM::mr(context->r22, context->r28);
/*8006E874 0006B674*/ PPC::Runtime::ASM::slwi(context->r21, context->r4, 2);
/*8006E878 0006B678*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E87C 0006B67C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E880, 0x8006E880) //this is a jump label
/*8006E880 0006B680*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E884 0006B684*/ PPC::Runtime::ASM::addi(context->r0, context->r22, 0x18);
/*8006E888 0006B688*/ PPC::Runtime::ASM::lwzx(context->r3, context->r21, context->r3);
/*8006E88C 0006B68C*/ PPC::Runtime::ASM::lhzx(context->r4, context->r3, context->r0);
/*8006E890 0006B690*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E894 0006B694*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E898 0006B698*/ PPC::Runtime::ASM::beq(.L_8006E928);
/*8006E89C 0006B69C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E8A0 0006B6A0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8006E8A4 0006B6A4*/ PPC::Runtime::ASM::mr(context->r24, context->r27);
/*8006E8A8 0006B6A8*/ PPC::Runtime::ASM::slwi(context->r23, context->r4, 2);
/*8006E8AC 0006B6AC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E8B0 0006B6B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E8B4, 0x8006E8B4) //this is a jump label
/*8006E8B4 0006B6B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r15));
/*8006E8B8 0006B6B8*/ PPC::Runtime::ASM::addi(context->r0, context->r24, 0x18);
/*8006E8BC 0006B6BC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r23, context->r3);
/*8006E8C0 0006B6C0*/ PPC::Runtime::ASM::lhzx(context->r25, context->r3, context->r0);
/*8006E8C4 0006B6C4*/ PPC::Runtime::ASM::addis(context->r0, context->r25, 0x0);
/*8006E8C8 0006B6C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E8CC 0006B6CC*/ PPC::Runtime::ASM::beq(.L_8006E918);
/*8006E8D0 0006B6D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
/*8006E8D4 0006B6D4*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*8006E8D8 0006B6D8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8006E8DC 0006B6DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r16));
RUNTIME_PPC_JUMP_LABEL(.L_8006E8E0, 0x8006E8E0) //this is a jump label
/*8006E8E0 0006B6E0*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8006E8E4 0006B6E4*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*8006E8E8 0006B6E8*/ PPC::Runtime::ASM::mr(context->r5, context->r26);
/*8006E8EC 0006B6EC*/ PPC::Runtime::ASM::bl(fn_8006E9EC);
/*8006E8F0 0006B6F0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8006E8F4 0006B6F4*/ PPC::Runtime::ASM::addis(context->r0, context->r4, 0x0);
/*8006E8F8 0006B6F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*8006E8FC 0006B6FC*/ PPC::Runtime::ASM::beq(.L_8006E90C);
/*8006E900 0006B700*/ PPC::Runtime::ASM::mr(context->r3, context->r15);
/*8006E904 0006B704*/ PPC::Runtime::ASM::mr(context->r5, context->r16);
/*8006E908 0006B708*/ PPC::Runtime::ASM::bl(fn_8006E6D8);
RUNTIME_PPC_JUMP_LABEL(.L_8006E90C, 0x8006E90C) //this is a jump label
/*8006E90C 0006B70C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*8006E910 0006B710*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x2);
/*8006E914 0006B714*/ PPC::Runtime::ASM::blt(.L_8006E8E0);
RUNTIME_PPC_JUMP_LABEL(.L_8006E918, 0x8006E918) //this is a jump label
/*8006E918 0006B718*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*8006E91C 0006B71C*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x2);
/*8006E920 0006B720*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x2);
/*8006E924 0006B724*/ PPC::Runtime::ASM::blt(.L_8006E8B4);
RUNTIME_PPC_JUMP_LABEL(.L_8006E928, 0x8006E928) //this is a jump label
/*8006E928 0006B728*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8006E92C 0006B72C*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x2);
/*8006E930 0006B730*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x2);
/*8006E934 0006B734*/ PPC::Runtime::ASM::blt(.L_8006E880);
RUNTIME_PPC_JUMP_LABEL(.L_8006E938, 0x8006E938) //this is a jump label
/*8006E938 0006B738*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8006E93C 0006B73C*/ PPC::Runtime::ASM::addi(context->r20, context->r20, 0x2);
/*8006E940 0006B740*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*8006E944 0006B744*/ PPC::Runtime::ASM::blt(.L_8006E84C);
RUNTIME_PPC_JUMP_LABEL(.L_8006E948, 0x8006E948) //this is a jump label
/*8006E948 0006B748*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8006E94C 0006B74C*/ PPC::Runtime::ASM::addi(context->r18, context->r18, 0x2);
/*8006E950 0006B750*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*8006E954 0006B754*/ PPC::Runtime::ASM::blt(.L_8006E818);
RUNTIME_PPC_JUMP_LABEL(.L_8006E958, 0x8006E958) //this is a jump label
/*8006E958 0006B758*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8006E95C 0006B75C*/ PPC::Runtime::ASM::addi(context->r17, context->r17, 0x2);
/*8006E960 0006B760*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x2);
/*8006E964 0006B764*/ PPC::Runtime::ASM::blt(.L_8006E7E0);
RUNTIME_PPC_JUMP_LABEL(.L_8006E968, 0x8006E968) //this is a jump label
/*8006E968 0006B768*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8006E96C 0006B76C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8006E970 0006B770*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8006E974 0006B774*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8006E978 0006B778*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8006E97C 0006B77C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8006E980 0006B780*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2);
/*8006E984 0006B784*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8006E988 0006B788*/ PPC::Runtime::ASM::blt(.L_8006E7A0);
RUNTIME_PPC_JUMP_LABEL(.L_8006E98C, 0x8006E98C) //this is a jump label
/*8006E98C 0006B78C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8006E990 0006B790*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8006E994 0006B794*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8006E998 0006B798*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8006E99C 0006B79C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8006E9A0 0006B7A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8006E9A4 0006B7A4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2);
/*8006E9A8 0006B7A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8006E9AC 0006B7AC*/ PPC::Runtime::ASM::blt(.L_8006E75C);
RUNTIME_PPC_JUMP_LABEL(.L_8006E9B0, 0x8006E9B0) //this is a jump label
/*8006E9B0 0006B7B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006E9B4 0006B7B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8006E9B8 0006B7B8*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*8006E9BC 0006B7BC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8006E9C0 0006B7C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006E9C4 0006B7C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*8006E9C8 0006B7C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2);
/*8006E9CC 0006B7CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8006E9D0 0006B7D0*/ PPC::Runtime::ASM::blt(.L_8006E718);
/*8006E9D4 0006B7D4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x80);
/*8006E9D8 0006B7D8*/ PPC::Runtime::ASM::bl(_restgpr_14);
/*8006E9DC 0006B7DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8006E9E0 0006B7E0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006E9E4 0006B7E4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*8006E9E8 0006B7E8*/ PPC::Runtime::ASM::blr();
}