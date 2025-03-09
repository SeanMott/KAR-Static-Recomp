//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_IPMulticastLookup.hpp"



void fn_IPLookupInfo(PPC::Runtime::GCContext* context)
{
/*8046A7A0 004675A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046A7A4 004675A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046A7A8 004675A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8046A7AC 004675AC*/ PPC::Runtime::ASM::stmw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8046A7B0 004675B0*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*8046A7B4 004675B4*/ PPC::Runtime::ASM::addi(context->r24, context->r3, 0x0);
/*8046A7B8 004675B8*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*8046A7BC 004675BC*/ PPC::Runtime::ASM::addi(context->r25, context->r6, 0x0);
/*8046A7C0 004675C0*/ PPC::Runtime::ASM::addi(context->r26, context->r7, 0x0);
/*8046A7C4 004675C4*/ PPC::Runtime::ASM::addi(context->r27, context->r8, 0x0);
/*8046A7C8 004675C8*/ PPC::Runtime::ASM::li(context->r31, 0x3);
/*8046A7CC 004675CC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*8046A7D0 004675D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8046A7D4 004675D4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 27);
/*8046A7D8 004675D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe0);
/*8046A7DC 004675DC*/ PPC::Runtime::ASM::bne(.L_8046A7FC);
/*8046A7E0 004675E0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*8046A7E4 004675E4*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21);
/*8046A7E8 004675E8*/ PPC::Runtime::ASM::bl(fn_IPMulticastLookup);
/*8046A7EC 004675EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8046A7F0 004675F0*/ PPC::Runtime::ASM::bge(.L_8046A7FC);
/*8046A7F4 004675F4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8046A7F8 004675F8*/ PPC::Runtime::ASM::b(.L_8046A940);
RUNTIME_PPC_JUMP_LABEL(.L_8046A7FC, 0x8046A7FC) //this is a jump label
/*8046A7FC 004675FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8046A800 00467600*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046A804 00467604*/ PPC::Runtime::ASM::mr(context->r10, context->r0);
/*8046A808 00467608*/ PPC::Runtime::ASM::bne(.L_8046A814);
/*8046A80C 0046760C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8046A810 00467610*/ PPC::Runtime::ASM::b(.L_8046A818);
RUNTIME_PPC_JUMP_LABEL(.L_8046A814, 0x8046A814) //this is a jump label
/*8046A814 00467614*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r10));
RUNTIME_PPC_JUMP_LABEL(.L_8046A818, 0x8046A818) //this is a jump label
/*8046A818 00467618*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8046A81C 0046761C*/ PPC::Runtime::ASM::lwz(context->r8, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046A820 00467620*/ PPC::Runtime::ASM::addi(context->r11, context->r4, 0x0);
/*8046A824 00467624*/ PPC::Runtime::ASM::slw(context->r5, context->r0, context->r3);
/*8046A828 00467628*/ PPC::Runtime::ASM::rlwinm(context->r6, context->r27, 0, 29, 29);
/*8046A82C 0046762C*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r26, 16);
/*8046A830 00467630*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r25, 16);
/*8046A834 00467634*/ PPC::Runtime::ASM::b(.L_8046A934);
RUNTIME_PPC_JUMP_LABEL(.L_8046A838, 0x8046A838) //this is a jump label
/*8046A838 00467638*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r10));
/*8046A83C 0046763C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046A840 00467640*/ PPC::Runtime::ASM::beq(.L_8046A918);
/*8046A844 00467644*/ PPC::Runtime::ASM::cmplw(context->r0, context->r4);
/*8046A848 00467648*/ PPC::Runtime::ASM::bne(.L_8046A918);
/*8046A84C 0046764C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8046A850 00467650*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 27);
/*8046A854 00467654*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe0);
/*8046A858 00467658*/ PPC::Runtime::ASM::bne(.L_8046A878);
/*8046A85C 0046765C*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r10));
/*8046A860 00467660*/ PPC::Runtime::ASM::and.(context->r0, context->r7, context->r5);
/*8046A864 00467664*/ PPC::Runtime::ASM::beq(.L_8046A918);
/*8046A868 00467668*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*8046A86C 0046766C*/ PPC::Runtime::ASM::beq(.L_8046A878);
/*8046A870 00467670*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r7, 0, 16, 16);
/*8046A874 00467674*/ PPC::Runtime::ASM::beq(.L_8046A918);
RUNTIME_PPC_JUMP_LABEL(.L_8046A878, 0x8046A878) //this is a jump label
/*8046A878 00467678*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8046A87C 0046767C*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*8046A880 00467680*/ PPC::Runtime::ASM::cmplw(context->r0, context->r8);
/*8046A884 00467684*/ PPC::Runtime::ASM::beq(.L_8046A8A8);
/*8046A888 00467688*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r10));
/*8046A88C 0046768C*/ PPC::Runtime::ASM::cmplw(context->r7, context->r8);
/*8046A890 00467690*/ PPC::Runtime::ASM::bne(.L_8046A89C);
/*8046A894 00467694*/ PPC::Runtime::ASM::li(context->r12, 0x1);
/*8046A898 00467698*/ PPC::Runtime::ASM::b(.L_8046A8B8);
RUNTIME_PPC_JUMP_LABEL(.L_8046A89C, 0x8046A89C) //this is a jump label
/*8046A89C 0046769C*/ PPC::Runtime::ASM::cmplw(context->r7, context->r0);
/*8046A8A0 004676A0*/ PPC::Runtime::ASM::bne(.L_8046A918);
/*8046A8A4 004676A4*/ PPC::Runtime::ASM::b(.L_8046A8B8);
RUNTIME_PPC_JUMP_LABEL(.L_8046A8A8, 0x8046A8A8) //this is a jump label
/*8046A8A8 004676A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r10));
/*8046A8AC 004676AC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r8);
/*8046A8B0 004676B0*/ PPC::Runtime::ASM::beq(.L_8046A8B8);
/*8046A8B4 004676B4*/ PPC::Runtime::ASM::li(context->r12, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8046A8B8, 0x8046A8B8) //this is a jump label
/*8046A8B8 004676B8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8046A8BC 004676BC*/ PPC::Runtime::ASM::cmplw(context->r7, context->r8);
/*8046A8C0 004676C0*/ PPC::Runtime::ASM::beq(.L_8046A8F0);
/*8046A8C4 004676C4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r10));
/*8046A8C8 004676C8*/ PPC::Runtime::ASM::cmplw(context->r9, context->r8);
/*8046A8CC 004676CC*/ PPC::Runtime::ASM::bne(.L_8046A8D8);
/*8046A8D0 004676D0*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
/*8046A8D4 004676D4*/ PPC::Runtime::ASM::b(.L_8046A900);
RUNTIME_PPC_JUMP_LABEL(.L_8046A8D8, 0x8046A8D8) //this is a jump label
/*8046A8D8 004676D8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r10));
/*8046A8DC 004676DC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*8046A8E0 004676E0*/ PPC::Runtime::ASM::bne(.L_8046A918);
/*8046A8E4 004676E4*/ PPC::Runtime::ASM::cmplw(context->r9, context->r7);
/*8046A8E8 004676E8*/ PPC::Runtime::ASM::beq(.L_8046A900);
/*8046A8EC 004676EC*/ PPC::Runtime::ASM::b(.L_8046A918);
RUNTIME_PPC_JUMP_LABEL(.L_8046A8F0, 0x8046A8F0) //this is a jump label
/*8046A8F0 004676F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r10));
/*8046A8F4 004676F4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r8);
/*8046A8F8 004676F8*/ PPC::Runtime::ASM::beq(.L_8046A900);
/*8046A8FC 004676FC*/ PPC::Runtime::ASM::addi(context->r12, context->r12, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8046A900, 0x8046A900) //this is a jump label
/*8046A900 00467700*/ PPC::Runtime::ASM::cmpw(context->r12, context->r31);
/*8046A904 00467704*/ PPC::Runtime::ASM::bge(.L_8046A918);
/*8046A908 00467708*/ PPC::Runtime::ASM::cmpwi(context->r12, 0x0);
/*8046A90C 0046770C*/ PPC::Runtime::ASM::addi(context->r30, context->r10, 0x0);
/*8046A910 00467710*/ PPC::Runtime::ASM::addi(context->r31, context->r12, 0x0);
/*8046A914 00467714*/ PPC::Runtime::ASM::beq(.L_8046A93C);
RUNTIME_PPC_JUMP_LABEL(.L_8046A918, 0x8046A918) //this is a jump label
/*8046A918 00467718*/ PPC::Runtime::ASM::cmplwi(context->r11, 0x0);
/*8046A91C 0046771C*/ PPC::Runtime::ASM::addi(context->r10, context->r11, 0x0);
/*8046A920 00467720*/ PPC::Runtime::ASM::bne(.L_8046A92C);
/*8046A924 00467724*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046A928 00467728*/ PPC::Runtime::ASM::b(.L_8046A930);
RUNTIME_PPC_JUMP_LABEL(.L_8046A92C, 0x8046A92C) //this is a jump label
/*8046A92C 0046772C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r11));
RUNTIME_PPC_JUMP_LABEL(.L_8046A930, 0x8046A930) //this is a jump label
/*8046A930 00467730*/ PPC::Runtime::ASM::mr(context->r11, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8046A934, 0x8046A934) //this is a jump label
/*8046A934 00467734*/ PPC::Runtime::ASM::cmplwi(context->r10, 0x0);
/*8046A938 00467738*/ PPC::Runtime::ASM::bne(.L_8046A838);
RUNTIME_PPC_JUMP_LABEL(.L_8046A93C, 0x8046A93C) //this is a jump label
/*8046A93C 0046773C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_8046A940, 0x8046A940) //this is a jump label
/*8046A940 00467740*/ PPC::Runtime::ASM::lmw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8046A944 00467744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8046A948 00467748*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8046A94C 0046774C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046A950 00467750*/ PPC::Runtime::ASM::blr();
}