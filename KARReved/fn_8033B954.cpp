//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80320208.hpp"
#include "fn_80321160.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379784.hpp"
#include "fn_802891C8.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"
#include "fn_8037B33C.hpp"
#include "fn_8030D510.hpp"
#include "fn_8033E500.hpp"
#include "fn_8037AFD0.hpp"
#include "fn_8037B028.hpp"



void fn_8033B954(PPC::Runtime::GCContext* context)
{
/*8033B954 00338754*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*8033B958 00338758*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033B95C 0033875C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8033B960 00338760*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8033B964 00338764*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*8033B968 00338768*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8033B96C 0033876C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*8033B970 00338770*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8033B974 00338774*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*8033B978 00338778*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8033B97C 0033877C*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8033B980 00338780*/ PPC::Runtime::ASM::stfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8033B984 00338784*/ PPC::Runtime::ASM::psq_st(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8033B988 00338788*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*8033B98C 0033878C*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8033B990 00338790*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8033B994 00338794*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E5C60 @ Get_MemoryOffset_HighBit);
/*8033B998 00338798*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_804E5C60 @ Get_MemoryOffset_LowBit);
/*8033B99C 0033879C*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4);
/*8033B9A0 003387A0*/ PPC::Runtime::ASM::bl(fn_80320208);
/*8033B9A4 003387A4*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x18);
/*8033B9A8 003387A8*/ PPC::Runtime::ASM::bl(fn_80321160);
/*8033B9AC 003387AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc80, context->r31));
/*8033B9B0 003387B0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc84, context->r31));
/*8033B9B4 003387B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc88, context->r31));
/*8033B9B8 003387B8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*8033B9BC 003387BC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*8033B9C0 003387C0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*8033B9C4 003387C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r28));
/*8033B9C8 003387C8*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r28));
/*8033B9CC 003387CC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8033B9D0 003387D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*8033B9D4 003387D4*/ PPC::Runtime::ASM::add(context->r26, context->r27, context->r0);
/*8033B9D8 003387D8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8033B9DC 003387DC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8033B9E0 003387E0*/ PPC::Runtime::ASM::b(.L_8033B9F8);
RUNTIME_PPC_JUMP_LABEL(.L_8033B9E4, 0x8033B9E4) //this is a jump label
/*8033B9E4 003387E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8033B9E8 003387E8*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x48);
/*8033B9EC 003387EC*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*8033B9F0 003387F0*/ PPC::Runtime::ASM::nop();
/*8033B9F4 003387F4*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8033B9F8, 0x8033B9F8) //this is a jump label
/*8033B9F8 003387F8*/ PPC::Runtime::ASM::cmplw(context->r27, context->r26);
/*8033B9FC 003387FC*/ PPC::Runtime::ASM::bne(.L_8033B9E4);
/*8033BA00 00338800*/ PPC::Runtime::ASM::lfs(context->f27, STRUCT_FLOAT_COUNT_1805E43FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BA04 00338804*/ PPC::Runtime::ASM::addi(context->r29, context->r28, 0x6c);
/*8033BA08 00338808*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r28));
/*8033BA0C 0033880C*/ PPC::Runtime::ASM::lfs(context->f28, STRUCT_FLOAT_COUNT_1805E4400 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BA10 00338810*/ PPC::Runtime::ASM::lfs(context->f29, STRUCT_FLOAT_COUNT_1805E4404 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BA14 00338814*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E4408 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BA18 00338818*/ PPC::Runtime::ASM::b(.L_8033BE3C);
RUNTIME_PPC_JUMP_LABEL(.L_8033BA1C, 0x8033BA1C) //this is a jump label
/*8033BA1C 0033881C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*8033BA20 00338820*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8033BA24 00338824*/ PPC::Runtime::ASM::bne(.L_8033BA70);
/*8033BA28 00338828*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*8033BA2C 0033882C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BA30 00338830*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8033BA34 00338834*/ PPC::Runtime::ASM::addi(context->r27, context->r30, 0xe8);
/*8033BA38 00338838*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8033BA3C 0033883C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BA40 00338840*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8033BA44 00338844*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8033BA48 00338848*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8033BA4C 0033884C*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*8033BA50 00338850*/ PPC::Runtime::ASM::li(context->r4, 0x28ac);
/*8033BA54 00338854*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8033BA58 00338858*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033BA5C 0033885C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8033BA60 00338860*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8033BA64 00338864*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8033BA68 00338868*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*8033BA6C 0033886C*/ PPC::Runtime::ASM::b(.L_8033BCC0);
RUNTIME_PPC_JUMP_LABEL(.L_8033BA70, 0x8033BA70) //this is a jump label
/*8033BA70 00338870*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*8033BA74 00338874*/ PPC::Runtime::ASM::bne(.L_8033BAE8);
/*8033BA78 00338878*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8033BA7C 0033887C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BA80 00338880*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033BA84 00338884*/ PPC::Runtime::ASM::bge(.L_8033BCC0);
/*8033BA88 00338888*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8033BA8C 0033888C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8033BA90 00338890*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8033BA94 00338894*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033BA98 00338898*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8033BA9C 0033889C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BAA0 003388A0*/ PPC::Runtime::ASM::bctrl();
/*8033BAA4 003388A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8033BAA8 003388A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BAAC 003388AC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033BAB0 003388B0*/ PPC::Runtime::ASM::ble(.L_8033BADC);
/*8033BAB4 003388B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8033BAB8 003388B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033BABC 003388BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8033BAC0 003388C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BAC4 003388C4*/ PPC::Runtime::ASM::bctrl();
/*8033BAC8 003388C8*/ PPC::Runtime::ASM::lis(context->r4, 0x8);
/*8033BACC 003388CC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8033BAD0 003388D0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x134);
/*8033BAD4 003388D4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x9);
/*8033BAD8 003388D8*/ PPC::Runtime::ASM::bl(fn_80379784);
RUNTIME_PPC_JUMP_LABEL(.L_8033BADC, 0x8033BADC) //this is a jump label
/*8033BADC 003388DC*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8033BAE0 003388E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*8033BAE4 003388E4*/ PPC::Runtime::ASM::b(.L_8033BCC0);
RUNTIME_PPC_JUMP_LABEL(.L_8033BAE8, 0x8033BAE8) //this is a jump label
/*8033BAE8 003388E8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*8033BAEC 003388EC*/ PPC::Runtime::ASM::bne(.L_8033BCAC);
/*8033BAF0 003388F0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BAF4 003388F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BAF8 003388F8*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*8033BAFC 003388FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*8033BB00 00338900*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*8033BB04 00338904*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8033BB08 00338908*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8033BB0C 0033890C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8033BB10 00338910*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*8033BB14 00338914*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8033BB18 00338918*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*8033BB1C 0033891C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8033BB20 00338920*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8033BB24 00338924*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f1);
/*8033BB28 00338928*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f0);
/*8033BB2C 0033892C*/ PPC::Runtime::ASM::fadds(context->f31, context->f1, context->f0);
/*8033BB30 00338930*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f2);
/*8033BB34 00338934*/ PPC::Runtime::ASM::ble(.L_8033BB84);
/*8033BB38 00338938*/ PPC::Runtime::ASM::frsqrte(context->f1, context->f31);
/*8033BB3C 0033893C*/ PPC::Runtime::ASM::lfd(context->f3, STRUCT_DOUBLE_COUNT_1805E43E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BB40 00338940*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E43F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BB44 00338944*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8033BB48 00338948*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8033BB4C 0033894C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*8033BB50 00338950*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8033BB54 00338954*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8033BB58 00338958*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8033BB5C 0033895C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*8033BB60 00338960*/ PPC::Runtime::ASM::fmul(context->f1, context->f1, context->f0);
/*8033BB64 00338964*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f1);
/*8033BB68 00338968*/ PPC::Runtime::ASM::fmul(context->f1, context->f3, context->f1);
/*8033BB6C 0033896C*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f31, context->f0, context->f2);
/*8033BB70 00338970*/ PPC::Runtime::ASM::fmul(context->f0, context->f1, context->f0);
/*8033BB74 00338974*/ PPC::Runtime::ASM::fmul(context->f0, context->f31, context->f0);
/*8033BB78 00338978*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*8033BB7C 0033897C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8033BB80 00338980*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8033BB84, 0x8033BB84) //this is a jump label
/*8033BB84 00338984*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x180, context->r30));
/*8033BB88 00338988*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8033BB8C 0033898C*/ PPC::Runtime::ASM::beq(.L_8033BBA8);
/*8033BB90 00338990*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BB94 00338994*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f0);
/*8033BB98 00338998*/ PPC::Runtime::ASM::bge(.L_8033BBA8);
/*8033BB9C 0033899C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BBA0 003389A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8033BBA4 003389A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8033BBA8, 0x8033BBA8) //this is a jump label
/*8033BBA8 003389A8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x54);
/*8033BBAC 003389AC*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8033BBB0 003389B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BBB4 003389B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033BBB8 003389B8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033BBBC 003389BC*/ PPC::Runtime::ASM::beq(.L_8033BBE8);
/*8033BBC0 003389C0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x54);
/*8033BBC4 003389C4*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8033BBC8 003389C8*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
/*8033BBCC 003389CC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*8033BBD0 003389D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BBD4 003389D4*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8033BBD8 003389D8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8033BBDC 003389DC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x60);
/*8033BBE0 003389E0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x54);
/*8033BBE4 003389E4*/ PPC::Runtime::ASM::bl(fn_802891C8);
RUNTIME_PPC_JUMP_LABEL(.L_8033BBE8, 0x8033BBE8) //this is a jump label
/*8033BBE8 003389E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8033BBEC 003389EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8033BBF0 003389F0*/ PPC::Runtime::ASM::bne(.L_8033BCC0);
/*8033BBF4 003389F4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033BBF8 003389F8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*8033BBFC 003389FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8033BC00 00338A00*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BC04 00338A04*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8033BC08 00338A08*/ PPC::Runtime::ASM::li(context->r4, 0x10);
/*8033BC0C 00338A0C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?);
/*8033BC10 00338A10*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033BC14 00338A14*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8033BC18 00338A18*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x99, context->r30));
/*8033BC1C 00338A1C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033BC20 00338A20*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8033BC24 00338A24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BC28 00338A28*/ PPC::Runtime::ASM::bctrl();
/*8033BC2C 00338A2C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8033BC30 00338A30*/ PPC::Runtime::ASM::addi(context->r26, context->r30, 0x9c);
/*8033BC34 00338A34*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8033BC38 00338A38*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BC3C 00338A3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8033BC40 00338A40*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8033BC44 00338A44*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8033BC48 00338A48*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033BC4C 00338A4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8033BC50 00338A50*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8033BC54 00338A54*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8033BC58 00338A58*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8033BC5C 00338A5C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8033BC60 00338A60*/ PPC::Runtime::ASM::addi(context->r7, context->r1, 0xc);
/*8033BC64 00338A64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*8033BC68 00338A68*/ PPC::Runtime::ASM::li(context->r4, 0x28af);
/*8033BC6C 00338A6C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033BC70 00338A70*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*8033BC74 00338A74*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8033BC78 00338A78*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8033BC7C 00338A7C*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033BC80 00338A80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033BC84 00338A84*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8033BC88 00338A88*/ PPC::Runtime::ASM::li(context->r0, 0x78);
/*8033BC8C 00338A8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BC90 00338A90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8033BC94 00338A94*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8033BC98 00338A98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8033BC9C 00338A9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8033BCA0 00338AA0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8033BCA4 00338AA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*8033BCA8 00338AA8*/ PPC::Runtime::ASM::b(.L_8033BCC0);
RUNTIME_PPC_JUMP_LABEL(.L_8033BCAC, 0x8033BCAC) //this is a jump label
/*8033BCAC 00338AAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
/*8033BCB0 00338AB0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8033BCB4 00338AB4*/ PPC::Runtime::ASM::ble(.L_8033BCC0);
/*8033BCB8 00338AB8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8033BCBC 00338ABC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8033BCC0, 0x8033BCC0) //this is a jump label
/*8033BCC0 00338AC0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x34);
/*8033BCC4 00338AC4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*8033BCC8 00338AC8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f27);
/*8033BCCC 00338ACC*/ PPC::Runtime::ASM::bge(.L_8033BCDC);
/*8033BCD0 00338AD0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xe8);
/*8033BCD4 00338AD4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BCD8 00338AD8*/ PPC::Runtime::ASM::bl(fn_8037B33C);
RUNTIME_PPC_JUMP_LABEL(.L_8033BCDC, 0x8033BCDC) //this is a jump label
/*8033BCDC 00338ADC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033BCE0 00338AE0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BCE4 00338AE4*/ PPC::Runtime::ASM::li(context->r5, lbl_805DACD0 @ Get_MemoryOffset_SDA21);
/*8033BCE8 00338AE8*/ PPC::Runtime::ASM::li(context->r6, lbl_805DACC8 @ Get_MemoryOffset_SDA21);
/*8033BCEC 00338AEC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033BCF0 00338AF0*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8033BCF4 00338AF4*/ PPC::Runtime::ASM::bl(fn_8030D510);
/*8033BCF8 00338AF8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8033BCFC 00338AFC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8033BD00 00338B00*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8033BD04 00338B04*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f29);
/*8033BD08 00338B08*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f28, context->f1, context->f0);
/*8033BD0C 00338B0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8033BD10 00338B10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033BD14 00338B14*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8033BD18 00338B18*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BD1C 00338B1C*/ PPC::Runtime::ASM::bctrl();
/*8033BD20 00338B20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8033BD24 00338B24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f30);
/*8033BD28 00338B28*/ PPC::Runtime::ASM::bge(.L_8033BD34);
/*8033BD2C 00338B2C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033BD30 00338B30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8033BD34, 0x8033BD34) //this is a jump label
/*8033BD34 00338B34*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8033BD38 00338B38*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033BD3C 00338B3C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8033BD40 00338B40*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BD44 00338B44*/ PPC::Runtime::ASM::bctrl();
/*8033BD48 00338B48*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8033BD4C 00338B4C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*8033BD50 00338B50*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BD54 00338B54*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8033BD58 00338B58  7C 7A 1B 79 */ mr. context->r26 , context->r3
/*8033BD5C 00338B5C*/ PPC::Runtime::ASM::bne(.L_8033BD70);
/*8033BD60 00338B60*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033BD64 00338B64*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8033BD68 00338B68*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAE14 @ Get_MemoryOffset_SDA21);
/*8033BD6C 00338B6C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033BD70, 0x8033BD70) //this is a jump label
/*8033BD70 00338B70*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8033BD74 00338B74*/ PPC::Runtime::ASM::bne(.L_8033BD88);
/*8033BD78 00338B78*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xc98);
/*8033BD7C 00338B7C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033BD80 00338B80*/ PPC::Runtime::ASM::li(context->r4, 0x3aa);
/*8033BD84 00338B84*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033BD88, 0x8033BD88) //this is a jump label
/*8033BD88 00338B88*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8033BD8C 00338B8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*8033BD90 00338B90*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8033BD94 00338B94*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r26));
/*8033BD98 00338B98*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8033BD9C 00338B9C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r26));
/*8033BDA0 00338BA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8033BDA4 00338BA4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8033BDA8 00338BA8*/ PPC::Runtime::ASM::bne(.L_8033BDF4);
/*8033BDAC 00338BAC*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*8033BDB0 00338BB0*/ PPC::Runtime::ASM::beq(.L_8033BDF4);
/*8033BDB4 00338BB4*/ PPC::Runtime::ASM::bne(.L_8033BDC8);
/*8033BDB8 00338BB8*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033BDBC 00338BBC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8033BDC0 00338BC0*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAE14 @ Get_MemoryOffset_SDA21);
/*8033BDC4 00338BC4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033BDC8, 0x8033BDC8) //this is a jump label
/*8033BDC8 00338BC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*8033BDCC 00338BCC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8033BDD0 00338BD0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8033BDD4 00338BD4*/ PPC::Runtime::ASM::bne(.L_8033BDE4);
/*8033BDD8 00338BD8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8033BDDC 00338BDC*/ PPC::Runtime::ASM::beq(.L_8033BDE4);
/*8033BDE0 00338BE0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8033BDE4, 0x8033BDE4) //this is a jump label
/* 8033BDE4 00338BE4  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033BDE8 00338BE8*/ PPC::Runtime::ASM::bne(.L_8033BDF4);
/*8033BDEC 00338BEC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8033BDF0 00338BF0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8033BDF4, 0x8033BDF4) //this is a jump label
/*8033BDF4 00338BF4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*8033BDF8 00338BF8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r30));
/*8033BDFC 00338BFC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8033BE00 00338C00*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BE04 00338C04*/ PPC::Runtime::ASM::bctrl();
/*8033BE08 00338C08*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8);
/*8033BE0C 00338C0C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033BE10 00338C10*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*8033BE14 00338C14*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033BE18 00338C18*/ PPC::Runtime::ASM::bctrl();
/*8033BE1C 00338C1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8033BE20 00338C20*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r30));
/*8033BE24 00338C24*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8033BE28 00338C28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r30));
/*8033BE2C 00338C2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8033BE30 00338C30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r30));
/*8033BE34 00338C34*/ PPC::Runtime::ASM::stfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r30));
/*8033BE38 00338C38*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8033BE3C, 0x8033BE3C) //this is a jump label
/*8033BE3C 00338C3C*/ PPC::Runtime::ASM::cmplw(context->r30, context->r29);
/*8033BE40 00338C40*/ PPC::Runtime::ASM::bne(.L_8033BA1C);
/*8033BE44 00338C44*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8c, context->r31));
/*8033BE48 00338C48*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x60);
/*8033BE4C 00338C4C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc90, context->r31));
/*8033BE50 00338C50*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x24);
/*8033BE54 00338C54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc94, context->r31));
/*8033BE58 00338C58*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8033BE5C 00338C5C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033BE60 00338C60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8033BE64 00338C64*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8033BE68 00338C68*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8033BE6C 00338C6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8033BE70 00338C70*/ PPC::Runtime::ASM::bl(fn_8033E500);
/*8033BE74 00338C74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r28));
/*8033BE78 00338C78*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8033BE7C 00338C7C*/ PPC::Runtime::ASM::bne(.L_8033BEAC);
/*8033BE80 00338C80*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r28));
/*8033BE84 00338C84*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x78);
/*8033BE88 00338C88*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033BE8C 00338C8C*/ PPC::Runtime::ASM::bl(fn_8037AFD0);
/*8033BE90 00338C90*/ PPC::Runtime::ASM::mr(context->r6, context->r26);
/*8033BE94 00338C94*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x78);
/*8033BE98 00338C98*/ PPC::Runtime::ASM::li(context->r4, 0x28ce);
/*8033BE9C 00338C9C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8033BEA0 00338CA0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033BEA4 00338CA4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8033BEA8 00338CA8*/ PPC::Runtime::ASM::bl(fn_8037B028);
RUNTIME_PPC_JUMP_LABEL(.L_8033BEAC, 0x8033BEAC) //this is a jump label
/*8033BEAC 00338CAC*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*8033BEB0 00338CB0*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*8033BEB4 00338CB4*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*8033BEB8 00338CB8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*8033BEBC 00338CBC*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*8033BEC0 00338CC0*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*8033BEC4 00338CC4*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*8033BEC8 00338CC8*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*8033BECC 00338CCC*/ PPC::Runtime::ASM::psq_l(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*8033BED0 00338CD0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*8033BED4 00338CD4*/ PPC::Runtime::ASM::lfd(context->f27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*8033BED8 00338CD8*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8033BEDC 00338CDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*8033BEE0 00338CE0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033BEE4 00338CE4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*8033BEE8 00338CE8*/ PPC::Runtime::ASM::blr();
}