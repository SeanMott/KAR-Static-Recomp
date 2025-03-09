//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_IPGetAnonPort.hpp"
#include "fn_8046F250.hpp"
#include "fn_8046F250.hpp"
#include "fn_SendCallback.hpp"
#include "fn_SendCallback.hpp"
#include "memmove.hpp"
#include "fn_SendCallback.hpp"
#include "fn_SendCallback.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "fn_memcmp.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "fn_IPOut.hpp"
#include "fn_cbForCancelSync3.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_UDPSendAsync(PPC::Runtime::GCContext* context)
{
/*8046F7FC 0046C5FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8046F800 0046C600*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*8046F804 0046C604*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8046F808 0046C608*/ PPC::Runtime::ASM::stmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8046F80C 0046C60C*/ PPC::Runtime::ASM::addi(context->r21, context->r3, 0x0);
/*8046F810 0046C610*/ PPC::Runtime::ASM::addi(context->r22, context->r4, 0x0);
/*8046F814 0046C614*/ PPC::Runtime::ASM::addi(context->r23, context->r5, 0x0);
/*8046F818 0046C618*/ PPC::Runtime::ASM::addi(context->r24, context->r6, 0x0);
/*8046F81C 0046C61C*/ PPC::Runtime::ASM::addi(context->r25, context->r7, 0x0);
/*8046F820 0046C620*/ PPC::Runtime::ASM::addi(context->r26, context->r8, 0x0);
/*8046F824 0046C624*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8046F828 0046C628*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8046F82C 0046C62C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*8046F830 0046C630*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*8046F834 0046C634*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x11);
/*8046F838 0046C638*/ PPC::Runtime::ASM::beq(.L_8046F844);
/*8046F83C 0046C63C*/ PPC::Runtime::ASM::li(context->r20, -0xc);
/*8046F840 0046C640*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F844, 0x8046F844) //this is a jump label
/*8046F844 0046C644*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r21));
/*8046F848 0046C648*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046F84C 0046C64C*/ PPC::Runtime::ASM::bne(.L_8046F874);
/*8046F850 0046C650*/ PPC::Runtime::ASM::li(context->r3, STRUCT_BYTE4_COUNT_1805DE628 @ Get_MemoryOffset_SDA21);
/*8046F854 0046C654*/ PPC::Runtime::ASM::li(context->r4, MemoryOffset_340 @ Get_MemoryOffset_SDA21);
/*8046F858 0046C658*/ PPC::Runtime::ASM::bl(fn_IPGetAnonPort);
/*8046F85C 0046C65C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r21));
/*8046F860 0046C660*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r21));
/*8046F864 0046C664*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046F868 0046C668*/ PPC::Runtime::ASM::bne(.L_8046F874);
/*8046F86C 0046C66C*/ PPC::Runtime::ASM::li(context->r20, -0x7);
/*8046F870 0046C670*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F874, 0x8046F874) //this is a jump label
/*8046F874 0046C674*/ PPC::Runtime::ASM::cmpwi(context->r23, 0x0);
/*8046F878 0046C678*/ PPC::Runtime::ASM::blt(.L_8046F88C);
/*8046F87C 0046C67C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8046F880 0046C680*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x9);
/*8046F884 0046C684*/ PPC::Runtime::ASM::cmpw(context->r0, context->r23);
/*8046F888 0046C688*/ PPC::Runtime::ASM::bge(.L_8046F894);
RUNTIME_PPC_JUMP_LABEL(.L_8046F88C, 0x8046F88C) //this is a jump label
/*8046F88C 0046C68C*/ PPC::Runtime::ASM::li(context->r20, -0x11);
/*8046F890 0046C690*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F894, 0x8046F894) //this is a jump label
/*8046F894 0046C694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r21));
/*8046F898 0046C698*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046F89C 0046C69C*/ PPC::Runtime::ASM::beq(.L_8046F8B4);
/*8046F8A0 0046C6A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r21));
/*8046F8A4 0046C6A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046F8A8 0046C6A8*/ PPC::Runtime::ASM::bne(.L_8046F8B4);
/*8046F8AC 0046C6AC*/ PPC::Runtime::ASM::li(context->r20, -0x1);
/*8046F8B0 0046C6B0*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F8B4, 0x8046F8B4) //this is a jump label
/*8046F8B4 0046C6B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r21));
/*8046F8B8 0046C6B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046F8BC 0046C6BC*/ PPC::Runtime::ASM::bne(.L_8046F924);
/*8046F8C0 0046C6C0*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*8046F8C4 0046C6C4*/ PPC::Runtime::ASM::bne(.L_8046F8D0);
/*8046F8C8 0046C6C8*/ PPC::Runtime::ASM::li(context->r20, -0x6);
/*8046F8CC 0046C6CC*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F8D0, 0x8046F8D0) //this is a jump label
/*8046F8D0 0046C6D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8046F8D4 0046C6D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*8046F8D8 0046C6D8*/ PPC::Runtime::ASM::bne(.L_8046F904);
/*8046F8DC 0046C6DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r24));
/*8046F8E0 0046C6E0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*8046F8E4 0046C6E4*/ PPC::Runtime::ASM::bne(.L_8046F904);
/*8046F8E8 0046C6E8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r24));
/*8046F8EC 0046C6EC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046F8F0 0046C6F0*/ PPC::Runtime::ASM::beq(.L_8046F904);
/*8046F8F4 0046C6F4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*8046F8F8 0046C6F8*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 28);
/*8046F8FC 0046C6FC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xf0);
/*8046F900 0046C700*/ PPC::Runtime::ASM::bne(.L_8046F90C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F904, 0x8046F904) //this is a jump label
/*8046F904 0046C704*/ PPC::Runtime::ASM::li(context->r20, -0xc);
/*8046F908 0046C708*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F90C, 0x8046F90C) //this is a jump label
/*8046F90C 0046C70C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
/*8046F910 0046C710*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046F914 0046C714*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046F918 0046C718*/ PPC::Runtime::ASM::bne(.L_8046F924);
/*8046F91C 0046C71C*/ PPC::Runtime::ASM::li(context->r20, -0xd);
/*8046F920 0046C720*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F924, 0x8046F924) //this is a jump label
/*8046F924 0046C724*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r21));
/*8046F928 0046C728*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8046F92C 0046C72C*/ PPC::Runtime::ASM::beq(.L_8046F944);
/*8046F930 0046C730*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r21));
/*8046F934 0046C734*/ PPC::Runtime::ASM::cmpw(context->r0, context->r23);
/*8046F938 0046C738*/ PPC::Runtime::ASM::bge(.L_8046F944);
/*8046F93C 0046C73C*/ PPC::Runtime::ASM::li(context->r20, -0x11);
/*8046F940 0046C740*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046F944, 0x8046F944) //this is a jump label
/*8046F944 0046C744*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8046F948 0046C748*/ PPC::Runtime::ASM::bne(.L_8046F99C);
/*8046F94C 0046C74C*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8046F950 0046C750*/ PPC::Runtime::ASM::addi(context->r30, context->r21, 0x78);
/*8046F954 0046C754*/ PPC::Runtime::ASM::addi(context->r29, context->r21, 0x8c);
/*8046F958 0046C758*/ PPC::Runtime::ASM::addi(context->r28, context->r21, 0x34);
/*8046F95C 0046C75C*/ PPC::Runtime::ASM::beq(.L_8046F968);
/*8046F960 0046C760*/ PPC::Runtime::ASM::mr(context->r0, context->r25);
/*8046F964 0046C764*/ PPC::Runtime::ASM::b(.L_8046F970);
RUNTIME_PPC_JUMP_LABEL(.L_8046F968, 0x8046F968) //this is a jump label
/*8046F968 0046C768*/ PPC::Runtime::ASM::lis(context->r3, fn_8046F250 @ Get_MemoryOffset_HighBit);
/*8046F96C 0046C76C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_8046F250 @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_8046F970, 0x8046F970) //this is a jump label
/*8046F970 0046C770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r21));
/*8046F974 0046C774*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8046F978 0046C778*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r21));
/*8046F97C 0046C77C*/ PPC::Runtime::ASM::beq(.L_8046F988);
/*8046F980 0046C780*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8046F984 0046C784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8046F988, 0x8046F988) //this is a jump label
/*8046F988 0046C788*/ PPC::Runtime::ASM::lis(context->r3, fn_SendCallback @ Get_MemoryOffset_HighBit);
/*8046F98C 0046C78C*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8046F990 0046C790*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_SendCallback @ Get_MemoryOffset_LowBit);
/*8046F994 0046C794*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8046F998 0046C798*/ PPC::Runtime::ASM::b(.L_8046FA48);
RUNTIME_PPC_JUMP_LABEL(.L_8046F99C, 0x8046F99C) //this is a jump label
/*8046F99C 0046C79C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r21));
/*8046F9A0 0046C7A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8046F9A4 0046C7A4*/ PPC::Runtime::ASM::bgt(.L_8046F9DC);
/*8046F9A8 0046C7A8*/ PPC::Runtime::ASM::addi(context->r4, context->r22, 0x0);
/*8046F9AC 0046C7AC*/ PPC::Runtime::ASM::addi(context->r5, context->r23, 0x0);
/*8046F9B0 0046C7B0*/ PPC::Runtime::ASM::addi(context->r30, context->r21, 0x78);
/*8046F9B4 0046C7B4*/ PPC::Runtime::ASM::addi(context->r29, context->r21, 0x8c);
/*8046F9B8 0046C7B8*/ PPC::Runtime::ASM::addi(context->r28, context->r21, 0x34);
/*8046F9BC 0046C7BC*/ PPC::Runtime::ASM::bl(memmove);
/*8046F9C0 0046C7C0*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r21));
/*8046F9C4 0046C7C4*/ PPC::Runtime::ASM::lis(context->r3, fn_SendCallback @ Get_MemoryOffset_HighBit);
/*8046F9C8 0046C7C8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_SendCallback @ Get_MemoryOffset_LowBit);
/*8046F9CC 0046C7CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r21));
/*8046F9D0 0046C7D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8046F9D4 0046C7D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8046F9D8 0046C7D8*/ PPC::Runtime::ASM::b(.L_8046FA48);
RUNTIME_PPC_JUMP_LABEL(.L_8046F9DC, 0x8046F9DC) //this is a jump label
/*8046F9DC 0046C7DC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8046F9E0 0046C7E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*8046F9E4 0046C7E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*8046F9E8 0046C7E8*/ PPC::Runtime::ASM::addi(context->r27, context->r3, 0x0);
/*8046F9EC 0046C7EC*/ PPC::Runtime::ASM::addi(context->r4, context->r23, 0x60);
/*8046F9F0 0046C7F0*/ PPC::Runtime::ASM::mtlr(context->r12);
/* 8046F9F4 0046C7F4  4E 80 00 21 */ blrl
/* 8046F9F8 0046C7F8  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*8046F9FC 0046C7FC*/ PPC::Runtime::ASM::bne(.L_8046FA14);
/*8046FA00 0046C800*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r27));
/*8046FA04 0046C804*/ PPC::Runtime::ASM::li(context->r20, -0x7);
/*8046FA08 0046C808*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8046FA0C 0046C80C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r27));
/*8046FA10 0046C810*/ PPC::Runtime::ASM::b(.L_8046FC6C);
RUNTIME_PPC_JUMP_LABEL(.L_8046FA14, 0x8046FA14) //this is a jump label
/*8046FA14 0046C814*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x44);
/*8046FA18 0046C818*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x14);
/*8046FA1C 0046C81C*/ PPC::Runtime::ASM::addi(context->r20, context->r29, 0x8);
/*8046FA20 0046C820*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0x0);
/*8046FA24 0046C824*/ PPC::Runtime::ASM::addi(context->r3, context->r20, 0x0);
/*8046FA28 0046C828*/ PPC::Runtime::ASM::addi(context->r4, context->r22, 0x0);
/*8046FA2C 0046C82C*/ PPC::Runtime::ASM::addi(context->r5, context->r23, 0x0);
/*8046FA30 0046C830*/ PPC::Runtime::ASM::bl(memmove);
/*8046FA34 0046C834*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*8046FA38 0046C838*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046FA3C 0046C83C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r28));
/*8046FA40 0046C840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*8046FA44 0046C844*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_8046FA48, 0x8046FA48) //this is a jump label
/*8046FA48 0046C848*/ PPC::Runtime::ASM::li(context->r0, 0x45);
/*8046FA4C 0046C84C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8046FA50 0046C850*/ PPC::Runtime::ASM::li(context->r3, 0x11);
/*8046FA54 0046C854*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8046FA58 0046C858*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r21));
/*8046FA5C 0046C85C*/ PPC::Runtime::ASM::addi(context->r0, context->r23, 0x8);
/*8046FA60 0046C860*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r30));
/*8046FA64 0046C864*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8046FA68 0046C868*/ PPC::Runtime::ASM::clrlslwi(context->r5, context->r5, 28, 2);
/*8046FA6C 0046C86C*/ PPC::Runtime::ASM::add(context->r5, context->r5, context->r23);
/*8046FA70 0046C870*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*8046FA74 0046C874*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8046FA78 0046C878*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r30));
/*8046FA7C 0046C87C*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r30));
/*8046FA80 0046C880*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r21));
/*8046FA84 0046C884*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8046FA88 0046C888*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8046FA8C 0046C88C*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r29));
/*8046FA90 0046C890*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r21));
/*8046FA94 0046C894*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046FA98 0046C898*/ PPC::Runtime::ASM::beq(.L_8046FAB4);
/*8046FA9C 0046C89C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*8046FAA0 0046C8A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*8046FAA4 0046C8A4*/ PPC::Runtime::ASM::addi(context->r4, context->r21, 0x14);
/*8046FAA8 0046C8A8*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046FAAC 0046C8AC*/ PPC::Runtime::ASM::bl(memmove);
/*8046FAB0 0046C8B0*/ PPC::Runtime::ASM::b(.L_8046FACC);
RUNTIME_PPC_JUMP_LABEL(.L_8046FAB4, 0x8046FAB4) //this is a jump label
/*8046FAB4 0046C8B4*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r24));
/*8046FAB8 0046C8B8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*8046FABC 0046C8BC*/ PPC::Runtime::ASM::addi(context->r4, context->r24, 0x4);
/*8046FAC0 0046C8C0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*8046FAC4 0046C8C4*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046FAC8 0046C8C8*/ PPC::Runtime::ASM::bl(memmove);
RUNTIME_PPC_JUMP_LABEL(.L_8046FACC, 0x8046FACC) //this is a jump label
/*8046FACC 0046C8CC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8046FAD0 0046C8D0*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 27);
/*8046FAD4 0046C8D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe0);
/*8046FAD8 0046C8D8*/ PPC::Runtime::ASM::bne(.L_8046FAE4);
/*8046FADC 0046C8DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r21));
/*8046FAE0 0046C8E0*/ PPC::Runtime::ASM::b(.L_8046FAE8);
RUNTIME_PPC_JUMP_LABEL(.L_8046FAE4, 0x8046FAE4) //this is a jump label
/*8046FAE4 0046C8E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_8046FAE8, 0x8046FAE8) //this is a jump label
/*8046FAE8 0046C8E8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8046FAEC 0046C8EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r21));
/*8046FAF0 0046C8F0*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 24, 27);
/*8046FAF4 0046C8F4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe0);
/*8046FAF8 0046C8F8*/ PPC::Runtime::ASM::beq(.L_8046FB20);
/*8046FAFC 0046C8FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r21));
/*8046FB00 0046C900*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046FB04 0046C904*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046FB08 0046C908*/ PPC::Runtime::ASM::beq(.L_8046FB20);
/*8046FB0C 0046C90C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8046FB10 0046C910*/ PPC::Runtime::ASM::addi(context->r4, context->r21, 0xc);
/*8046FB14 0046C914*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046FB18 0046C918*/ PPC::Runtime::ASM::bl(memmove);
/*8046FB1C 0046C91C*/ PPC::Runtime::ASM::b(.L_8046FB98);
RUNTIME_PPC_JUMP_LABEL(.L_8046FB20, 0x8046FB20) //this is a jump label
/*8046FB20 0046C920*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8046FB24 0046C924*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x7f);
/*8046FB28 0046C928*/ PPC::Runtime::ASM::bne(.L_8046FB40);
/*8046FB2C 0046C92C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8046FB30 0046C930*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805E629C @ Get_MemoryOffset_SDA21);
/*8046FB34 0046C934*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046FB38 0046C938*/ PPC::Runtime::ASM::bl(memmove);
/*8046FB3C 0046C93C*/ PPC::Runtime::ASM::b(.L_8046FB98);
RUNTIME_PPC_JUMP_LABEL(.L_8046FB40, 0x8046FB40) //this is a jump label
/*8046FB40 0046C940*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*8046FB44 0046C944*/ PPC::Runtime::ASM::addi(context->r22, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*8046FB48 0046C948*/ PPC::Runtime::ASM::addi(context->r20, context->r22, 0x54);
/*8046FB4C 0046C94C*/ PPC::Runtime::ASM::addi(context->r4, context->r20, 0x0);
/*8046FB50 0046C950*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x10);
/*8046FB54 0046C954*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*8046FB58 0046C958*/ PPC::Runtime::ASM::bl(fn_memcmp);
/*8046FB5C 0046C95C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8046FB60 0046C960*/ PPC::Runtime::ASM::beq(.L_8046FB78);
/*8046FB64 0046C964*/ PPC::Runtime::ASM::addi(context->r4, context->r22, 0x44);
/*8046FB68 0046C968*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8046FB6C 0046C96C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r22));
/*8046FB70 0046C970*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8046FB74 0046C974*/ PPC::Runtime::ASM::bne(.L_8046FB8C);
RUNTIME_PPC_JUMP_LABEL(.L_8046FB78, 0x8046FB78) //this is a jump label
/*8046FB78 0046C978*/ PPC::Runtime::ASM::addi(context->r4, context->r20, 0x0);
/*8046FB7C 0046C97C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8046FB80 0046C980*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046FB84 0046C984*/ PPC::Runtime::ASM::bl(memmove);
/*8046FB88 0046C988*/ PPC::Runtime::ASM::b(.L_8046FB98);
RUNTIME_PPC_JUMP_LABEL(.L_8046FB8C, 0x8046FB8C) //this is a jump label
/*8046FB8C 0046C98C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8046FB90 0046C990*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*8046FB94 0046C994*/ PPC::Runtime::ASM::bl(memmove);
RUNTIME_PPC_JUMP_LABEL(.L_8046FB98, 0x8046FB98) //this is a jump label
/*8046FB98 0046C998*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8046FB9C 0046C99C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*8046FBA0 0046C9A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046FBA4 0046C9A4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x0);
/*8046FBA8 0046C9A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*8046FBAC 0046C9AC*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8046FBB0 0046C9B0*/ PPC::Runtime::ASM::clrlslwi(context->r4, context->r4, 28, 2);
/*8046FBB4 0046C9B4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8046FBB8 0046C9B8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8046FBBC 0046C9BC*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*8046FBC0 0046C9C0*/ PPC::Runtime::ASM::stw(context->r21, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*8046FBC4 0046C9C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r28));
/*8046FBC8 0046C9C8*/ PPC::Runtime::ASM::bl(fn_IPOut);
/* 8046FBCC 0046C9CC  7C 74 1B 79 */ mr. context->r20 , context->r3
/*8046FBD0 0046C9D0*/ PPC::Runtime::ASM::bge(.L_8046FC28);
/*8046FBD4 0046C9D4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8046FBD8 0046C9D8*/ PPC::Runtime::ASM::beq(.L_8046FBE0);
/*8046FBDC 0046C9DC*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8046FBE0, 0x8046FBE0) //this is a jump label
/*8046FBE0 0046C9E0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8046FBE4 0046C9E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r21));
/*8046FBE8 0046C9E8*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r21));
/*8046FBEC 0046C9EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8046FBF0 0046C9F0*/ PPC::Runtime::ASM::ble(.L_8046FC04);
/*8046FBF4 0046C9F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r21));
/*8046FBF8 0046C9F8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046FBFC 0046C9FC*/ PPC::Runtime::ASM::bne(.L_8046FC04);
/*8046FC00 0046CA00*/ PPC::Runtime::ASM::bl(fn_cbForCancelSync3);
RUNTIME_PPC_JUMP_LABEL(.L_8046FC04, 0x8046FC04) //this is a jump label
/*8046FC04 0046CA04*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8046FC08 0046CA08*/ PPC::Runtime::ASM::beq(.L_8046FC5C);
/*8046FC0C 0046CA0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r27));
/*8046FC10 0046CA10*/ PPC::Runtime::ASM::addi(context->r3, context->r27, 0x0);
/*8046FC14 0046CA14*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*8046FC18 0046CA18*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8046FC1C 0046CA1C*/ PPC::Runtime::ASM::addi(context->r5, context->r23, 0x60);
/* 8046FC20 0046CA20  4E 80 00 21 */ blrl
/*8046FC24 0046CA24*/ PPC::Runtime::ASM::b(.L_8046FC5C);
RUNTIME_PPC_JUMP_LABEL(.L_8046FC28, 0x8046FC28) //this is a jump label
/*8046FC28 0046CA28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r21));
/*8046FC2C 0046CA2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8046FC30 0046CA30*/ PPC::Runtime::ASM::beq(.L_8046FC5C);
/*8046FC34 0046CA34*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8046FC38 0046CA38*/ PPC::Runtime::ASM::beq(.L_8046FC40);
/*8046FC3C 0046CA3C*/ PPC::Runtime::ASM::stw(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8046FC40, 0x8046FC40) //this is a jump label
/*8046FC40 0046CA40*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*8046FC44 0046CA44*/ PPC::Runtime::ASM::beq(.L_8046FC5C);
/*8046FC48 0046CA48*/ PPC::Runtime::ASM::addi(context->r12, context->r25, 0x0);
/*8046FC4C 0046CA4C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*8046FC50 0046CA50*/ PPC::Runtime::ASM::addi(context->r3, context->r21, 0x0);
/*8046FC54 0046CA54*/ PPC::Runtime::ASM::addi(context->r4, context->r23, 0x0);
/* 8046FC58 0046CA58  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_8046FC5C, 0x8046FC5C) //this is a jump label
/*8046FC5C 0046CA5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8046FC60 0046CA60*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8046FC64 0046CA64*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
/*8046FC68 0046CA68*/ PPC::Runtime::ASM::b(.L_8046FC84);
RUNTIME_PPC_JUMP_LABEL(.L_8046FC6C, 0x8046FC6C) //this is a jump label
/*8046FC6C 0046CA6C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8046FC70 0046CA70*/ PPC::Runtime::ASM::beq(.L_8046FC78);
/*8046FC74 0046CA74*/ PPC::Runtime::ASM::stw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_8046FC78, 0x8046FC78) //this is a jump label
/*8046FC78 0046CA78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8046FC7C 0046CA7C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8046FC80 0046CA80*/ PPC::Runtime::ASM::mr(context->r3, context->r20);
RUNTIME_PPC_JUMP_LABEL(.L_8046FC84, 0x8046FC84) //this is a jump label
/*8046FC84 0046CA84*/ PPC::Runtime::ASM::lmw(context->r20, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8046FC88 0046CA88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8046FC8C 0046CA8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8046FC90 0046CA90*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8046FC94 0046CA94*/ PPC::Runtime::ASM::blr();
}