//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800D2D90(PPC::Runtime::GCContext* context)
{
/*800D2D90 000CFB90*/ PPC::Runtime::ASM::cmpw(context->r3, context->r4);
/*800D2D94 000CFB94*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D2D98 000CFB98*/ PPC::Runtime::ASM::bne(.L_800D2DA4);
/*800D2D9C 000CFB9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2DA0 000CFBA0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2DA4, 0x800D2DA4) //this is a jump label
/*800D2DA4 000CFBA4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800D2DA8 000CFBA8*/ PPC::Runtime::ASM::ble(.L_800D2DC0);
/*800D2DAC 000CFBAC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*800D2DB0 000CFBB0*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800D2DB4 000CFBB4*/ PPC::Runtime::ASM::bge(.L_800D2DC0);
/*800D2DB8 000CFBB8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D2DBC 000CFBBC*/ PPC::Runtime::ASM::b(.L_800D2DC4);
RUNTIME_PPC_JUMP_LABEL(.L_800D2DC0, 0x800D2DC0) //this is a jump label
/*800D2DC0 000CFBC0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D2DC4, 0x800D2DC4) //this is a jump label
/*800D2DC4 000CFBC4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D2DC8 000CFBC8*/ PPC::Runtime::ASM::beq(.L_800D2E34);
/*800D2DCC 000CFBCC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800D2DD0 000CFBD0*/ PPC::Runtime::ASM::ble(.L_800D2DE8);
/*800D2DD4 000CFBD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*800D2DD8 000CFBD8*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800D2DDC 000CFBDC*/ PPC::Runtime::ASM::bge(.L_800D2DE8);
/*800D2DE0 000CFBE0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D2DE4 000CFBE4*/ PPC::Runtime::ASM::b(.L_800D2DEC);
RUNTIME_PPC_JUMP_LABEL(.L_800D2DE8, 0x800D2DE8) //this is a jump label
/*800D2DE8 000CFBE8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D2DEC, 0x800D2DEC) //this is a jump label
/*800D2DEC 000CFBEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D2DF0 000CFBF0*/ PPC::Runtime::ASM::bne(.L_800D2E2C);
/*800D2DF4 000CFBF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r5));
/*800D2DF8 000CFBF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 6);
/*800D2DFC 000CFBFC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*800D2E00 000CFC00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*800D2E04 000CFC04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*800D2E08 000CFC08*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800D2E0C 000CFC0C*/ PPC::Runtime::ASM::bge(.L_800D2E24);
/*800D2E10 000CFC10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800D2E14 000CFC14*/ PPC::Runtime::ASM::bge(.L_800D2E1C);
/*800D2E18 000CFC18*/ PPC::Runtime::ASM::b(.L_800D2E24);
RUNTIME_PPC_JUMP_LABEL(.L_800D2E1C, 0x800D2E1C) //this is a jump label
/*800D2E1C 000CFC1C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2E20 000CFC20*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2E24, 0x800D2E24) //this is a jump label
/*800D2E24 000CFC24*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2E28 000CFC28*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2E2C, 0x800D2E2C) //this is a jump label
/*800D2E2C 000CFC2C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2E30 000CFC30*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2E34, 0x800D2E34) //this is a jump label
/*800D2E34 000CFC34*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*800D2E38 000CFC38*/ PPC::Runtime::ASM::ble(.L_800D2E50);
/*800D2E3C 000CFC3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*800D2E40 000CFC40*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800D2E44 000CFC44*/ PPC::Runtime::ASM::bge(.L_800D2E50);
/*800D2E48 000CFC48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D2E4C 000CFC4C*/ PPC::Runtime::ASM::b(.L_800D2E54);
RUNTIME_PPC_JUMP_LABEL(.L_800D2E50, 0x800D2E50) //this is a jump label
/*800D2E50 000CFC50*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D2E54, 0x800D2E54) //this is a jump label
/*800D2E54 000CFC54*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D2E58 000CFC58*/ PPC::Runtime::ASM::beq(.L_800D2EC4);
/*800D2E5C 000CFC5C*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800D2E60 000CFC60*/ PPC::Runtime::ASM::ble(.L_800D2E78);
/*800D2E64 000CFC64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*800D2E68 000CFC68*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800D2E6C 000CFC6C*/ PPC::Runtime::ASM::bge(.L_800D2E78);
/*800D2E70 000CFC70*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*800D2E74 000CFC74*/ PPC::Runtime::ASM::b(.L_800D2E7C);
RUNTIME_PPC_JUMP_LABEL(.L_800D2E78, 0x800D2E78) //this is a jump label
/*800D2E78 000CFC78*/ PPC::Runtime::ASM::li(context->r0, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_800D2E7C, 0x800D2E7C) //this is a jump label
/*800D2E7C 000CFC7C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800D2E80 000CFC80*/ PPC::Runtime::ASM::bne(.L_800D2EBC);
/*800D2E84 000CFC84*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r5));
/*800D2E88 000CFC88*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 6);
/*800D2E8C 000CFC8C*/ PPC::Runtime::ASM::add(context->r3, context->r4, context->r0);
/*800D2E90 000CFC90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*800D2E94 000CFC94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r3));
/*800D2E98 000CFC98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*800D2E9C 000CFC9C*/ PPC::Runtime::ASM::bge(.L_800D2EB4);
/*800D2EA0 000CFCA0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*800D2EA4 000CFCA4*/ PPC::Runtime::ASM::bge(.L_800D2EAC);
/*800D2EA8 000CFCA8*/ PPC::Runtime::ASM::b(.L_800D2EB4);
RUNTIME_PPC_JUMP_LABEL(.L_800D2EAC, 0x800D2EAC) //this is a jump label
/*800D2EAC 000CFCAC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2EB0 000CFCB0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2EB4, 0x800D2EB4) //this is a jump label
/*800D2EB4 000CFCB4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2EB8 000CFCB8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2EBC, 0x800D2EBC) //this is a jump label
/*800D2EBC 000CFCBC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2EC0 000CFCC0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2EC4, 0x800D2EC4) //this is a jump label
/*800D2EC4 000CFCC4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r5));
/*800D2EC8 000CFCC8*/ PPC::Runtime::ASM::slwi(context->r8, context->r3, 6);
/*800D2ECC 000CFCCC*/ PPC::Runtime::ASM::slwi(context->r6, context->r4, 6);
/*800D2ED0 000CFCD0*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x38);
/*800D2ED4 000CFCD4*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r8);
/*800D2ED8 000CFCD8*/ PPC::Runtime::ASM::lwzx(context->r5, context->r3, context->r6);
/*800D2EDC 000CFCDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r4));
/*800D2EE0 000CFCE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r5));
/*800D2EE4 000CFCE4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800D2EE8 000CFCE8*/ PPC::Runtime::ASM::beq(.L_800D2EF4);
/*800D2EEC 000CFCEC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2EF0 000CFCF0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2EF4, 0x800D2EF4) //this is a jump label
/*800D2EF4 000CFCF4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*800D2EF8 000CFCF8*/ PPC::Runtime::ASM::beq(.L_800D2F2C);
/*800D2EFC 000CFCFC*/ PPC::Runtime::ASM::bge(.L_800D2F4C);
/*800D2F00 000CFD00*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800D2F04 000CFD04*/ PPC::Runtime::ASM::bge(.L_800D2F0C);
/*800D2F08 000CFD08*/ PPC::Runtime::ASM::b(.L_800D2F4C);
RUNTIME_PPC_JUMP_LABEL(.L_800D2F0C, 0x800D2F0C) //this is a jump label
/*800D2F0C 000CFD0C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r4));
/*800D2F10 000CFD10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r5));
/*800D2F14 000CFD14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800D2F18 000CFD18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D2F1C 000CFD1C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800D2F20 000CFD20*/ PPC::Runtime::ASM::beq(.L_800D2F54);
/*800D2F24 000CFD24*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2F28 000CFD28*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2F2C, 0x800D2F2C) //this is a jump label
/*800D2F2C 000CFD2C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r4));
/*800D2F30 000CFD30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r5));
/*800D2F34 000CFD34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*800D2F38 000CFD38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D2F3C 000CFD3C*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*800D2F40 000CFD40*/ PPC::Runtime::ASM::beq(.L_800D2F54);
/*800D2F44 000CFD44*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2F48 000CFD48*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2F4C, 0x800D2F4C) //this is a jump label
/*800D2F4C 000CFD4C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2F50 000CFD50*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2F54, 0x800D2F54) //this is a jump label
/*800D2F54 000CFD54*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x34);
/*800D2F58 000CFD58*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r6);
/*800D2F5C 000CFD5C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r8);
/*800D2F60 000CFD60*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 4, 22);
/*800D2F64 000CFD64*/ PPC::Runtime::ASM::extrwi(context->r3, context->r3, 4, 22);
/*800D2F68 000CFD68*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*800D2F6C 000CFD6C*/ PPC::Runtime::ASM::beq(.L_800D2F78);
/*800D2F70 000CFD70*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D2F74 000CFD74*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800D2F78, 0x800D2F78) //this is a jump label
/*800D2F78 000CFD78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800D2F7C 000CFD7C*/ PPC::Runtime::ASM::blr();
}