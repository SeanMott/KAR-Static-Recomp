//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D1824.hpp"
#include "fn_802D1824.hpp"



void fn_802CEA10(PPC::Runtime::GCContext* context)
{
/*802CEA10 002CB810*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb0, context->r1));
/*802CEA14 002CB814*/ PPC::Runtime::ASM::mflr(context->r0);
/*802CEA18 002CB818*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802CEA1C 002CB81C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802CEA20 002CB820*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*802CEA24 002CB824*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802CEA28 002CB828*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*802CEA2C 002CB82C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802CEA30 002CB830*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802CEA34 002CB834*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802CEA38 002CB838*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CEA3C 002CB83C*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802CEA40 002CB840*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*802CEA44 002CB844*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CEA48 002CB848*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8ED0 @ Get_MemoryOffset_SDA21);
/*802CEA4C 002CB84C*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EC0 @ Get_MemoryOffset_SDA21);
/*802CEA50 002CB850*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CEA54 002CB854*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CEA58 002CB858*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CEA5C 002CB85C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8ED8 @ Get_MemoryOffset_SDA21);
/*802CEA60 002CB860*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8ED0 @ Get_MemoryOffset_SDA21);
/*802CEA64 002CB864*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CEA68 002CB868*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CEA6C 002CB86C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CEA70 002CB870*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802CEA74 002CB874*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CEA78 002CB878*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8EB0 @ Get_MemoryOffset_SDA21);
/*802CEA7C 002CB87C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1));
/*802CEA80 002CB880*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EA8 @ Get_MemoryOffset_SDA21);
/*802CEA84 002CB884*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CEA88 002CB888*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*802CEA8C 002CB88C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802CEA90 002CB890*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802CEA94 002CB894*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r1));
/*802CEA98 002CB898*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*802CEA9C 002CB89C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r1));
/*802CEAA0 002CB8A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r1));
/*802CEAA4 002CB8A4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r1));
/*802CEAA8 002CB8A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r1));
/*802CEAAC 002CB8AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r1));
/*802CEAB0 002CB8B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x74, context->r1));
/*802CEAB4 002CB8B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802CEAB8 002CB8B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802CEABC 002CB8BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802CEAC0 002CB8C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802CEAC4 002CB8C4*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802CEAC8 002CB8C8*/ PPC::Runtime::ASM::divwu(context->r0, context->r29, context->r3);
/*802CEACC 002CB8CC*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*802CEAD0 002CB8D0*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r29);
/*802CEAD4 002CB8D4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802CEAD8 002CB8D8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r8, context->r0);
/*802CEADC 002CB8DC*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CEAE0 002CB8E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x5c);
/*802CEAE4 002CB8E4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x50);
/*802CEAE8 002CB8E8*/ PPC::Runtime::ASM::bl(fn_802D1824);
/*802CEAEC 002CB8EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*802CEAF0 002CB8F0*/ PPC::Runtime::ASM::addi(context->r8, context->r29, 0x1);
/*802CEAF4 002CB8F4*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*802CEAF8 002CB8F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802CEAFC 002CB8FC*/ PPC::Runtime::ASM::divwu(context->r0, context->r8, context->r3);
/*802CEB00 002CB900*/ PPC::Runtime::ASM::li(context->r5, lbl_805D8EB0 @ Get_MemoryOffset_SDA21);
/*802CEB04 002CB904*/ PPC::Runtime::ASM::li(context->r6, lbl_805D8EA8 @ Get_MemoryOffset_SDA21);
/*802CEB08 002CB908*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802CEB0C 002CB90C*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*802CEB10 002CB910*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r8);
/*802CEB14 002CB914*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802CEB18 002CB918*/ PPC::Runtime::ASM::lwzx(context->r3, context->r9, context->r0);
/*802CEB1C 002CB91C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802CEB20 002CB920*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x68);
/*802CEB24 002CB924*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x74);
/*802CEB28 002CB928*/ PPC::Runtime::ASM::bl(fn_802D1824);
/*802CEB2C 002CB92C*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E3690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CEB30 002CB930*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0x50);
/*802CEB34 002CB934*/ PPC::Runtime::ASM::lfs(context->f31, STRUCT_FLOAT_COUNT_1805E36B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802CEB38 002CB938*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802CEB3C, 0x802CEB3C) //this is a jump label
/*802CEB3C 002CB93C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x1);
/*802CEB40 002CB940*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x20);
/*802CEB44 002CB944*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*802CEB48 002CB948*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x50);
/*802CEB4C 002CB94C*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*802CEB50 002CB950*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802CEB54 002CB954*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802CEB58 002CB958*/ PPC::Runtime::ASM::add(context->r6, context->r6, context->r0);
/*802CEB5C 002CB95C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*802CEB60 002CB960*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*802CEB64 002CB964*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*802CEB68 002CB968*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802CEB6C 002CB96C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802CEB70 002CB970*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802CEB74 002CB974*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802CEB78 002CB978*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802CEB7C 002CB97C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x38);
/*802CEB80 002CB980*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802CEB84 002CB984*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802CEB88 002CB988*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802CEB8C 002CB98C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*802CEB90 002CB990*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802CEB94 002CB994*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802CEB98 002CB998*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802CEB9C 002CB99C*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802CEBA0 002CB9A0*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802CEBA4 002CB9A4*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802CEBA8 002CB9A8*/ PPC::Runtime::ASM::bl(fn_PSVECCrossProduct);
/*802CEBAC 002CB9AC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802CEBB0 002CB9B0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802CEBB4 002CB9B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802CEBB8 002CB9B8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802CEBBC 002CB9BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802CEBC0 002CB9C0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802CEBC4 002CB9C4*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802CEBC8 002CB9C8*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*802CEBCC 002CB9CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*802CEBD0 002CB9D0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802CEBD4 002CB9D4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802CEBD8 002CB9D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802CEBDC 002CB9DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802CEBE0 002CB9E0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802CEBE4 002CB9E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802CEBE8 002CB9E8*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802CEBEC 002CB9EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802CEBF0 002CB9F0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802CEBF4 002CB9F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802CEBF8 002CB9F8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x44);
/*802CEBFC 002CB9FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802CEC00 002CBA00*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802CEC04 002CBA04*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802CEC08 002CBA08*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802CEC0C 002CBA0C*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*802CEC10 002CBA10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f30);
/*802CEC14 002CBA14*/ PPC::Runtime::ASM::blt(.L_802CEC28);
/*802CEC18 002CBA18*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*802CEC1C 002CBA1C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*802CEC20 002CBA20*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x4);
/*802CEC24 002CBA24*/ PPC::Runtime::ASM::blt(.L_802CEB3C);
RUNTIME_PPC_JUMP_LABEL(.L_802CEC28, 0x802CEC28) //this is a jump label
/*802CEC28 002CBA28*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x4);
/*802CEC2C 002CBA2C*/ PPC::Runtime::ASM::bne(.L_802CEC38);
/*802CEC30 002CBA30*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802CEC34 002CBA34*/ PPC::Runtime::ASM::b(.L_802CEC3C);
RUNTIME_PPC_JUMP_LABEL(.L_802CEC38, 0x802CEC38) //this is a jump label
/*802CEC38 002CBA38*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802CEC3C, 0x802CEC3C) //this is a jump label
/*802CEC3C 002CBA3C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r1)0, context->qr0);
/*802CEC40 002CBA40*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r1));
/*802CEC44 002CBA44*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*802CEC48 002CBA48*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*802CEC4C 002CBA4C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r1));
/*802CEC50 002CBA50*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r1));
/*802CEC54 002CBA54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4, context->r1));
/*802CEC58 002CBA58*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r1));
/*802CEC5C 002CBA5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802CEC60 002CBA60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xb0);
/*802CEC64 002CBA64*/ PPC::Runtime::ASM::blr();
}