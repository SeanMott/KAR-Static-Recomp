//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_8047DE88.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "fn_8047DE88.hpp"



void fn_8047E6F0(PPC::Runtime::GCContext* context)
{
/*8047E6F0 0047B4F0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047E6F4 0047B4F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8047E6F8 0047B4F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*8047E6FC 0047B4FC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047E700 0047B500*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8047E704 0047B504*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r3));
/*8047E708 0047B508*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E70C 0047B50C  4E 80 00 21 */ blrl
/*8047E710 0047B510*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E714 0047B514*/ PPC::Runtime::ASM::beq(.L_8047E8A8);
/*8047E718 0047B518*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8047E71C 0047B51C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x9);
/*8047E720 0047B520*/ PPC::Runtime::ASM::bgt(.L_8047E8A8);
/*8047E724 0047B524*/ PPC::Runtime::ASM::lis(context->r3, jumptable_805343E8 @ Get_MemoryOffset_HighBit);
/*8047E728 0047B528*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_805343E8 @ Get_MemoryOffset_LowBit);
/*8047E72C 0047B52C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8047E730 0047B530*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*8047E734 0047B534*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8047E738 0047B538*/ PPC::Runtime::ASM::bctr();
/*8047E73C 0047B53C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*8047E740 0047B540*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E744 0047B544*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8047E748 0047B548*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047E74C 0047B54C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8047E750 0047B550*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E754 0047B554*/ PPC::Runtime::ASM::b(.L_8047E8A8);
/*8047E758 0047B558*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r31));
/*8047E75C 0047B55C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E760 0047B560*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*8047E764 0047B564*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8047E768 0047B568*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8047E76C 0047B56C*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E770 0047B570*/ PPC::Runtime::ASM::b(.L_8047E8A8);
/*8047E774 0047B574*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047E778 0047B578*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8047E77C 0047B57C*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8047E780 0047B580*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8047E784 0047B584*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E788 0047B588*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E78C 0047B58C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8047E790 0047B590*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8047E794 0047B594*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E798 0047B598*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047E79C 0047B59C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E7A0 0047B5A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E7A4 0047B5A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E7A8 0047B5A8*/ PPC::Runtime::ASM::ble(.L_8047E8A8);
/*8047E7AC 0047B5AC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E7B0 0047B5B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E7B4 0047B5B4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E7B8 0047B5B8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x21c);
/*8047E7BC 0047B5BC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E7C0 0047B5C0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E7C4 0047B5C4*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*8047E7C8 0047B5C8*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E7CC 0047B5CC*/ PPC::Runtime::ASM::b(.L_8047E8A8);
/*8047E7D0 0047B5D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E7D4 0047B5D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E7D8 0047B5D8*/ PPC::Runtime::ASM::ble(.L_8047E8A8);
/*8047E7DC 0047B5DC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E7E0 0047B5E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E7E4 0047B5E4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E7E8 0047B5E8*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x21c);
/*8047E7EC 0047B5EC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E7F0 0047B5F0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E7F4 0047B5F4*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*8047E7F8 0047B5F8*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E7FC 0047B5FC*/ PPC::Runtime::ASM::b(.L_8047E8A8);
/*8047E800 0047B600*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8047E804 0047B604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*8047E808 0047B608*/ PPC::Runtime::ASM::li(context->r0, 0xa);
/*8047E80C 0047B60C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8047E810 0047B610*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E814 0047B614*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*8047E818 0047B618*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8047E81C 0047B61C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8047E820 0047B620*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E824 0047B624*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8047E828 0047B628*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E82C 0047B62C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E830 0047B630*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E834 0047B634*/ PPC::Runtime::ASM::ble(.L_8047E8A8);
/*8047E838 0047B638*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E83C 0047B63C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E840 0047B640*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E844 0047B644*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x21c);
/*8047E848 0047B648*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E84C 0047B64C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E850 0047B650*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*8047E854 0047B654*/ PPC::Runtime::ASM::bl(fn_8047DE88);
/*8047E858 0047B658*/ PPC::Runtime::ASM::b(.L_8047E8A8);
/*8047E85C 0047B65C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x238);
/*8047E860 0047B660*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*8047E864 0047B664*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r31));
/*8047E868 0047B668*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E86C 0047B66C*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8047E870 0047B670  4E 80 00 21 */ blrl
/*8047E874 0047B674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E878 0047B678*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8047E87C 0047B67C*/ PPC::Runtime::ASM::ble(.L_8047E8A0);
/*8047E880 0047B680*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8047E884 0047B684*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8047E888 0047B688*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*8047E88C 0047B68C*/ PPC::Runtime::ASM::addi(context->r7, context->r31, 0x21c);
/*8047E890 0047B690*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8047E894 0047B694*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8047E898 0047B698*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x230, context->r31));
/*8047E89C 0047B69C*/ PPC::Runtime::ASM::bl(fn_8047DE88);
RUNTIME_PPC_JUMP_LABEL(.L_8047E8A0, 0x8047E8A0) //this is a jump label
/*8047E8A0 0047B6A0*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047E8A4 0047B6A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8047E8A8, 0x8047E8A8) //this is a jump label
/*8047E8A8 0047B6A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8047E8AC 0047B6AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8047E8B0 0047B6B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*8047E8B4 0047B6B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8047E8B8 0047B6B8*/ PPC::Runtime::ASM::blr();
}