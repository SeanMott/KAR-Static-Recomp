//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80379784.hpp"
#include "fn_8030D510.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_80379784.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8005E108.hpp"
#include "fn_8034D1F8.hpp"



void fn_8036B9A4(PPC::Runtime::GCContext* context)
{
/*8036B9A4 003687A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x80, context->r1));
/*8036B9A8 003687A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036B9AC 003687AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8036B9B0 003687B0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8036B9B4 003687B4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8036B9B8 003687B8*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8036B9BC 003687BC*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8036B9C0 003687C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8036B9C4 003687C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8036B9C8 003687C8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8036B9CC 003687CC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8036B9D0 003687D0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10a, context->r3));
/*8036B9D4 003687D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8036B9D8 003687D8*/ PPC::Runtime::ASM::bne(.L_8036B9F0);
/*8036B9DC 003687DC*/ PPC::Runtime::ASM::lis(context->r4, 0x7);
/*8036B9E0 003687E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb8);
/*8036B9E4 003687E4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1e);
/*8036B9E8 003687E8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8036B9EC 003687EC*/ PPC::Runtime::ASM::bl(fn_80379784);
RUNTIME_PPC_JUMP_LABEL(.L_8036B9F0, 0x8036B9F0) //this is a jump label
/*8036B9F0 003687F0*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8036B9F4 003687F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8036B9F8 003687F8*/ PPC::Runtime::ASM::bne(.L_8036BCD0);
/*8036B9FC 003687FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BA00 00368800*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036BA04 00368804*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB770 @ Get_MemoryOffset_SDA21);
/*8036BA08 00368808*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB768 @ Get_MemoryOffset_SDA21);
/*8036BA0C 0036880C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036BA10 00368810*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8036BA14 00368814*/ PPC::Runtime::ASM::bl(fn_8030D510);
/*8036BA18 00368818*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8036BA1C 0036881C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8036BA20 00368820*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BA24 00368824*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4840 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BA28 00368828*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f0);
/*8036BA2C 0036882C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8036BA30 00368830*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f2, context->f1, context->f0);
/*8036BA34 00368834*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8036BA38 00368838*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8036BA3C 0036883C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8036BA40 00368840*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BA44 00368844*/ PPC::Runtime::ASM::bctrl();
/*8036BA48 00368848*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8036BA4C 0036884C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8036BA50 00368850*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*8036BA54 00368854*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8036BA58 00368858*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BA5C 0036885C*/ PPC::Runtime::ASM::bctrl();
/*8036BA60 00368860*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BA64 00368864*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10a, context->r31));
/*8036BA68 00368868*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8036BA6C 0036886C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036BA70 00368870*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BA74 00368874*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8036BA78 00368878*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a4, context->r3));
/*8036BA7C 0036887C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036BA80 00368880*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8036BA84 00368884*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*8036BA88 00368888*/ PPC::Runtime::ASM::ble(.L_8036BD38);
/*8036BA8C 0036888C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BA90 00368890*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036BA94 00368894*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7E8 @ Get_MemoryOffset_SDA21);
/*8036BA98 00368898*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB7E0 @ Get_MemoryOffset_SDA21);
/*8036BA9C 0036889C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036BAA0 003688A0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8036BAA4 003688A4*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8036BAA8 003688A8*/ PPC::Runtime::ASM::b(.L_8036BCC4);
RUNTIME_PPC_JUMP_LABEL(.L_8036BAAC, 0x8036BAAC) //this is a jump label
/*8036BAAC 003688AC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036BAB0 003688B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036BAB4 003688B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r12));
/*8036BAB8 003688B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BABC 003688BC*/ PPC::Runtime::ASM::bctrl();
/* 8036BAC0 003688C0  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8036BAC4 003688C4*/ PPC::Runtime::ASM::beq(.L_8036BCAC);
/*8036BAC8 003688C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8036BACC 003688CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8036BAD0 003688D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8036BAD4 003688D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BAD8 003688D8*/ PPC::Runtime::ASM::bctrl();
/*8036BADC 003688DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036BAE0 003688E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8036BAE4 003688E4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036BAE8 003688E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r12));
/*8036BAEC 003688EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BAF0 003688F0*/ PPC::Runtime::ASM::bctrl();
/*8036BAF4 003688F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036BAF8 003688F8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*8036BAFC 003688FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036BB00 00368900*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8036BB04 00368904*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036BB08 00368908*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8036BB0C 0036890C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x28);
/*8036BB10 00368910*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036BB14 00368914*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8036BB18 00368918*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*8036BB1C 0036891C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036BB20 00368920*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x34);
/*8036BB24 00368924*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036BB28 00368928*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8036BB2C 0036892C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036BB30 00368930*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8036BB34 00368934*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8036BB38 00368938*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8036BB3C 0036893C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8036BB40 00368940*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BB44 00368944*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x49c, context->r3));
/*8036BB48 00368948*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8036BB4C 0036894C*/ PPC::Runtime::ASM::bge(.L_8036BCAC);
/*8036BB50 00368950*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa8);
/*8036BB54 00368954*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8036BB58 00368958*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8036BB5C 0036895C*/ PPC::Runtime::ASM::bl(fn_8038D158);
/*8036BB60 00368960*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8036BB64 00368964*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8036BB68 00368968*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BB6C 0036896C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8036BB70 00368970*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x84);
/*8036BB74 00368974*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r31));
/*8036BB78 00368978*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a0, context->r4));
/*8036BB7C 0036897C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8036BB80 00368980*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BB84 00368984*/ PPC::Runtime::ASM::bctrl();
/*8036BB88 00368988*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BB8C 0036898C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b0, context->r3));
/*8036BB90 00368990*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8036BB94 00368994*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa2, context->r31));
/*8036BB98 00368998*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BB9C 0036899C*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a8, context->r3));
/*8036BBA0 003689A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BBA4 003689A4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*8036BBA8 003689A8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*8036BBAC 003689AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E481C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BBB0 003689B0*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*8036BBB4 003689B4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*8036BBB8 003689B8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4818 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BBBC 003689BC*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*8036BBC0 003689C0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f31);
/*8036BBC4 003689C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4814 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BBC8 003689C8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8036BBCC 003689CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f30, context->f0);
/*8036BBD0 003689D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036BBD4 003689D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036BBD8 003689D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036BBDC 003689DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036BBE0 003689E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r31));
/*8036BBE4 003689E4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BBE8 003689E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b8, context->r3));
/*8036BBEC 003689EC*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8036BBF0 003689F0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8036BBF4 003689F4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BBF8 003689F8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4b4, context->r3));
/*8036BBFC 003689FC*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8036BC00 00368A00*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*8036BC04 00368A04*/ PPC::Runtime::ASM::lis(context->r4, 0x7);
/*8036BC08 00368A08*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8036BC0C 00368A0C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb8);
/*8036BC10 00368A10*/ PPC::Runtime::ASM::sth(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa6, context->r31));
/*8036BC14 00368A14*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1f);
/*8036BC18 00368A18*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8036BC1C 00368A1C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
/*8036BC20 00368A20*/ PPC::Runtime::ASM::bl(fn_80379784);
/*8036BC24 00368A24*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BC28 00368A28*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036BC2C 00368A2C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB800 @ Get_MemoryOffset_SDA21);
/*8036BC30 00368A30*/ PPC::Runtime::ASM::li(context->r6, lbl_805DB7F8 @ Get_MemoryOffset_SDA21);
/*8036BC34 00368A34*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8036BC38 00368A38*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8036BC3C 00368A3C*/ PPC::Runtime::ASM::bl(fn_80384F44);
/*8036BC40 00368A40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8036BC44 00368A44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8036BC48 00368A48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8036BC4C 00368A4C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BC50 00368A50*/ PPC::Runtime::ASM::bctrl();
/*8036BC54 00368A54*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8036BC58 00368A58*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036BC5C 00368A5C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8036BC60 00368A60*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8036BC64 00368A64*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10c);
/*8036BC68 00368A68*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036BC6C 00368A6C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036BC70 00368A70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036BC74 00368A74*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8036BC78 00368A78*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036BC7C 00368A7C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x10c);
/*8036BC80 00368A80*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036BC84 00368A84*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0x10);
/*8036BC88 00368A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036BC8C 00368A8C*/ PPC::Runtime::ASM::li(context->r4, 0x61);
/*8036BC90 00368A90*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036BC94 00368A94*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8036BC98 00368A98*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8036BC9C 00368A9C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8036BCA0 00368AA0*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036BCA4 00368AA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036BCA8 00368AA8*/ PPC::Runtime::ASM::bl(fn_8037B028);
RUNTIME_PPC_JUMP_LABEL(.L_8036BCAC, 0x8036BCAC) //this is a jump label
/*8036BCAC 00368AAC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036BCB0 00368AB0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8036BCB4 00368AB4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8036BCB8 00368AB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BCBC 00368ABC*/ PPC::Runtime::ASM::bctrl();
/*8036BCC0 00368AC0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8036BCC4, 0x8036BCC4) //this is a jump label
/*8036BCC4 00368AC4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8036BCC8 00368AC8*/ PPC::Runtime::ASM::bne(.L_8036BAAC);
/*8036BCCC 00368ACC*/ PPC::Runtime::ASM::b(.L_8036BD38);
RUNTIME_PPC_JUMP_LABEL(.L_8036BCD0, 0x8036BCD0) //this is a jump label
/*8036BCD0 00368AD0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8036BCD4 00368AD4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 16);
/*8036BCD8 00368AD8*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8036BCDC 00368ADC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xb4);
/*8036BCE0 00368AE0*/ PPC::Runtime::ASM::ble(.L_8036BD04);
/*8036BCE4 00368AE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*8036BCE8 00368AE8*/ PPC::Runtime::ASM::bl(fn_8005E108);
/*8036BCEC 00368AEC*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8036BCF0 00368AF0*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/* 8036BCF4 00368AF4  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*8036BCF8 00368AF8*/ PPC::Runtime::ASM::bne(.L_8036BD04);
/*8036BCFC 00368AFC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8036BD00 00368B00*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036BD04, 0x8036BD04) //this is a jump label
/*8036BD04 00368B04*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036BD08 00368B08*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*8036BD0C 00368B0C*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8036BD10 00368B10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036BD14 00368B14*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036BD18 00368B18*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8036BD1C 00368B1C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4bc, context->r3));
/*8036BD20 00368B20*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8036BD24 00368B24*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*8036BD28 00368B28*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f2);
/*8036BD2C 00368B2C*/ PPC::Runtime::ASM::bne(.L_8036BD38);
/*8036BD30 00368B30*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8036BD34 00368B34*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036BD38, 0x8036BD38) //this is a jump label
/*8036BD38 00368B38*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10a, context->r31));
/*8036BD3C 00368B3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8036BD40 00368B40*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8036BD44 00368B44*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10a, context->r31));
/*8036BD48 00368B48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8036BD4C 00368B4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8036BD50 00368B50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BD54 00368B54*/ PPC::Runtime::ASM::bctrl();
/*8036BD58 00368B58*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8036BD5C 00368B5C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa8);
/*8036BD60 00368B60*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8036BD64 00368B64*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8036BD68 00368B68  7C 7D 1B 79 */ mr. context->r29 , context->r3
/*8036BD6C 00368B6C*/ PPC::Runtime::ASM::bne(.L_8036BD80);
/*8036BD70 00368B70*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB7C8 @ Get_MemoryOffset_SDA21);
/*8036BD74 00368B74*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8036BD78 00368B78*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7D0 @ Get_MemoryOffset_SDA21);
/*8036BD7C 00368B7C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036BD80, 0x8036BD80) //this is a jump label
/*8036BD80 00368B80*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8036BD84 00368B84*/ PPC::Runtime::ASM::bne(.L_8036BD9C);
/*8036BD88 00368B88*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F0328 @ Get_MemoryOffset_HighBit);
/*8036BD8C 00368B8C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB7C8 @ Get_MemoryOffset_SDA21);
/*8036BD90 00368B90*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_804F0328 @ Get_MemoryOffset_LowBit);
/*8036BD94 00368B94*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*8036BD98 00368B98*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036BD9C, 0x8036BD9C) //this is a jump label
/*8036BD9C 00368B9C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8036BDA0 00368BA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*8036BDA4 00368BA4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8036BDA8 00368BA8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*8036BDAC 00368BAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8036BDB0 00368BB0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r29));
/*8036BDB4 00368BB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8036BDB8 00368BB8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8036BDBC 00368BBC*/ PPC::Runtime::ASM::bne(.L_8036BE08);
/*8036BDC0 00368BC0*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8036BDC4 00368BC4*/ PPC::Runtime::ASM::beq(.L_8036BE08);
/*8036BDC8 00368BC8*/ PPC::Runtime::ASM::bne(.L_8036BDDC);
/*8036BDCC 00368BCC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DB7C8 @ Get_MemoryOffset_SDA21);
/*8036BDD0 00368BD0*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8036BDD4 00368BD4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DB7D0 @ Get_MemoryOffset_SDA21);
/*8036BDD8 00368BD8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8036BDDC, 0x8036BDDC) //this is a jump label
/*8036BDDC 00368BDC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8036BDE0 00368BE0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8036BDE4 00368BE4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8036BDE8 00368BE8*/ PPC::Runtime::ASM::bne(.L_8036BDF8);
/*8036BDEC 00368BEC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8036BDF0 00368BF0*/ PPC::Runtime::ASM::beq(.L_8036BDF8);
/*8036BDF4 00368BF4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8036BDF8, 0x8036BDF8) //this is a jump label
/* 8036BDF8 00368BF8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8036BDFC 00368BFC*/ PPC::Runtime::ASM::bne(.L_8036BE08);
/*8036BE00 00368C00*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8036BE04 00368C04*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8036BE08, 0x8036BE08) //this is a jump label
/*8036BE08 00368C08*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa8);
/*8036BE0C 00368C0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r31));
/*8036BE10 00368C10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8036BE14 00368C14*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036BE18 00368C18*/ PPC::Runtime::ASM::bctrl();
/*8036BE1C 00368C1C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1)0, context->qr0);
/*8036BE20 00368C20*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*8036BE24 00368C24*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*8036BE28 00368C28*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8036BE2C 00368C2C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8036BE30 00368C30*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8036BE34 00368C34*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*8036BE38 00368C38*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8036BE3C 00368C3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036BE40 00368C40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x80);
/*8036BE44 00368C44*/ PPC::Runtime::ASM::blr();
}