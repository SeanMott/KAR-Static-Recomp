//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_SIRefreshSamplingRate?.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIConfigure.hpp"
#include "fn_VISetPreRetraceCallback.hpp"
#include "fn_VISetPostRetraceCallback.hpp"
#include "fn_VISetBlack.hpp"
#include "fn_8043F240.hpp"
#include "fn_VISetNextFrameBuffer.hpp"
#include "fn_VIFlush.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_8043F5D4.hpp"
#include "fn_8043F240.hpp"
#include "fn_VISetNextFrameBuffer.hpp"
#include "fn_VIFlush.hpp"
#include "fn_VIGetRetraceCount.hpp"
#include "fn_OSPanic.hpp"



void fn_8043F820(PPC::Runtime::GCContext* context)
{
/*8043F820 0043C620*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8043F824 0043C624*/ PPC::Runtime::ASM::mflr(context->r0);
/*8043F828 0043C628*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8043F82C 0043C62C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8043F830 0043C630*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8043F834 0043C634*/ PPC::Runtime::ASM::lis(context->r4, lbl_80507308 @ Get_MemoryOffset_HighBit);
/*8043F838 0043C638*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043F83C 0043C63C*/ PPC::Runtime::ASM::addi(context->r30, context->r4, lbl_80507308 @ Get_MemoryOffset_LowBit);
/*8043F840 0043C640*/ PPC::Runtime::ASM::bl(fn_SIRefreshSamplingRate?);
/*8043F844 0043C644*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE434 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043F848 0043C648*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8043F84C 0043C64C*/ PPC::Runtime::ASM::bne(.L_8043FA8C);
/*8043F850 0043C650*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F854 0043C654*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F858, 0x8043F858) //this is a jump label
/*8043F858 0043C658*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F85C 0043C65C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F860 0043C660*/ PPC::Runtime::ASM::beq(.L_8043F858);
/*8043F864 0043C664*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043F868 0043C668*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F86C 0043C66C*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8043F870, 0x8043F870) //this is a jump label
/*8043F870 0043C670*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F874, 0x8043F874) //this is a jump label
/*8043F874 0043C674*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F878 0043C678*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F87C 0043C67C*/ PPC::Runtime::ASM::beq(.L_8043F874);
/*8043F880 0043C680*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F884 0043C684*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F888 0043C688*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043F88C 0043C68C*/ PPC::Runtime::ASM::bne(.L_8043F870);
/*8043F890 0043C690*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F894 0043C694*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F898, 0x8043F898) //this is a jump label
/*8043F898 0043C698*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F89C 0043C69C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F8A0 0043C6A0*/ PPC::Runtime::ASM::beq(.L_8043F898);
/*8043F8A4 0043C6A4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F8A8, 0x8043F8A8) //this is a jump label
/*8043F8A8 0043C6A8*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F8AC, 0x8043F8AC) //this is a jump label
/*8043F8AC 0043C6AC*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F8B0 0043C6B0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F8B4 0043C6B4*/ PPC::Runtime::ASM::beq(.L_8043F8AC);
/*8043F8B8 0043C6B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F8BC 0043C6BC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F8C0 0043C6C0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x70);
/*8043F8C4 0043C6C4*/ PPC::Runtime::ASM::bne(.L_8043F8A8);
/*8043F8C8 0043C6C8*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F8CC 0043C6CC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F8D0, 0x8043F8D0) //this is a jump label
/*8043F8D0 0043C6D0*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F8D4 0043C6D4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F8D8 0043C6D8*/ PPC::Runtime::ASM::beq(.L_8043F8D0);
/*8043F8DC 0043C6DC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F8E0, 0x8043F8E0) //this is a jump label
/*8043F8E0 0043C6E0*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F8E4, 0x8043F8E4) //this is a jump label
/*8043F8E4 0043C6E4*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F8E8 0043C6E8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F8EC 0043C6EC*/ PPC::Runtime::ASM::beq(.L_8043F8E4);
/*8043F8F0 0043C6F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F8F4 0043C6F4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F8F8 0043C6F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043F8FC 0043C6FC*/ PPC::Runtime::ASM::bne(.L_8043F8E0);
/*8043F900 0043C700*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F904 0043C704*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F908, 0x8043F908) //this is a jump label
/*8043F908 0043C708*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F90C 0043C70C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F910 0043C710*/ PPC::Runtime::ASM::beq(.L_8043F908);
/*8043F914 0043C714*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F918, 0x8043F918) //this is a jump label
/*8043F918 0043C718*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F91C, 0x8043F91C) //this is a jump label
/*8043F91C 0043C71C*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F920 0043C720*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F924 0043C724*/ PPC::Runtime::ASM::beq(.L_8043F91C);
/*8043F928 0043C728*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F92C 0043C72C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F930 0043C730*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x808);
/*8043F934 0043C734*/ PPC::Runtime::ASM::bne(.L_8043F918);
/*8043F938 0043C738*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F93C 0043C73C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F940, 0x8043F940) //this is a jump label
/*8043F940 0043C740*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F944 0043C744*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F948 0043C748*/ PPC::Runtime::ASM::beq(.L_8043F940);
/*8043F94C 0043C74C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F950, 0x8043F950) //this is a jump label
/*8043F950 0043C750*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F954, 0x8043F954) //this is a jump label
/*8043F954 0043C754*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F958 0043C758*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F95C 0043C75C*/ PPC::Runtime::ASM::beq(.L_8043F954);
/*8043F960 0043C760*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F964 0043C764*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F968 0043C768*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043F96C 0043C76C*/ PPC::Runtime::ASM::bne(.L_8043F950);
/*8043F970 0043C770*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F974 0043C774*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F978, 0x8043F978) //this is a jump label
/*8043F978 0043C778*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F97C 0043C77C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F980 0043C780*/ PPC::Runtime::ASM::beq(.L_8043F978);
/*8043F984 0043C784*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F988, 0x8043F988) //this is a jump label
/*8043F988 0043C788*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F98C, 0x8043F98C) //this is a jump label
/*8043F98C 0043C78C*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F990 0043C790*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F994 0043C794*/ PPC::Runtime::ASM::beq(.L_8043F98C);
/*8043F998 0043C798*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F99C 0043C79C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F9A0 0043C7A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x104);
/*8043F9A4 0043C7A4*/ PPC::Runtime::ASM::bne(.L_8043F988);
/*8043F9A8 0043C7A8*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F9AC 0043C7AC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F9B0, 0x8043F9B0) //this is a jump label
/*8043F9B0 0043C7B0*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F9B4 0043C7B4*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F9B8 0043C7B8*/ PPC::Runtime::ASM::beq(.L_8043F9B0);
/*8043F9BC 0043C7BC*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F9C0, 0x8043F9C0) //this is a jump label
/*8043F9C0 0043C7C0*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F9C4, 0x8043F9C4) //this is a jump label
/*8043F9C4 0043C7C4*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F9C8 0043C7C8*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043F9CC 0043C7CC*/ PPC::Runtime::ASM::beq(.L_8043F9C4);
/*8043F9D0 0043C7D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043F9D4 0043C7D4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043F9D8 0043C7D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043F9DC 0043C7DC*/ PPC::Runtime::ASM::bne(.L_8043F9C0);
/*8043F9E0 0043C7E0*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F9E4 0043C7E4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F9E8, 0x8043F9E8) //this is a jump label
/*8043F9E8 0043C7E8*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043F9EC 0043C7EC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043F9F0 0043C7F0*/ PPC::Runtime::ASM::beq(.L_8043F9E8);
/*8043F9F4 0043C7F4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043F9F8, 0x8043F9F8) //this is a jump label
/*8043F9F8 0043C7F8*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043F9FC, 0x8043F9FC) //this is a jump label
/*8043F9FC 0043C7FC*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA00 0043C800*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043FA04 0043C804*/ PPC::Runtime::ASM::beq(.L_8043F9FC);
/*8043FA08 0043C808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043FA0C 0043C80C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043FA10 0043C810*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x201);
/*8043FA14 0043C814*/ PPC::Runtime::ASM::bne(.L_8043F9F8);
/*8043FA18 0043C818*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA1C 0043C81C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA20, 0x8043FA20) //this is a jump label
/*8043FA20 0043C820*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA24 0043C824*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043FA28 0043C828*/ PPC::Runtime::ASM::beq(.L_8043FA20);
/*8043FA2C 0043C82C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA30, 0x8043FA30) //this is a jump label
/*8043FA30 0043C830*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA34, 0x8043FA34) //this is a jump label
/*8043FA34 0043C834*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA38 0043C838*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043FA3C 0043C83C*/ PPC::Runtime::ASM::beq(.L_8043FA34);
/*8043FA40 0043C840*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043FA44 0043C844*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043FA48 0043C848*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FA4C 0043C84C*/ PPC::Runtime::ASM::bne(.L_8043FA30);
/*8043FA50 0043C850*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA54 0043C854*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA58, 0x8043FA58) //this is a jump label
/*8043FA58 0043C858*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA5C 0043C85C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043FA60 0043C860*/ PPC::Runtime::ASM::beq(.L_8043FA58);
/*8043FA64 0043C864*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA68, 0x8043FA68) //this is a jump label
/*8043FA68 0043C868*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA6C, 0x8043FA6C) //this is a jump label
/*8043FA6C 0043C86C*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA70 0043C870*/ PPC::Runtime::ASM::cmplw(context->r3, context->r27);
/*8043FA74 0043C874*/ PPC::Runtime::ASM::beq(.L_8043FA6C);
/*8043FA78 0043C878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8043FA7C 0043C87C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8043FA80 0043C880*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x402);
/*8043FA84 0043C884*/ PPC::Runtime::ASM::bne(.L_8043FA68);
/*8043FA88 0043C888*/ PPC::Runtime::ASM::b(.L_8043FAB0);
RUNTIME_PPC_JUMP_LABEL(.L_8043FA8C, 0x8043FA8C) //this is a jump label
/*8043FA8C 0043C88C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE430 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043FA90 0043C890*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FA94 0043C894*/ PPC::Runtime::ASM::beq(.L_8043FAB0);
/*8043FA98 0043C898*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FA9C 0043C89C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE430 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043FAA0 0043C8A0*/ PPC::Runtime::ASM::add(context->r28, context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FAA4, 0x8043FAA4) //this is a jump label
/*8043FAA4 0043C8A4*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FAA8 0043C8A8*/ PPC::Runtime::ASM::cmplw(context->r28, context->r3);
/*8043FAAC 0043C8AC*/ PPC::Runtime::ASM::bgt(.L_8043FAA4);
RUNTIME_PPC_JUMP_LABEL(.L_8043FAB0, 0x8043FAB0) //this is a jump label
/*8043FAB0 0043C8B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FAB4 0043C8B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FAB8 0043C8B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*8043FABC 0043C8BC*/ PPC::Runtime::ASM::bl(fn_VIConfigure);
/*8043FAC0 0043C8C0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043FAC4 0043C8C4*/ PPC::Runtime::ASM::bl(fn_VISetPreRetraceCallback);
/*8043FAC8 0043C8C8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043FACC 0043C8CC*/ PPC::Runtime::ASM::bl(fn_VISetPostRetraceCallback);
/*8043FAD0 0043C8D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043FAD4 0043C8D4*/ PPC::Runtime::ASM::bl(fn_VISetBlack);
/*8043FAD8 0043C8D8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE434 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043FADC 0043C8DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8043FAE0 0043C8E0*/ PPC::Runtime::ASM::bne(.L_8043FB54);
/*8043FAE4 0043C8E4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FAE8 0043C8E8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043FAEC 0043C8EC*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FAF0 0043C8F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8043FAF4 0043C8F4*/ PPC::Runtime::ASM::b(.L_8043FB04);
RUNTIME_PPC_JUMP_LABEL(.L_8043FAF8, 0x8043FAF8) //this is a jump label
/*8043FAF8 0043C8F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8043FAFC 0043C8FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8043FB00 0043C900*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FB04, 0x8043FB04) //this is a jump label
/*8043FB04 0043C904*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8043FB08 0043C908*/ PPC::Runtime::ASM::bne(.L_8043FAF8);
/*8043FB0C 0043C90C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8043FB10 0043C910*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf6c);
/*8043FB14 0043C914*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8043FB18 0043C918*/ PPC::Runtime::ASM::beq(.L_8043FB3C);
/*8043FB1C 0043C91C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xf6c);
/*8043FB20 0043C920*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf6c, context->r30));
/*8043FB24 0043C924*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8043FB28 0043C928*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8043FB2C 0043C92C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8043FB30 0043C930*/ PPC::Runtime::ASM::beq(.L_8043FB3C);
/*8043FB34 0043C934*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8043FB38 0043C938*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8043FB3C, 0x8043FB3C) //this is a jump label
/*8043FB3C 0043C93C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FB40 0043C940*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8043FB44 0043C944*/ PPC::Runtime::ASM::lbzu(context->r0, lbl_8058D1C0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8043FB48 0043C948*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8043FB4C 0043C94C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8043FB50 0043C950*/ PPC::Runtime::ASM::b(.L_8043FBC0);
RUNTIME_PPC_JUMP_LABEL(.L_8043FB54, 0x8043FB54) //this is a jump label
/*8043FB54 0043C954*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FB58 0043C958*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8043FB5C 0043C95C*/ PPC::Runtime::ASM::addi(context->r5, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FB60 0043C960*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8043FB64 0043C964*/ PPC::Runtime::ASM::b(.L_8043FB74);
RUNTIME_PPC_JUMP_LABEL(.L_8043FB68, 0x8043FB68) //this is a jump label
/*8043FB68 0043C968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8043FB6C 0043C96C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8043FB70 0043C970*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FB74, 0x8043FB74) //this is a jump label
/*8043FB74 0043C974*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8043FB78 0043C978*/ PPC::Runtime::ASM::bne(.L_8043FB68);
/*8043FB7C 0043C97C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8043FB80 0043C980*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0xf58);
/*8043FB84 0043C984*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8043FB88 0043C988*/ PPC::Runtime::ASM::beq(.L_8043FBAC);
/*8043FB8C 0043C98C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xf58);
/*8043FB90 0043C990*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf58, context->r30));
/*8043FB94 0043C994*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8043FB98 0043C998*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*8043FB9C 0043C99C*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8043FBA0 0043C9A0*/ PPC::Runtime::ASM::beq(.L_8043FBAC);
/*8043FBA4 0043C9A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8043FBA8 0043C9A8*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8043FBAC, 0x8043FBAC) //this is a jump label
/*8043FBAC 0043C9AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FBB0 0043C9B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8043FBB4 0043C9B4*/ PPC::Runtime::ASM::lbzu(context->r0, lbl_8058D1C0 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8043FBB8 0043C9B8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*8043FBBC 0043C9BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8043FBC0, 0x8043FBC0) //this is a jump label
/*8043FBC0 0043C9C0*/ PPC::Runtime::ASM::bl(fn_8043F240);
/*8043FBC4 0043C9C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FBC8 0043C9C8*/ PPC::Runtime::ASM::addi(context->r29, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FBCC 0043C9CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8043FBD0 0043C9D0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8043FBD4 0043C9D4*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*8043FBD8 0043C9D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8043FBDC 0043C9DC*/ PPC::Runtime::ASM::bl(fn_VISetNextFrameBuffer);
/*8043FBE0 0043C9E0*/ PPC::Runtime::ASM::bl(fn_VIFlush);
/*8043FBE4 0043C9E4*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FBE8 0043C9E8*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FBEC, 0x8043FBEC) //this is a jump label
/*8043FBEC 0043C9EC*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FBF0 0043C9F0*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043FBF4 0043C9F4*/ PPC::Runtime::ASM::beq(.L_8043FBEC);
/*8043FBF8 0043C9F8*/ PPC::Runtime::ASM::lis(context->r4, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FBFC 0043C9FC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8043FC00 0043CA00*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FC04 0043CA04*/ PPC::Runtime::ASM::b(.L_8043FCC8);
RUNTIME_PPC_JUMP_LABEL(.L_8043FC08, 0x8043FC08) //this is a jump label
/*8043FC08 0043CA08*/ PPC::Runtime::ASM::bl(fn_8043F5D4);
RUNTIME_PPC_JUMP_LABEL(.L_8043FC0C, 0x8043FC0C) //this is a jump label
/*8043FC0C 0043CA0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8043FC10 0043CA10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043FC14 0043CA14*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*8043FC18 0043CA18*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*8043FC1C 0043CA1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8043FC20 0043CA20*/ PPC::Runtime::ASM::b(.L_8043FC4C);
RUNTIME_PPC_JUMP_LABEL(.L_8043FC24, 0x8043FC24) //this is a jump label
/*8043FC24 0043CA24*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*8043FC28 0043CA28*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*8043FC2C 0043CA2C*/ PPC::Runtime::ASM::beq(.L_8043FC48);
/*8043FC30 0043CA30*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8043FC34 0043CA34*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8043FC38 0043CA38*/ PPC::Runtime::ASM::bctrl();
/*8043FC3C 0043CA3C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8043FC40 0043CA40*/ PPC::Runtime::ASM::beq(.L_8043FC48);
/*8043FC44 0043CA44*/ PPC::Runtime::ASM::b(.L_8043FC70);
RUNTIME_PPC_JUMP_LABEL(.L_8043FC48, 0x8043FC48) //this is a jump label
/*8043FC48 0043CA48*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_8043FC4C, 0x8043FC4C) //this is a jump label
/*8043FC4C 0043CA4C*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8043FC50 0043CA50*/ PPC::Runtime::ASM::beq(.L_8043FC60);
/*8043FC54 0043CA54*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/* 8043FC58 0043CA58  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8043FC5C 0043CA5C*/ PPC::Runtime::ASM::beq(.L_8043FC24);
RUNTIME_PPC_JUMP_LABEL(.L_8043FC60, 0x8043FC60) //this is a jump label
/*8043FC60 0043CA60*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/* 8043FC64 0043CA64  54 00 DF FF */ extrwi. context->r0 , context->r0 , 1 , 26
/*8043FC68 0043CA68*/ PPC::Runtime::ASM::bne(.L_8043FC0C);
/*8043FC6C 0043CA6C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8043FC70, 0x8043FC70) //this is a jump label
/*8043FC70 0043CA70*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8043FC74 0043CA74*/ PPC::Runtime::ASM::beq(.L_8043FCB8);
/*8043FC78 0043CA78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8043FC7C 0043CA7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8043FC80 0043CA80*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8043FC84 0043CA84*/ PPC::Runtime::ASM::divw(context->r0, context->r4, context->r3);
/*8043FC88 0043CA88*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*8043FC8C 0043CA8C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r4);
/*8043FC90 0043CA90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8043FC94 0043CA94*/ PPC::Runtime::ASM::bl(fn_8043F240);
/*8043FC98 0043CA98*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8043FC9C 0043CA9C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058D1C0 @ Get_MemoryOffset_HighBit);
/*8043FCA0 0043CAA0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_8058D1C0 @ Get_MemoryOffset_LowBit);
/*8043FCA4 0043CAA4*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 2);
/*8043FCA8 0043CAA8*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*8043FCAC 0043CAAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8043FCB0 0043CAB0*/ PPC::Runtime::ASM::bl(fn_VISetNextFrameBuffer);
/*8043FCB4 0043CAB4*/ PPC::Runtime::ASM::bl(fn_VIFlush);
RUNTIME_PPC_JUMP_LABEL(.L_8043FCB8, 0x8043FCB8) //this is a jump label
/*8043FCB8 0043CAB8*/ PPC::Runtime::ASM::bl(fn_VIGetRetraceCount);
/*8043FCBC 0043CABC*/ PPC::Runtime::ASM::cmplw(context->r3, context->r28);
/*8043FCC0 0043CAC0*/ PPC::Runtime::ASM::beq(.L_8043FCB8);
/*8043FCC4 0043CAC4*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8043FCC8, 0x8043FCC8) //this is a jump label
/*8043FCC8 0043CAC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*8043FCCC 0043CACC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8043FCD0 0043CAD0*/ PPC::Runtime::ASM::bne(.L_8043FC08);
/*8043FCD4 0043CAD4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1598);
/*8043FCD8 0043CAD8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x15ac);
/*8043FCDC 0043CADC*/ PPC::Runtime::ASM::li(context->r4, 0x946);
/*8043FCE0 0043CAE0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8043FCE4 0043CAE4*/ PPC::Runtime::ASM::bl(fn_OSPanic);
/*8043FCE8 0043CAE8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8043FCEC 0043CAEC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8043FCF0 0043CAF0*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8043FCF4 0043CAF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8043FCF8 0043CAF8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8043FCFC 0043CAFC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8043FD00 0043CB00*/ PPC::Runtime::ASM::blr();
}