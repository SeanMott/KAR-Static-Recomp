//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800D2FB4.hpp"
#include "fn_802433C4.hpp"
#include "fn_801140E4.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8007ABE0.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8007ABE0.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8027B588.hpp"
#include "fn_8027B5A8.hpp"
#include "fn_8027B568.hpp"
#include "fn_80079C04.hpp"
#include "fn_8027B988.hpp"
#include "fn_800F7870.hpp"



void fn_8010B9F0(PPC::Runtime::GCContext* context)
{
/*8010B9F0 001087F0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x110, context->r1));
/*8010B9F4 001087F4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010B9F8 001087F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r1));
/*8010B9FC 001087FC*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*8010BA00 00108800*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*8010BA04 00108804*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*8010BA08 00108808*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1)0, context->qr0);
/*8010BA0C 0010880C*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*8010BA10 00108810*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*8010BA14 00108814*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r1));
/*8010BA18 00108818*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*8010BA1C 0010881C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8010BA20 00108820*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8010BA24 00108824*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*8010BA28 00108828*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8010BA2C 0010882C*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010BA30 00108830*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8010BA34 00108834*/ PPC::Runtime::ASM::bne(.L_8010BA48);
/*8010BA38 00108838*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6338 @ Get_MemoryOffset_SDA21);
/*8010BA3C 0010883C*/ PPC::Runtime::ASM::li(context->r4, 0x47c);
/*8010BA40 00108840*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6340 @ Get_MemoryOffset_SDA21);
/*8010BA44 00108844*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010BA48, 0x8010BA48) //this is a jump label
/*8010BA48 00108848*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010BA4C 0010884C*/ PPC::Runtime::ASM::beq(.L_8010BA90);
/*8010BA50 00108850*/ PPC::Runtime::ASM::bne(.L_8010BA64);
/*8010BA54 00108854*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6338 @ Get_MemoryOffset_SDA21);
/*8010BA58 00108858*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8010BA5C 0010885C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6340 @ Get_MemoryOffset_SDA21);
/*8010BA60 00108860*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010BA64, 0x8010BA64) //this is a jump label
/*8010BA64 00108864*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8010BA68 00108868*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010BA6C 0010886C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8010BA70 00108870*/ PPC::Runtime::ASM::bne(.L_8010BA80);
/*8010BA74 00108874*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8010BA78 00108878*/ PPC::Runtime::ASM::beq(.L_8010BA80);
/*8010BA7C 0010887C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010BA80, 0x8010BA80) //this is a jump label
/*8010BA80 00108880*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010BA84 00108884*/ PPC::Runtime::ASM::beq(.L_8010BA90);
/*8010BA88 00108888*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BA8C 0010888C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetupMatrixSub);
RUNTIME_PPC_JUMP_LABEL(.L_8010BA90, 0x8010BA90) //this is a jump label
/*8010BA90 00108890*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*8010BA94 00108894*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x60);
/*8010BA98 00108898*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*8010BA9C 0010889C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r29));
/*8010BAA0 001088A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*8010BAA4 001088A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r29));
/*8010BAA8 001088A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*8010BAAC 001088AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8010BAB0 001088B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*8010BAB4 001088B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r29));
/*8010BAB8 001088B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8010BABC 001088BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r29));
/*8010BAC0 001088C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*8010BAC4 001088C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*8010BAC8 001088C8*/ PPC::Runtime::ASM::bl(fn_800D2FB4);
/*8010BACC 001088CC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x60);
/*8010BAD0 001088D0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x6c);
/*8010BAD4 001088D4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x78);
/*8010BAD8 001088D8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x84);
/*8010BADC 001088DC*/ PPC::Runtime::ASM::bl(fn_802433C4);
/*8010BAE0 001088E0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8010BAE4 001088E4*/ PPC::Runtime::ASM::bne(.L_8010BAF8);
/*8010BAE8 001088E8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6338 @ Get_MemoryOffset_SDA21);
/*8010BAEC 001088EC*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*8010BAF0 001088F0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6340 @ Get_MemoryOffset_SDA21);
/*8010BAF4 001088F4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010BAF8, 0x8010BAF8) //this is a jump label
/*8010BAF8 001088F8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x84);
/*8010BAFC 001088FC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*8010BB00 00108900*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*8010BB04 00108904*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8010BB08 00108908*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8010BB0C 0010890C*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*8010BB10 00108910*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8010BB14 00108914*/ PPC::Runtime::ASM::beq(.L_8010BB58);
/*8010BB18 00108918*/ PPC::Runtime::ASM::bne(.L_8010BB2C);
/*8010BB1C 0010891C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6338 @ Get_MemoryOffset_SDA21);
/*8010BB20 00108920*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8010BB24 00108924*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6340 @ Get_MemoryOffset_SDA21);
/*8010BB28 00108928*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010BB2C, 0x8010BB2C) //this is a jump label
/*8010BB2C 0010892C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8010BB30 00108930*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010BB34 00108934*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8010BB38 00108938*/ PPC::Runtime::ASM::bne(.L_8010BB48);
/*8010BB3C 0010893C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8010BB40 00108940*/ PPC::Runtime::ASM::beq(.L_8010BB48);
/*8010BB44 00108944*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8010BB48, 0x8010BB48) //this is a jump label
/*8010BB48 00108948*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8010BB4C 0010894C*/ PPC::Runtime::ASM::bne(.L_8010BB58);
/*8010BB50 00108950*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8010BB54 00108954*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8010BB58, 0x8010BB58) //this is a jump label
/*8010BB58 00108958*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x60);
/*8010BB5C 0010895C*/ PPC::Runtime::ASM::bl(fn_801140E4);
/*8010BB60 00108960*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010BB64 00108964*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x48);
/*8010BB68 00108968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8010BB6C 0010896C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010BB70 00108970*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8010BB74 00108974*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x10);
/*8010BB78 00108978*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010BB7C 0010897C*/ PPC::Runtime::ASM::lwzx(context->r29, context->r3, context->r0);
/*8010BB80 00108980*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BB84 00108984*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8010BB88 00108988*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BB8C 0010898C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x1c);
/*8010BB90 00108990*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x54);
/*8010BB94 00108994*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8010BB98 00108998*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r31));
/*8010BB9C 0010899C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x48);
/*8010BBA0 001089A0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x54);
/*8010BBA4 001089A4*/ PPC::Runtime::ASM::bl(fn_8007ABE0);
/*8010BBA8 001089A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BBAC 001089AC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x78);
/*8010BBB0 001089B0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x48);
/*8010BBB4 001089B4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8010BBB8 001089B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BBBC 001089BC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x84);
/*8010BBC0 001089C0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x54);
/*8010BBC4 001089C4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8010BBC8 001089C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*8010BBCC 001089CC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x48);
/*8010BBD0 001089D0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x54);
/*8010BBD4 001089D4*/ PPC::Runtime::ASM::bl(fn_8007ABE0);
/*8010BBD8 001089D8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010BBDC 001089DC*/ PPC::Runtime::ASM::lis(context->r4, 0x4330);
/*8010BBE0 001089E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x130, context->r31));
/*8010BBE4 001089E4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8010BBE8 001089E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r31));
/*8010BBEC 001089EC*/ PPC::Runtime::ASM::slwi(context->r5, context->r3, 5);
/*8010BBF0 001089F0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8010BBF4 001089F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x134, context->r31));
/*8010BBF8 001089F8*/ PPC::Runtime::ASM::slwi(context->r7, context->r0, 2);
/*8010BBFC 001089FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8010BC00 00108A00*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8010BC04 00108A04*/ PPC::Runtime::ASM::add(context->r30, context->r0, context->r5);
/*8010BC08 00108A08*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*8010BC0C 00108A0C*/ PPC::Runtime::ASM::add(context->r5, context->r30, context->r7);
/*8010BC10 00108A10*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DFAD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010BC14 00108A14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8010BC18 00108A18*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010BC1C 00108A1C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8010BC20 00108A20*/ PPC::Runtime::ASM::xoris(context->r3, context->r3, 0x8000);
/*8010BC24 00108A24*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8010BC28 00108A28*/ PPC::Runtime::ASM::xoris(context->r0, context->r0, 0x8000);
/*8010BC2C 00108A2C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r1));
/*8010BC30 00108A30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8010BC34 00108A34*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1));
/*8010BC38 00108A38*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8010BC3C 00108A3C*/ PPC::Runtime::ASM::fsubs(context->f30, context->f1, context->f2);
/*8010BC40 00108A40*/ PPC::Runtime::ASM::fsubs(context->f29, context->f0, context->f2);
/*8010BC44 00108A44*/ PPC::Runtime::ASM::bne(.L_8010BC58);
/*8010BC48 00108A48*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6348 @ Get_MemoryOffset_SDA21);
/*8010BC4C 00108A4C*/ PPC::Runtime::ASM::li(context->r4, 0xab);
/*8010BC50 00108A50*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6350 @ Get_MemoryOffset_SDA21);
/*8010BC54 00108A54*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010BC58, 0x8010BC58) //this is a jump label
/*8010BC58 00108A58*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8010BC5C 00108A5C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8010BC60 00108A60*/ PPC::Runtime::ASM::bne(.L_8010BC74);
/*8010BC64 00108A64*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6348 @ Get_MemoryOffset_SDA21);
/*8010BC68 00108A68*/ PPC::Runtime::ASM::li(context->r4, 0x95);
/*8010BC6C 00108A6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6350 @ Get_MemoryOffset_SDA21);
/*8010BC70 00108A70*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8010BC74, 0x8010BC74) //this is a jump label
/*8010BC74 00108A74*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*8010BC78 00108A78*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8010BC7C 00108A7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8010BC80 00108A80*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x18);
/*8010BC84 00108A84*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f31);
/*8010BC88 00108A88*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010BC8C 00108A8C*/ PPC::Runtime::ASM::xoris(context->r4, context->r4, 0x8000);
/*8010BC90 00108A90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8010BC94 00108A94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8010BC98 00108A98*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r1));
/*8010BC9C 00108A9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8010BCA0 00108AA0*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xe0);
/*8010BCA4 00108AA4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805DFAD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010BCA8 00108AA8*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8010BCAC 00108AAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*8010BCB0 00108AB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r31));
/*8010BCB4 00108AB4*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*8010BCB8 00108AB8*/ PPC::Runtime::ASM::lwzx(context->r29, context->r3, context->r0);
/*8010BCBC 00108ABC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*8010BCC0 00108AC0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BCC4 00108AC4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8010BCC8 00108AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8010BCCC 00108ACC*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0xec);
/*8010BCD0 00108AD0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x24);
/*8010BCD4 00108AD4*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*8010BCD8 00108AD8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFAC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010BCDC 00108ADC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x30);
/*8010BCE0 00108AE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r30));
/*8010BCE4 00108AE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFAC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010BCE8 00108AE8*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f0);
/*8010BCEC 00108AEC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFAC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010BCF0 00108AF0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8010BCF4 00108AF4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8010BCF8 00108AF8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8010BCFC 00108AFC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8010BD00 00108B00*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8010BD04 00108B04*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8010BD08 00108B08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r31));
/*8010BD0C 00108B0C*/ PPC::Runtime::ASM::bl(fn_8027B588);
/*8010BD10 00108B10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r31));
/*8010BD14 00108B14*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x18);
/*8010BD18 00108B18*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x24);
/*8010BD1C 00108B1C*/ PPC::Runtime::ASM::bl(fn_8027B5A8);
/*8010BD20 00108B20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r31));
/*8010BD24 00108B24*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x3c);
/*8010BD28 00108B28*/ PPC::Runtime::ASM::bl(fn_8027B568);
/*8010BD2C 00108B2C*/ PPC::Runtime::ASM::bl(fn_8040F89C);
/*8010BD30 00108B30*/ PPC::Runtime::ASM::fsubs(context->f1, context->f31, context->f30);
/*8010BD34 00108B34*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E62F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8010BD38 00108B38*/ PPC::Runtime::ASM::fsubs(context->f0, context->f29, context->f30);
/*8010BD3C 00108B3C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8010BD40 00108B40*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8010BD44 00108B44*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*8010BD48 00108B48*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*8010BD4C 00108B4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010BD50 00108B50*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x10);
/*8010BD54 00108B54*/ PPC::Runtime::ASM::bl(fn_80079C04);
/*8010BD58 00108B58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8010BD5C 00108B5C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8010BD60 00108B60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8010BD64 00108B64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010BD68 00108B68*/ PPC::Runtime::ASM::bl(fn_8027B988);
/*8010BD6C 00108B6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*8010BD70 00108B70*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8010BD74 00108B74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8010BD78 00108B78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8010BD7C 00108B7C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8010BD80 00108B80*/ PPC::Runtime::ASM::bl(fn_800F7870);
/*8010BD84 00108B84*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r1)0, context->qr0);
/*8010BD88 00108B88*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r1));
/*8010BD8C 00108B8C*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r1)0, context->qr0);
/*8010BD90 00108B90*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r1));
/*8010BD94 00108B94*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r1)0, context->qr0);
/*8010BD98 00108B98*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r1));
/*8010BD9C 00108B9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r1));
/*8010BDA0 00108BA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1));
/*8010BDA4 00108BA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x114, context->r1));
/*8010BDA8 00108BA8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r1));
/*8010BDAC 00108BAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010BDB0 00108BB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x110);
/*8010BDB4 00108BB4*/ PPC::Runtime::ASM::blr();
}