//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80190848.hpp"
#include "fn_8005457C.hpp"
#include "fn_80203FCC.hpp"
#include "fn_80062CA4.hpp"
#include "fn_80064C18.hpp"
#include "fn_80062ECC.hpp"



void fn_801AD998(PPC::Runtime::GCContext* context)
{
/*801AD998 001AA798*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x70, context->r1));
/*801AD99C 001AA79C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AD9A0 001AA7A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801AD9A4 001AA7A4*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801AD9A8 001AA7A8*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801AD9AC 001AA7AC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801AD9B0 001AA7B0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801AD9B4 001AA7B4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801AD9B8 001AA7B8*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801AD9BC 001AA7BC*/ PPC::Runtime::ASM::bl(fn_80190848);
/*801AD9C0 001AA7C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r29));
/*801AD9C4 001AA7C4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*801AD9C8 001AA7C8*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x2c);
/*801AD9CC 001AA7CC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*801AD9D0 001AA7D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r3));
/*801AD9D4 001AA7D4*/ PPC::Runtime::ASM::bl(fn_8005457C);
/*801AD9D8 001AA7D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*801AD9DC 001AA7DC*/ PPC::Runtime::ASM::mr(context->r30, context->r29);
/*801AD9E0 001AA7E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*801AD9E4 001AA7E4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801AD9E8 001AA7E8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1438 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801AD9EC 001AA7EC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x978, context->r29));
/*801AD9F0 001AA7F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x97c, context->r29));
/*801AD9F4 001AA7F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*801AD9F8 001AA7F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x980, context->r29));
/*801AD9FC 001AA7FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*801ADA00 001AA800*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801ADA04 001AA804*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x984, context->r29));
/*801ADA08 001AA808*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x988, context->r29));
/*801ADA0C 001AA80C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801ADA10 001AA810*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98c, context->r29));
/*801ADA14 001AA814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801ADA18 001AA818*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801ADA1C 001AA81C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x990, context->r29));
/*801ADA20 001AA820*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r29));
/*801ADA24 001AA824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*801ADA28 001AA828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
/*801ADA2C 001AA82C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADA30 001AA830*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADA34 001AA834*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADA38 001AA838*/ PPC::Runtime::ASM::b(.L_801ADAAC);
RUNTIME_PPC_JUMP_LABEL(.L_801ADA3C, 0x801ADA3C) //this is a jump label
/*801ADA3C 001AA83C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8f0, context->r30));
/*801ADA40 001AA840*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801ADA44 001AA844*/ PPC::Runtime::ASM::beq(.L_801ADAA4);
/*801ADA48 001AA848*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801ADA4C 001AA84C*/ PPC::Runtime::ASM::bl(fn_80203FCC);
/*801ADA50 001AA850*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801ADA54 001AA854*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801ADA58 001AA858*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r29));
/*801ADA5C 001AA85C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*801ADA60 001AA860*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801ADA64 001AA864*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r29));
/*801ADA68 001AA868*/ PPC::Runtime::ASM::fsubs(context->f4, context->f3, context->f0);
/*801ADA6C 001AA86C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADA70 001AA870*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801ADA74 001AA874*/ PPC::Runtime::ASM::fsubs(context->f5, context->f2, context->f1);
/*801ADA78 001AA878*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r29));
/*801ADA7C 001AA87C*/ PPC::Runtime::ASM::fadds(context->f1, context->f0, context->f4);
/*801ADA80 001AA880*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADA84 001AA884*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*801ADA88 001AA888*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADA8C 001AA88C*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f5);
/*801ADA90 001AA890*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADA94 001AA894*/ PPC::Runtime::ASM::fadds(context->f1, context->f3, context->f2);
/*801ADA98 001AA898*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADA9C 001AA89C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADAA0 001AA8A0*/ PPC::Runtime::ASM::bl(fn_80062CA4);
RUNTIME_PPC_JUMP_LABEL(.L_801ADAA4, 0x801ADAA4) //this is a jump label
/*801ADAA4 001AA8A4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*801ADAA8 001AA8A8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801ADAAC, 0x801ADAAC) //this is a jump label
/*801ADAAC 001AA8AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x918, context->r29));
/*801ADAB0 001AA8B0*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*801ADAB4 001AA8B4*/ PPC::Runtime::ASM::blt(.L_801ADA3C);
/*801ADAB8 001AA8B8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801ADABC 001AA8BC*/ PPC::Runtime::ASM::beq(.L_801ADBF4);
/*801ADAC0 001AA8C0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801ADAC4 001AA8C4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x984);
/*801ADAC8 001AA8C8*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*801ADACC 001AA8CC*/ PPC::Runtime::ASM::bl(fn_80064C18);
/*801ADAD0 001AA8D0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*801ADAD4 001AA8D4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801ADAD8 001AA8D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E143C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ADADC 001AA8DC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADAE0 001AA8E0*/ PPC::Runtime::ASM::fdivs(context->f4, context->f0, context->f1);
/*801ADAE4 001AA8E4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADAE8 001AA8E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADAEC 001AA8EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1438 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ADAF0 001AA8F0*/ PPC::Runtime::ASM::fmuls(context->f5, context->f2, context->f4);
/*801ADAF4 001AA8F4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f4);
/*801ADAF8 001AA8F8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f4);
/*801ADAFC 001AA8FC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*801ADB00 001AA900*/ PPC::Runtime::ASM::stfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADB04 001AA904*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADB08 001AA908*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADB0C 001AA90C*/ PPC::Runtime::ASM::bge(.L_801ADB14);
/*801ADB10 001AA910*/ PPC::Runtime::ASM::fneg(context->f5, context->f5);
RUNTIME_PPC_JUMP_LABEL(.L_801ADB14, 0x801ADB14) //this is a jump label
/*801ADB14 001AA914*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1448 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ADB18 001AA918*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f0);
/*801ADB1C 001AA91C*/ PPC::Runtime::ASM::bge(.L_801ADBF4);
/*801ADB20 001AA920*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r29));
/*801ADB24 001AA924*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x978);
/*801ADB28 001AA928*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E144C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801ADB2C 001AA92C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*801ADB30 001AA930*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r5));
/*801ADB34 001AA934*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f0);
/*801ADB38 001AA938*/ PPC::Runtime::ASM::bl(fn_80062ECC);
/*801ADB3C 001AA93C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x994, context->r29));
/*801ADB40 001AA940*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f31);
/*801ADB44 001AA944*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801ADB48 001AA948*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x990, context->r29));
/*801ADB4C 001AA94C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*801ADB50 001AA950*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801ADB54 001AA954*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r29));
/*801ADB58 001AA958*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801ADB5C 001AA95C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f2, context->f0);
/*801ADB60 001AA960*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*801ADB64 001AA964*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*801ADB68 001AA968*/ PPC::Runtime::ASM::bne(.L_801ADB70);
/*801ADB6C 001AA96C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_801ADB70, 0x801ADB70) //this is a jump label
/*801ADB70 001AA970*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r29));
/*801ADB74 001AA974*/ PPC::Runtime::ASM::fmuls(context->f31, context->f31, context->f0);
/*801ADB78 001AA978*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x310, context->r3));
/*801ADB7C 001AA97C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801ADB80 001AA980*/ PPC::Runtime::ASM::bne(.L_801ADB94);
/*801ADB84 001AA984*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F60 @ Get_MemoryOffset_SDA21);
/*801ADB88 001AA988*/ PPC::Runtime::ASM::li(context->r4, 0x41d);
/*801ADB8C 001AA98C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F68 @ Get_MemoryOffset_SDA21);
/*801ADB90 001AA990*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801ADB94, 0x801ADB94) //this is a jump label
/*801ADB94 001AA994*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801ADB98 001AA998*/ PPC::Runtime::ASM::fadds(context->f0, context->f0, context->f31);
/*801ADB9C 001AA99C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*801ADBA0 001AA9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801ADBA4 001AA9A4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*801ADBA8 001AA9A8*/ PPC::Runtime::ASM::bne(.L_801ADBF4);
/*801ADBAC 001AA9AC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801ADBB0 001AA9B0*/ PPC::Runtime::ASM::beq(.L_801ADBF4);
/*801ADBB4 001AA9B4*/ PPC::Runtime::ASM::bne(.L_801ADBC8);
/*801ADBB8 001AA9B8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6F60 @ Get_MemoryOffset_SDA21);
/*801ADBBC 001AA9BC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*801ADBC0 001AA9C0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F68 @ Get_MemoryOffset_SDA21);
/*801ADBC4 001AA9C4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801ADBC8, 0x801ADBC8) //this is a jump label
/*801ADBC8 001AA9C8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801ADBCC 001AA9CC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801ADBD0 001AA9D0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*801ADBD4 001AA9D4*/ PPC::Runtime::ASM::bne(.L_801ADBE4);
/*801ADBD8 001AA9D8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*801ADBDC 001AA9DC*/ PPC::Runtime::ASM::beq(.L_801ADBE4);
/*801ADBE0 001AA9E0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801ADBE4, 0x801ADBE4) //this is a jump label
/*801ADBE4 001AA9E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801ADBE8 001AA9E8*/ PPC::Runtime::ASM::bne(.L_801ADBF4);
/*801ADBEC 001AA9EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801ADBF0 001AA9F0*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801ADBF4, 0x801ADBF4) //this is a jump label
/*801ADBF4 001AA9F4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1)0, context->qr0);
/*801ADBF8 001AA9F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*801ADBFC 001AA9FC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*801ADC00 001AAA00*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*801ADC04 001AAA04*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*801ADC08 001AAA08*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*801ADC0C 001AAA0C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801ADC10 001AAA10*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x70);
/*801ADC14 001AAA14*/ PPC::Runtime::ASM::blr();
}