//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800E0270.hpp"
#include "fn_800E0270.hpp"
#include "fn_800E2BD0.hpp"
#include "fn_800E2BD0.hpp"
#include "fn_800D7AD0.hpp"
#include "fn_800EA084.hpp"
#include "fn_800F6090.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800DBD6C.hpp"
#include "fn_800DBE18.hpp"
#include "fn_800EA084.hpp"
#include "fn_800F6090.hpp"
#include "fn_killWhispy.hpp"
#include "fn_800DBD6C.hpp"
#include "fn_800DBE18.hpp"



void fn_800FD890(PPC::Runtime::GCContext* context)
{
/*800FD890 000FA690*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*800FD894 000FA694*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FD898 000FA698*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800FD89C 000FA69C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800FD8A0 000FA6A0*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800FD8A4 000FA6A4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800FD8A8 000FA6A8*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*800FD8AC 000FA6AC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800FD8B0 000FA6B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FD8B4 000FA6B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*800FD8B8 000FA6B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800FD8BC 000FA6BC*/ PPC::Runtime::ASM::beq(.L_800FD8D4);
/*800FD8C0 000FA6C0*/ PPC::Runtime::ASM::bge(.L_800FDBC0);
/*800FD8C4 000FA6C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FD8C8 000FA6C8*/ PPC::Runtime::ASM::beq(.L_800FD8D4);
/*800FD8CC 000FA6CC*/ PPC::Runtime::ASM::bge(.L_800FDAB4);
/*800FD8D0 000FA6D0*/ PPC::Runtime::ASM::b(.L_800FDBC0);
RUNTIME_PPC_JUMP_LABEL(.L_800FD8D4, 0x800FD8D4) //this is a jump label
/*800FD8D4 000FA6D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r29));
/*800FD8D8 000FA6D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FD8DC 000FA6DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FD8E0 000FA6E0*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FD8E4 000FA6E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FD8E8 000FA6E8*/ PPC::Runtime::ASM::bne(.L_800FD8F4);
/*800FD8EC 000FA6EC*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FD8F0 000FA6F0*/ PPC::Runtime::ASM::b(.L_800FD944);
RUNTIME_PPC_JUMP_LABEL(.L_800FD8F4, 0x800FD8F4) //this is a jump label
/*800FD8F4 000FA6F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FD8F8 000FA6F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*800FD8FC 000FA6FC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FD900 000FA700*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FD904 000FA704*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*800FD908 000FA708*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800FD90C 000FA70C*/ PPC::Runtime::ASM::bne(.L_800FD924);
/*800FD910 000FA710*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1007 @ Get_MemoryOffset_HighBit);
/*800FD914 000FA714*/ PPC::Runtime::ASM::li(context->r4, 0xeb);
/*800FD918 000FA718*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1007 @ Get_MemoryOffset_LowBit);
/*800FD91C 000FA71C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6260 @ Get_MemoryOffset_SDA21);
/*800FD920 000FA720*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FD924, 0x800FD924) //this is a jump label
/*800FD924 000FA724*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*800FD928 000FA728*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800FD92C 000FA72C*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FD930 000FA730*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800FD934 000FA734*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*800FD938 000FA738*/ PPC::Runtime::ASM::bge(.L_800FD940);
/*800FD93C 000FA73C*/ PPC::Runtime::ASM::b(.L_800FD944);
RUNTIME_PPC_JUMP_LABEL(.L_800FD940, 0x800FD940) //this is a jump label
/*800FD940 000FA740*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FD944, 0x800FD944) //this is a jump label
/*800FD944 000FA744*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*800FD948 000FA748*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FD94C 000FA74C*/ PPC::Runtime::ASM::beq(.L_800FD978);
/*800FD950 000FA750*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800FD954 000FA754*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FD958 000FA758*/ PPC::Runtime::ASM::beq(.L_800FD978);
/*800FD95C 000FA75C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FD960 000FA760*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FD964 000FA764*/ PPC::Runtime::ASM::bl(fn_800E0270);
/*800FD968 000FA768*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800FD96C 000FA76C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FD970 000FA770*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FD974 000FA774*/ PPC::Runtime::ASM::bl(fn_800E0270);
RUNTIME_PPC_JUMP_LABEL(.L_800FD978, 0x800FD978) //this is a jump label
/*800FD978 000FA778*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800FD97C 000FA77C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FD980 000FA780*/ PPC::Runtime::ASM::beq(.L_800FD9AC);
/*800FD984 000FA784*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800FD988 000FA788*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FD98C 000FA78C*/ PPC::Runtime::ASM::beq(.L_800FD9AC);
/*800FD990 000FA790*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FD994 000FA794*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800FD998 000FA798*/ PPC::Runtime::ASM::bl(fn_800E2BD0);
/*800FD99C 000FA79C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800FD9A0 000FA7A0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800FD9A4 000FA7A4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FD9A8 000FA7A8*/ PPC::Runtime::ASM::bl(fn_800E2BD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FD9AC, 0x800FD9AC) //this is a jump label
/*800FD9AC 000FA7AC*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*800FD9B0 000FA7B0*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FD9B4 000FA7B4*/ PPC::Runtime::ASM::mr(context->r24, context->r27);
/*800FD9B8 000FA7B8*/ PPC::Runtime::ASM::mr(context->r23, context->r27);
/*800FD9BC 000FA7BC*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*800FD9C0 000FA7C0*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FD9C4 000FA7C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*800FD9C8 000FA7C8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FD9CC 000FA7CC*/ PPC::Runtime::ASM::b(.L_800FDA0C);
RUNTIME_PPC_JUMP_LABEL(.L_800FD9D0, 0x800FD9D0) //this is a jump label
/*800FD9D0 000FA7D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800FD9D4 000FA7D4*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r24);
/*800FD9D8 000FA7D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800FD9DC 000FA7DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FD9E0 000FA7E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FD9E4 000FA7E4*/ PPC::Runtime::ASM::beq(.L_800FDA00);
/*800FD9E8 000FA7E8*/ PPC::Runtime::ASM::cmpw(context->r25, context->r3);
/*800FD9EC 000FA7EC*/ PPC::Runtime::ASM::bne(.L_800FDA00);
/*800FD9F0 000FA7F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r26));
/*800FD9F4 000FA7F4*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FD9F8 000FA7F8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r23);
/*800FD9FC 000FA7FC*/ PPC::Runtime::ASM::bl(fn_800D7AD0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDA00, 0x800FDA00) //this is a jump label
/*800FDA00 000FA800*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x10);
/*800FDA04 000FA804*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x4);
/*800FDA08 000FA808*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800FDA0C, 0x800FDA0C) //this is a jump label
/*800FDA0C 000FA80C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800FDA10 000FA810*/ PPC::Runtime::ASM::cmpw(context->r27, context->r0);
/*800FDA14 000FA814*/ PPC::Runtime::ASM::blt(.L_800FD9D0);
/*800FDA18 000FA818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*800FDA1C 000FA81C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800FDA20 000FA820*/ PPC::Runtime::ASM::ble(.L_800FDA30);
/*800FDA24 000FA824*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*800FDA28 000FA828*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FDA2C 000FA82C*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FDA30, 0x800FDA30) //this is a jump label
/*800FDA30 000FA830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800FDA34 000FA834*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FDA38 000FA838*/ PPC::Runtime::ASM::beq(.L_800FDA64);
/*800FDA3C 000FA83C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDA40 000FA840*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*800FDA44 000FA844*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*800FDA48 000FA848*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDA4C 000FA84C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDA50 000FA850*/ PPC::Runtime::ASM::bl(fn_800F6090);
/*800FDA54 000FA854*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FDA58 000FA858*/ PPC::Runtime::ASM::bne(.L_800FDA64);
/*800FDA5C 000FA85C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDA60 000FA860*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800FDA64, 0x800FDA64) //this is a jump label
/*800FDA64 000FA864*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800FDA68 000FA868*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*800FDA6C 000FA86C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDA70 000FA870*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FDA74 000FA874*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDA78 000FA878*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FDA7C 000FA87C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDA80 000FA880*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FDA84 000FA884*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FDA88 000FA888*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*800FDA8C 000FA88C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FDA90 000FA890*/ PPC::Runtime::ASM::beq(.L_800FDBC0);
/*800FDA94 000FA894*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDA98 000FA898*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FDA9C 000FA89C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FDAA0 000FA8A0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDAA4 000FA8A4*/ PPC::Runtime::ASM::bl(fn_800DBD6C);
/*800FDAA8 000FA8A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800FDAAC 000FA8AC*/ PPC::Runtime::ASM::bl(fn_800DBE18);
/*800FDAB0 000FA8B0*/ PPC::Runtime::ASM::b(.L_800FDBC0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDAB4, 0x800FDAB4) //this is a jump label
/*800FDAB4 000FA8B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*800FDAB8 000FA8B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800FDABC 000FA8BC*/ PPC::Runtime::ASM::lwz(context->r23, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDAC0 000FA8C0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800FDAC4 000FA8C4*/ PPC::Runtime::ASM::bne(.L_800FDAD0);
/*800FDAC8 000FA8C8*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDACC 000FA8CC*/ PPC::Runtime::ASM::b(.L_800FDB20);
RUNTIME_PPC_JUMP_LABEL(.L_800FDAD0, 0x800FDAD0) //this is a jump label
/*800FDAD0 000FA8D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDAD4 000FA8D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r23));
/*800FDAD8 000FA8D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDADC 000FA8DC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDAE0 000FA8E0*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*800FDAE4 000FA8E4*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*800FDAE8 000FA8E8*/ PPC::Runtime::ASM::bne(.L_800FDB00);
/*800FDAEC 000FA8EC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_1007 @ Get_MemoryOffset_HighBit);
/*800FDAF0 000FA8F0*/ PPC::Runtime::ASM::li(context->r4, 0x150);
/*800FDAF4 000FA8F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_1007 @ Get_MemoryOffset_LowBit);
/*800FDAF8 000FA8F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6260 @ Get_MemoryOffset_SDA21);
/*800FDAFC 000FA8FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800FDB00, 0x800FDB00) //this is a jump label
/*800FDB00 000FA900*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r25));
/*800FDB04 000FA904*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*800FDB08 000FA908*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDB0C 000FA90C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*800FDB10 000FA910*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f31);
/*800FDB14 000FA914*/ PPC::Runtime::ASM::bge(.L_800FDB1C);
/*800FDB18 000FA918*/ PPC::Runtime::ASM::b(.L_800FDB20);
RUNTIME_PPC_JUMP_LABEL(.L_800FDB1C, 0x800FDB1C) //this is a jump label
/*800FDB1C 000FA91C*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_800FDB20, 0x800FDB20) //this is a jump label
/*800FDB20 000FA920*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x11c, context->r29));
/*800FDB24 000FA924*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800FDB28 000FA928*/ PPC::Runtime::ASM::ble(.L_800FDB38);
/*800FDB2C 000FA92C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x118);
/*800FDB30 000FA930*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800FDB34 000FA934*/ PPC::Runtime::ASM::bl(fn_800EA084);
RUNTIME_PPC_JUMP_LABEL(.L_800FDB38, 0x800FDB38) //this is a jump label
/*800FDB38 000FA938*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800FDB3C 000FA93C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r29));
/*800FDB40 000FA940*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*800FDB44 000FA944*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*800FDB48 000FA948*/ PPC::Runtime::ASM::beq(.L_800FDB74);
/*800FDB4C 000FA94C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDB50 000FA950*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800FDB54 000FA954*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r23));
/*800FDB58 000FA958*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*800FDB5C 000FA95C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800FDB60 000FA960*/ PPC::Runtime::ASM::bl(fn_800F6090);
/*800FDB64 000FA964*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*800FDB68 000FA968*/ PPC::Runtime::ASM::bne(.L_800FDB74);
/*800FDB6C 000FA96C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDB70 000FA970*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_800FDB74, 0x800FDB74) //this is a jump label
/*800FDB74 000FA974*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*800FDB78 000FA978*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*800FDB7C 000FA97C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDB80 000FA980*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800FDB84 000FA984*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDB88 000FA988*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*800FDB8C 000FA98C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805DF918 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDB90 000FA990*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FDB94 000FA994*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FDB98 000FA998*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
/*800FDB9C 000FA99C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800FDBA0 000FA9A0*/ PPC::Runtime::ASM::beq(.L_800FDBC0);
/*800FDBA4 000FA9A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDBA8 000FA9A8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800FDBAC 000FA9AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FDBB0 000FA9B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DF91C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FDBB4 000FA9B4*/ PPC::Runtime::ASM::bl(fn_800DBD6C);
/*800FDBB8 000FA9B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800FDBBC 000FA9BC*/ PPC::Runtime::ASM::bl(fn_800DBE18);
RUNTIME_PPC_JUMP_LABEL(.L_800FDBC0, 0x800FDBC0) //this is a jump label
/*800FDBC0 000FA9C0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*800FDBC4 000FA9C4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*800FDBC8 000FA9C8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*800FDBCC 000FA9CC*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*800FDBD0 000FA9D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*800FDBD4 000FA9D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FDBD8 000FA9D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*800FDBDC 000FA9DC*/ PPC::Runtime::ASM::blr();
}