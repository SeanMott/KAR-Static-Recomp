//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80319BDC.hpp"
#include "fn_802D1408.hpp"
#include "fn_802CD8F0.hpp"



void fn_802EE958(PPC::Runtime::GCContext* context)
{
/*802EE958 002EB758*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xe0, context->r1));
/*802EE95C 002EB75C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802EE960 002EB760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*802EE964 002EB764*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802EE968 002EB768*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*802EE96C 002EB76C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*802EE970 002EB770*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*802EE974 002EB774*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*802EE978 002EB778*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*802EE97C 002EB77C*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802EE980 002EB780*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*802EE984 002EB784*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802EE988 002EB788*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802EE98C 002EB78C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802EE990 002EB790*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802EE994 002EB794*/ PPC::Runtime::ASM::fmr(context->f28, context->f1);
/*802EE998 002EB798*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802EE99C 002EB79C*/ PPC::Runtime::ASM::fmr(context->f29, context->f2);
/*802EE9A0 002EB7A0*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*802EE9A4 002EB7A4*/ PPC::Runtime::ASM::fmr(context->f31, context->f3);
/*802EE9A8 002EB7A8*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*802EE9AC 002EB7AC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802EE9B0 002EB7B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x50);
/*802EE9B4 002EB7B4*/ PPC::Runtime::ASM::bl(fn_80319BDC);
/*802EE9B8 002EB7B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802EE9BC 002EB7BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E39C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EE9C0 002EB7C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802EE9C4 002EB7C4*/ PPC::Runtime::ASM::ble(.L_802EEB8C);
/*802EE9C8 002EB7C8*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802EE9CC 002EB7CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*802EE9D0 002EB7D0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f30);
/*802EE9D4 002EB7D4*/ PPC::Runtime::ASM::ble(.L_802EE9F8);
/*802EE9D8 002EB7D8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EE9DC 002EB7DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802EE9E0 002EB7E0*/ PPC::Runtime::ASM::li(context->r5, Routem_StruckPackHandle_RandomStructPack_Pair @ Get_MemoryOffset_SDA21);
/*802EE9E4 002EB7E4*/ PPC::Runtime::ASM::li(context->r6, Routeem_StructPack_Handle @ Get_MemoryOffset_SDA21);
/*802EE9E8 002EB7E8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802EE9EC 002EB7EC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802EE9F0 002EB7F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802EE9F4 002EB7F4*/ PPC::Runtime::ASM::fadds(context->f30, context->f30, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_802EE9F8, 0x802EE9F8) //this is a jump label
/*802EE9F8 002EB7F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r28));
/*802EE9FC 002EB7FC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f30, context->f0);
/*802EEA00 002EB800*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f29);
/*802EEA04 002EB804*/ PPC::Runtime::ASM::bge(.L_802EEB8C);
/*802EEA08 002EB808*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f28);
/*802EEA0C 002EB80C*/ PPC::Runtime::ASM::ble(.L_802EEB8C);
/*802EEA10 002EB810*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802EEA14 002EB814*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802EEA18 002EB818*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802EEA1C 002EB81C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802EEA20 002EB820*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802EEA24 002EB824*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802EEA28 002EB828*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802EEA2C 002EB82C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802EEA30 002EB830*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802EEA34 002EB834*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802EEA38 002EB838*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802EEA3C 002EB83C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*802EEA40 002EB840*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802EEA44 002EB844*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802EEA48 002EB848*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802EEA4C 002EB84C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802EEA50 002EB850*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802EEA54 002EB854*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802EEA58 002EB858*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E39C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EEA5C 002EB85C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802EEA60 002EB860*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802EEA64 002EB864*/ PPC::Runtime::ASM::beq(.L_802EEA74);
/*802EEA68 002EB868*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*802EEA6C 002EB86C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802EEA70 002EB870*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
RUNTIME_PPC_JUMP_LABEL(.L_802EEA74, 0x802EEA74) //this is a jump label
/*802EEA74 002EB874*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*802EEA78 002EB878*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802EEA7C 002EB87C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802EEA80 002EB880*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9760 @ Get_MemoryOffset_SDA21);
/*802EEA84 002EB884*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802EEA88 002EB888*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9758 @ Get_MemoryOffset_SDA21);
/*802EEA8C 002EB88C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802EEA90 002EB890*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802EEA94 002EB894*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/*802EEA98 002EB898*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802EEA9C 002EB89C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802EEAA0 002EB8A0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EEAA4 002EB8A4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*802EEAA8 002EB8A8*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802EEAAC 002EB8AC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802EEAB0 002EB8B0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802EEAB4 002EB8B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802EEAB8 002EB8B8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802EEABC 002EB8BC*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802EEAC0 002EB8C0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802EEAC4 002EB8C4*/ PPC::Runtime::ASM::bl(fn_802D1408);
/*802EEAC8 002EB8C8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E3A68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EEACC 002EB8CC*/ PPC::Runtime::ASM::fmul(context->f0, context->f0, context->f31);
/*802EEAD0 002EB8D0*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*802EEAD4 002EB8D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802EEAD8 002EB8D8*/ PPC::Runtime::ASM::bge(.L_802EEB8C);
/*802EEADC 002EB8DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r1));
/*802EEAE0 002EB8E0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802EEAE4 002EB8E4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EEAE8 002EB8E8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9760 @ Get_MemoryOffset_SDA21);
/*802EEAEC 002EB8EC*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9758 @ Get_MemoryOffset_SDA21);
/*802EEAF0 002EB8F0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802EEAF4 002EB8F4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802EEAF8 002EB8F8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*802EEAFC 002EB8FC*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802EEB00 002EB900*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E39C4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802EEB04 002EB904*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*802EEB08 002EB908*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*802EEB0C 002EB90C*/ PPC::Runtime::ASM::bl(fn_802CD8F0);
/* 802EEB10 002EB910  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*802EEB14 002EB914*/ PPC::Runtime::ASM::bne(.L_802EEB8C);
/*802EEB18 002EB918*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802EEB1C 002EB91C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802EEB20 002EB920*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*802EEB24 002EB924*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*802EEB28 002EB928*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*802EEB2C 002EB92C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802EEB30 002EB930*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802EEB34 002EB934*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802EEB38 002EB938*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802EEB3C 002EB93C*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802EEB40 002EB940*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802EEB44 002EB944*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802EEB48 002EB948*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802EEB4C 002EB94C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802EEB50 002EB950*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802EEB54 002EB954*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802EEB58 002EB958*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802EEB5C 002EB95C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802EEB60 002EB960*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802EEB64 002EB964*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*802EEB68 002EB968*/ PPC::Runtime::ASM::ble(.L_802EEB8C);
/*802EEB6C 002EB96C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x50);
/*802EEB70 002EB970*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802EEB74 002EB974*/ PPC::Runtime::ASM::beq(.L_802EEB84);
/*802EEB78 002EB978*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802EEB7C 002EB97C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802EEB80 002EB980*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802EEB84, 0x802EEB84) //this is a jump label
/*802EEB84 002EB984*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802EEB88 002EB988*/ PPC::Runtime::ASM::b(.L_802EEBA4);
RUNTIME_PPC_JUMP_LABEL(.L_802EEB8C, 0x802EEB8C) //this is a jump label
/*802EEB8C 002EB98C*/ PPC::Runtime::ASM::addic.(context->r0, context->r1, 0x50);
/*802EEB90 002EB990*/ PPC::Runtime::ASM::beq(.L_802EEBA0);
/*802EEB94 002EB994*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C4B00 @ Get_MemoryOffset_HighBit);
/*802EEB98 002EB998*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804C4B00 @ Get_MemoryOffset_LowBit);
/*802EEB9C 002EB99C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802EEBA0, 0x802EEBA0) //this is a jump label
/*802EEBA0 002EB9A0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802EEBA4, 0x802EEBA4) //this is a jump label
/*802EEBA4 002EB9A4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r1)0, context->qr0);
/*802EEBA8 002EB9A8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r1));
/*802EEBAC 002EB9AC*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r1)0, context->qr0);
/*802EEBB0 002EB9B0*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r1));
/*802EEBB4 002EB9B4*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r1)0, context->qr0);
/*802EEBB8 002EB9B8*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0, context->r1));
/*802EEBBC 002EB9BC*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*802EEBC0 002EB9C0*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802EEBC4 002EB9C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r1));
/*802EEBC8 002EB9C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1));
/*802EEBCC 002EB9CC*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r1));
/*802EEBD0 002EB9D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r1));
/*802EEBD4 002EB9D4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802EEBD8 002EB9D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802EEBDC 002EB9DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xe0);
/*802EEBE0 002EB9E0*/ PPC::Runtime::ASM::blr();
}