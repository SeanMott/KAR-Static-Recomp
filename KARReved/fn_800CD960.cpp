//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80236C40.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_80236B38.hpp"
#include "fn_8022CB74.hpp"
#include "fn_80236C40.hpp"
#include "fn_abilityTimer_Plasma_removeEffect.hpp"
#include "fn_80236B9C.hpp"



void fn_800CD960(PPC::Runtime::GCContext* context)
{
/*800CD960 000CA760*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800CD964 000CA764*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CD968 000CA768*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CD96C 000CA76C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CD970 000CA770*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CD974 000CA774*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800CD978 000CA778*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r3));
/*800CD97C 000CA77C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 800CD980 000CA780  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*800CD984 000CA784*/ PPC::Runtime::ASM::beq(.L_800CDC8C);
/*800CD988 000CA788*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*800CD98C 000CA78C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0xd0);
/*800CD990 000CA790*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r5));
/*800CD994 000CA794*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 25);
/*800CD998 000CA798*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*800CD99C 000CA79C*/ PPC::Runtime::ASM::bne(.L_800CDA84);
/*800CD9A0 000CA7A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CD9A4 000CA7A4*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800CD9A8 000CA7A8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CD9AC 000CA7AC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800CD9B0 000CA7B0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CD9B4 000CA7B4*/ PPC::Runtime::ASM::ble(.L_800CD9EC);
RUNTIME_PPC_JUMP_LABEL(.L_800CD9B8, 0x800CD9B8) //this is a jump label
/*800CD9B8 000CA7B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800CD9BC 000CA7BC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800CD9C0 000CA7C0*/ PPC::Runtime::ASM::bne(.L_800CD9E0);
/*800CD9C4 000CA7C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*800CD9C8 000CA7C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CD9CC 000CA7CC*/ PPC::Runtime::ASM::beq(.L_800CD9E0);
/*800CD9D0 000CA7D0*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 3);
/*800CD9D4 000CA7D4*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*800CD9D8 000CA7D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800CD9DC 000CA7DC*/ PPC::Runtime::ASM::b(.L_800CD9F0);
RUNTIME_PPC_JUMP_LABEL(.L_800CD9E0, 0x800CD9E0) //this is a jump label
/*800CD9E0 000CA7E0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*800CD9E4 000CA7E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*800CD9E8 000CA7E8*/ PPC::Runtime::ASM::bdnz(.L_800CD9B8);
RUNTIME_PPC_JUMP_LABEL(.L_800CD9EC, 0x800CD9EC) //this is a jump label
/*800CD9EC 000CA7EC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800CD9F0, 0x800CD9F0) //this is a jump label
/*800CD9F0 000CA7F0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CD9F4 000CA7F4*/ PPC::Runtime::ASM::beq(.L_800CDA84);
/*800CD9F8 000CA7F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800CD9FC 000CA7FC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CDA00 000CA800*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800CDA04 000CA804*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*800CDA08 000CA808*/ PPC::Runtime::ASM::xor(context->r3, context->r4, context->r3);
/*800CDA0C 000CA80C*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*800CDA10 000CA810*/ PPC::Runtime::ASM::bne(.L_800CDA44);
/*800CDA14 000CA814*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*800CDA18 000CA818*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800CDA1C 000CA81C*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5676);
/*800CDA20 000CA820*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CDA24 000CA824*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*800CDA28 000CA828*/ PPC::Runtime::ASM::li(context->r6, 0x12c);
/*800CDA2C 000CA82C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800CDA30 000CA830*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*800CDA34 000CA834*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800CDA38 000CA838*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDA3C 000CA83C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800CDA40 000CA840*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800CDA44, 0x800CDA44) //this is a jump label
/*800CDA44 000CA844*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/* 800CDA48 000CA848  54 00 EF BF */ extrwi. context->r0 , context->r0 , 2 , 27
/*800CDA4C 000CA84C*/ PPC::Runtime::ASM::bne(.L_800CDA5C);
/*800CDA50 000CA850*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDA54 000CA854*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDA58 000CA858*/ PPC::Runtime::ASM::b(.L_800CDAD8);
RUNTIME_PPC_JUMP_LABEL(.L_800CDA5C, 0x800CDA5C) //this is a jump label
/*800CDA5C 000CA85C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDA60 000CA860*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDA64 000CA864*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF564 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDA68 000CA868*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*800CDA6C 000CA86C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDA70 000CA870*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDA74 000CA874*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800CDA78 000CA878*/ PPC::Runtime::ASM::ble(.L_800CDAD8);
/*800CDA7C 000CA87C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDA80 000CA880*/ PPC::Runtime::ASM::b(.L_800CDAD8);
RUNTIME_PPC_JUMP_LABEL(.L_800CDA84, 0x800CDA84) //this is a jump label
/*800CDA84 000CA884*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800CDA88 000CA888*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CDA8C 000CA88C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800CDA90 000CA890*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*800CDA94 000CA894*/ PPC::Runtime::ASM::xor(context->r3, context->r4, context->r3);
/*800CDA98 000CA898*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*800CDA9C 000CA89C*/ PPC::Runtime::ASM::beq(.L_800CDAD8);
/*800CDAA0 000CA8A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDAA4 000CA8A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF568 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDAA8 000CA8A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDAAC 000CA8AC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*800CDAB0 000CA8B0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDAB4 000CA8B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDAB8 000CA8B8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800CDABC 000CA8BC*/ PPC::Runtime::ASM::bge(.L_800CDAD8);
/*800CDAC0 000CA8C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800CDAC4 000CA8C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800CDAC8 000CA8C8*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
/*800CDACC 000CA8CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CDAD0 000CA8D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800CDAD4 000CA8D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800CDAD8, 0x800CDAD8) //this is a jump label
/*800CDAD8 000CA8D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*800CDADC 000CA8DC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800CDAE0 000CA8E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*800CDAE4 000CA8E4*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*800CDAE8 000CA8E8*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*800CDAEC 000CA8EC*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*800CDAF0 000CA8F0*/ PPC::Runtime::ASM::beq(.L_800CDAFC);
/*800CDAF4 000CA8F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*800CDAF8 000CA8F8*/ PPC::Runtime::ASM::bl(fn_80236B38);
RUNTIME_PPC_JUMP_LABEL(.L_800CDAFC, 0x800CDAFC) //this is a jump label
/*800CDAFC 000CA8FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r30));
/*800CDB00 000CA900*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r30));
/*800CDB04 000CA904*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800CDB08 000CA908*/ PPC::Runtime::ASM::addi(context->r31, context->r30, 0xd0);
/*800CDB0C 000CA90C*/ PPC::Runtime::ASM::beq(.L_800CDB1C);
/*800CDB10 000CA910*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa6, context->r3));
/*800CDB14 000CA914*/ PPC::Runtime::ASM::bl(fn_8022CB74);
/*800CDB18 000CA918*/ PPC::Runtime::ASM::b(.L_800CDB20);
RUNTIME_PPC_JUMP_LABEL(.L_800CDB1C, 0x800CDB1C) //this is a jump label
/*800CDB1C 000CA91C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800CDB20, 0x800CDB20) //this is a jump label
/*800CDB20 000CA920*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*800CDB24 000CA924*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 25);
/*800CDB28 000CA928*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*800CDB2C 000CA92C*/ PPC::Runtime::ASM::bne(.L_800CDC14);
/*800CDB30 000CA930*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*800CDB34 000CA934*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800CDB38 000CA938*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800CDB3C 000CA93C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*800CDB40 000CA940*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800CDB44 000CA944*/ PPC::Runtime::ASM::ble(.L_800CDB7C);
RUNTIME_PPC_JUMP_LABEL(.L_800CDB48, 0x800CDB48) //this is a jump label
/*800CDB48 000CA948*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*800CDB4C 000CA94C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x7);
/*800CDB50 000CA950*/ PPC::Runtime::ASM::bne(.L_800CDB70);
/*800CDB54 000CA954*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*800CDB58 000CA958*/ PPC::Runtime::ASM::cmplw(context->r0, context->r3);
/*800CDB5C 000CA95C*/ PPC::Runtime::ASM::beq(.L_800CDB70);
/*800CDB60 000CA960*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*800CDB64 000CA964*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*800CDB68 000CA968*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*800CDB6C 000CA96C*/ PPC::Runtime::ASM::b(.L_800CDB80);
RUNTIME_PPC_JUMP_LABEL(.L_800CDB70, 0x800CDB70) //this is a jump label
/*800CDB70 000CA970*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*800CDB74 000CA974*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*800CDB78 000CA978*/ PPC::Runtime::ASM::bdnz(.L_800CDB48);
RUNTIME_PPC_JUMP_LABEL(.L_800CDB7C, 0x800CDB7C) //this is a jump label
/*800CDB7C 000CA97C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800CDB80, 0x800CDB80) //this is a jump label
/*800CDB80 000CA980*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800CDB84 000CA984*/ PPC::Runtime::ASM::beq(.L_800CDC14);
/*800CDB88 000CA988*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800CDB8C 000CA98C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CDB90 000CA990*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800CDB94 000CA994*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*800CDB98 000CA998*/ PPC::Runtime::ASM::xor(context->r3, context->r4, context->r3);
/*800CDB9C 000CA99C*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*800CDBA0 000CA9A0*/ PPC::Runtime::ASM::bne(.L_800CDBD4);
/*800CDBA4 000CA9A4*/ PPC::Runtime::ASM::lis(context->r3, 0x4);
/*800CDBA8 000CA9A8*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*800CDBAC 000CA9AC*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x5657);
/*800CDBB0 000CA9B0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CDBB4 000CA9B4*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*800CDBB8 000CA9B8*/ PPC::Runtime::ASM::li(context->r6, 0x12c);
/*800CDBBC 000CA9BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800CDBC0 000CA9C0*/ PPC::Runtime::ASM::bl(fn_80236C40);
/*800CDBC4 000CA9C4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800CDBC8 000CA9C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDBCC 000CA9CC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800CDBD0 000CA9D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800CDBD4, 0x800CDBD4) //this is a jump label
/*800CDBD4 000CA9D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/* 800CDBD8 000CA9D8  54 00 EF BF */ extrwi. context->r0 , context->r0 , 2 , 27
/*800CDBDC 000CA9DC*/ PPC::Runtime::ASM::bne(.L_800CDBEC);
/*800CDBE0 000CA9E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF56C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDBE4 000CA9E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDBE8 000CA9E8*/ PPC::Runtime::ASM::b(.L_800CDC68);
RUNTIME_PPC_JUMP_LABEL(.L_800CDBEC, 0x800CDBEC) //this is a jump label
/*800CDBEC 000CA9EC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDBF0 000CA9F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDBF4 000CA9F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF56C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDBF8 000CA9F8*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*800CDBFC 000CA9FC*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC00 000CAA00*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC04 000CAA04*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800CDC08 000CAA08*/ PPC::Runtime::ASM::ble(.L_800CDC68);
/*800CDC0C 000CAA0C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC10 000CAA10*/ PPC::Runtime::ASM::b(.L_800CDC68);
RUNTIME_PPC_JUMP_LABEL(.L_800CDC14, 0x800CDC14) //this is a jump label
/*800CDC14 000CAA14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800CDC18 000CAA18*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800CDC1C 000CAA1C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800CDC20 000CAA20*/ PPC::Runtime::ASM::xor(context->r0, context->r0, context->r3);
/*800CDC24 000CAA24*/ PPC::Runtime::ASM::xor(context->r3, context->r4, context->r3);
/*800CDC28 000CAA28*/ PPC::Runtime::ASM::or.(context->r0, context->r3, context->r0);
/*800CDC2C 000CAA2C*/ PPC::Runtime::ASM::beq(.L_800CDC68);
/*800CDC30 000CAA30*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC34 000CAA34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF570 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDC38 000CAA38*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CDC3C 000CAA3C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f2, context->f1);
/*800CDC40 000CAA40*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC44 000CAA44*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC48 000CAA48*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*800CDC4C 000CAA4C*/ PPC::Runtime::ASM::bge(.L_800CDC68);
/*800CDC50 000CAA50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800CDC54 000CAA54*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800CDC58 000CAA58*/ PPC::Runtime::ASM::bl(fn_abilityTimer_Plasma_removeEffect);
/*800CDC5C 000CAA5C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800CDC60 000CAA60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800CDC64 000CAA64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800CDC68, 0x800CDC68) //this is a jump label
/*800CDC68 000CAA68*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*800CDC6C 000CAA6C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800CDC70 000CAA70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*800CDC74 000CAA74*/ PPC::Runtime::ASM::xor(context->r0, context->r3, context->r5);
/*800CDC78 000CAA78*/ PPC::Runtime::ASM::xor(context->r5, context->r4, context->r5);
/*800CDC7C 000CAA7C*/ PPC::Runtime::ASM::or.(context->r0, context->r5, context->r0);
/*800CDC80 000CAA80*/ PPC::Runtime::ASM::beq(.L_800CDC8C);
/*800CDC84 000CAA84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*800CDC88 000CAA88*/ PPC::Runtime::ASM::bl(fn_80236B9C);
RUNTIME_PPC_JUMP_LABEL(.L_800CDC8C, 0x800CDC8C) //this is a jump label
/*800CDC8C 000CAA8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800CDC90 000CAA90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800CDC94 000CAA94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800CDC98 000CAA98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CDC9C 000CAA9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800CDCA0 000CAAA0*/ PPC::Runtime::ASM::blr();
}