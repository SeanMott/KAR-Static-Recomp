//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80431C44(PPC::Runtime::GCContext* context)
{
/*80431C44 0042EA44*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F20 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431C48 0042EA48*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f2);
/*80431C4C 0042EA4C*/ PPC::Runtime::ASM::beq(.L_80432098);
/*80431C50 0042EA50*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431C54 0042EA54*/ PPC::Runtime::ASM::fadd(context->f0, context->f1, context->f0);
/*80431C58 0042EA58*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80431C5C 0042EA5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80431C60 0042EA60*/ PPC::Runtime::ASM::bge(.L_80431E80);
/*80431C64 0042EA64*/ PPC::Runtime::ASM::fneg(context->f3, context->f0);
/*80431C68 0042EA68*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431C6C 0042EA6C*/ PPC::Runtime::ASM::b(.L_80431C78);
RUNTIME_PPC_JUMP_LABEL(.L_80431C70, 0x80431C70) //this is a jump label
/*80431C70 0042EA70*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*80431C74 0042EA74*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80431C78, 0x80431C78) //this is a jump label
/*80431C78 0042EA78*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431C7C 0042EA7C*/ PPC::Runtime::ASM::bgt(.L_80431C70);
/*80431C80 0042EA80*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431C84 0042EA84*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431C88 0042EA88*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431C8C 0042EA8C*/ PPC::Runtime::ASM::bne(.L_80431D80);
/*80431C90 0042EA90*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5F58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431C94 0042EA94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80431C98 0042EA98*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431C9C 0042EA9C*/ PPC::Runtime::ASM::bne(.L_80431D0C);
/*80431CA0 0042EAA0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CA4 0042EAA4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431CA8 0042EAA8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431CAC 0042EAAC*/ PPC::Runtime::ASM::bne(.L_80431CDC);
/*80431CB0 0042EAB0*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431CB4 0042EAB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CB8 0042EAB8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CBC 0042EABC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CC0 0042EAC0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431CC4 0042EAC4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CC8 0042EAC8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431CCC 0042EACC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431CD0 0042EAD0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431CD4 0042EAD4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431CD8 0042EAD8*/ PPC::Runtime::ASM::b(.L_80431E78);
RUNTIME_PPC_JUMP_LABEL(.L_80431CDC, 0x80431CDC) //this is a jump label
/*80431CDC 0042EADC*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431CE0 0042EAE0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CE4 0042EAE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CE8 0042EAE8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CEC 0042EAEC*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80431CF0 0042EAF0*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431CF4 0042EAF4*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80431CF8 0042EAF8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80431CFC 0042EAFC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80431D00 0042EB00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431D04 0042EB04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80431D08 0042EB08*/ PPC::Runtime::ASM::b(.L_80431E78);
RUNTIME_PPC_JUMP_LABEL(.L_80431D0C, 0x80431D0C) //this is a jump label
/*80431D0C 0042EB0C*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80431D10 0042EB10*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D14 0042EB14*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80431D18 0042EB18*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431D1C 0042EB1C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431D20 0042EB20*/ PPC::Runtime::ASM::bne(.L_80431D50);
/*80431D24 0042EB24*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431D28 0042EB28*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D2C 0042EB2C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D30 0042EB30*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D34 0042EB34*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431D38 0042EB38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D3C 0042EB3C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431D40 0042EB40*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431D44 0042EB44*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431D48 0042EB48*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431D4C 0042EB4C*/ PPC::Runtime::ASM::b(.L_80431E78);
RUNTIME_PPC_JUMP_LABEL(.L_80431D50, 0x80431D50) //this is a jump label
/*80431D50 0042EB50*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431D54 0042EB54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D58 0042EB58*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D5C 0042EB5C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D60 0042EB60*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80431D64 0042EB64*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D68 0042EB68*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80431D6C 0042EB6C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80431D70 0042EB70*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80431D74 0042EB74*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431D78 0042EB78*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80431D7C 0042EB7C*/ PPC::Runtime::ASM::b(.L_80431E78);
RUNTIME_PPC_JUMP_LABEL(.L_80431D80, 0x80431D80) //this is a jump label
/*80431D80 0042EB80*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*80431D84 0042EB84*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5F58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D88 0042EB88*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80431D8C 0042EB8C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80431D90 0042EB90*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431D94 0042EB94*/ PPC::Runtime::ASM::bne(.L_80431E04);
/*80431D98 0042EB98*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431D9C 0042EB9C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431DA0 0042EBA0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431DA4 0042EBA4*/ PPC::Runtime::ASM::bne(.L_80431DD4);
/*80431DA8 0042EBA8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431DAC 0042EBAC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DB0 0042EBB0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DB4 0042EBB4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DB8 0042EBB8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431DBC 0042EBBC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DC0 0042EBC0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431DC4 0042EBC4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431DC8 0042EBC8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431DCC 0042EBCC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431DD0 0042EBD0*/ PPC::Runtime::ASM::b(.L_80431E74);
RUNTIME_PPC_JUMP_LABEL(.L_80431DD4, 0x80431DD4) //this is a jump label
/*80431DD4 0042EBD4*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431DD8 0042EBD8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DDC 0042EBDC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DE0 0042EBE0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DE4 0042EBE4*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80431DE8 0042EBE8*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431DEC 0042EBEC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80431DF0 0042EBF0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80431DF4 0042EBF4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80431DF8 0042EBF8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431DFC 0042EBFC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*80431E00 0042EC00*/ PPC::Runtime::ASM::b(.L_80431E74);
RUNTIME_PPC_JUMP_LABEL(.L_80431E04, 0x80431E04) //this is a jump label
/*80431E04 0042EC04*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80431E08 0042EC08*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E0C 0042EC0C*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80431E10 0042EC10*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431E14 0042EC14*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431E18 0042EC18*/ PPC::Runtime::ASM::bne(.L_80431E48);
/*80431E1C 0042EC1C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431E20 0042EC20*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E24 0042EC24*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E28 0042EC28*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E2C 0042EC2C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431E30 0042EC30*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E34 0042EC34*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431E38 0042EC38*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431E3C 0042EC3C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431E40 0042EC40*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431E44 0042EC44*/ PPC::Runtime::ASM::b(.L_80431E74);
RUNTIME_PPC_JUMP_LABEL(.L_80431E48, 0x80431E48) //this is a jump label
/*80431E48 0042EC48*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431E4C 0042EC4C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E50 0042EC50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E54 0042EC54*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E58 0042EC58*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80431E5C 0042EC5C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E60 0042EC60*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80431E64 0042EC64*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80431E68 0042EC68*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80431E6C 0042EC6C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431E70 0042EC70*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80431E74, 0x80431E74) //this is a jump label
/*80431E74 0042EC74*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80431E78, 0x80431E78) //this is a jump label
/*80431E78 0042EC78*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*80431E7C 0042EC7C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80431E80, 0x80431E80) //this is a jump label
/*80431E80 0042EC80*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*80431E84 0042EC84*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431E88 0042EC88*/ PPC::Runtime::ASM::b(.L_80431E94);
RUNTIME_PPC_JUMP_LABEL(.L_80431E8C, 0x80431E8C) //this is a jump label
/*80431E8C 0042EC8C*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*80431E90 0042EC90*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80431E94, 0x80431E94) //this is a jump label
/*80431E94 0042EC94*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431E98 0042EC98*/ PPC::Runtime::ASM::bgt(.L_80431E8C);
/*80431E9C 0042EC9C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431EA0 0042ECA0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431EA4 0042ECA4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431EA8 0042ECA8*/ PPC::Runtime::ASM::bne(.L_80431F9C);
/*80431EAC 0042ECAC*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5F58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431EB0 0042ECB0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80431EB4 0042ECB4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431EB8 0042ECB8*/ PPC::Runtime::ASM::bne(.L_80431F28);
/*80431EBC 0042ECBC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431EC0 0042ECC0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431EC4 0042ECC4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431EC8 0042ECC8*/ PPC::Runtime::ASM::bne(.L_80431EF8);
/*80431ECC 0042ECCC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431ED0 0042ECD0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431ED4 0042ECD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431ED8 0042ECD8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431EDC 0042ECDC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431EE0 0042ECE0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431EE4 0042ECE4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431EE8 0042ECE8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431EEC 0042ECEC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431EF0 0042ECF0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*80431EF4 0042ECF4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80431EF8, 0x80431EF8) //this is a jump label
/*80431EF8 0042ECF8*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431EFC 0042ECFC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F00 0042ED00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F04 0042ED04*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F08 0042ED08*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80431F0C 0042ED0C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F10 0042ED10*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80431F14 0042ED14*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80431F18 0042ED18*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80431F1C 0042ED1C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431F20 0042ED20*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*80431F24 0042ED24*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80431F28, 0x80431F28) //this is a jump label
/*80431F28 0042ED28*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80431F2C 0042ED2C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F30 0042ED30*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80431F34 0042ED34*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431F38 0042ED38*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431F3C 0042ED3C*/ PPC::Runtime::ASM::bne(.L_80431F6C);
/*80431F40 0042ED40*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431F44 0042ED44*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F48 0042ED48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F4C 0042ED4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F50 0042ED50*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431F54 0042ED54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F58 0042ED58*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431F5C 0042ED5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431F60 0042ED60*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431F64 0042ED64*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*80431F68 0042ED68*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80431F6C, 0x80431F6C) //this is a jump label
/*80431F6C 0042ED6C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431F70 0042ED70*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F74 0042ED74*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F78 0042ED78*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F7C 0042ED7C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80431F80 0042ED80*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431F84 0042ED84*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80431F88 0042ED88*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80431F8C 0042ED8C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80431F90 0042ED90*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431F94 0042ED94*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*80431F98 0042ED98*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80431F9C, 0x80431F9C) //this is a jump label
/*80431F9C 0042ED9C*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*80431FA0 0042EDA0*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5F58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FA4 0042EDA4*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*80431FA8 0042EDA8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80431FAC 0042EDAC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431FB0 0042EDB0*/ PPC::Runtime::ASM::bne(.L_80432020);
/*80431FB4 0042EDB4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FB8 0042EDB8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80431FBC 0042EDBC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80431FC0 0042EDC0*/ PPC::Runtime::ASM::bne(.L_80431FF0);
/*80431FC4 0042EDC4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*80431FC8 0042EDC8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FCC 0042EDCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FD0 0042EDD0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FD4 0042EDD4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*80431FD8 0042EDD8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FDC 0042EDDC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80431FE0 0042EDE0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80431FE4 0042EDE4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*80431FE8 0042EDE8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80431FEC 0042EDEC*/ PPC::Runtime::ASM::b(.L_80432090);
RUNTIME_PPC_JUMP_LABEL(.L_80431FF0, 0x80431FF0) //this is a jump label
/*80431FF0 0042EDF0*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80431FF4 0042EDF4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FF8 0042EDF8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80431FFC 0042EDFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432000 0042EE00*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80432004 0042EE04*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432008 0042EE08*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8043200C 0042EE0C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80432010 0042EE10*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80432014 0042EE14*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80432018 0042EE18*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8043201C 0042EE1C*/ PPC::Runtime::ASM::b(.L_80432090);
RUNTIME_PPC_JUMP_LABEL(.L_80432020, 0x80432020) //this is a jump label
/*80432020 0042EE20*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*80432024 0042EE24*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5F90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432028 0042EE28*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8043202C 0042EE2C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80432030 0042EE30*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80432034 0042EE34*/ PPC::Runtime::ASM::bne(.L_80432064);
/*80432038 0042EE38*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8043203C 0042EE3C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432040 0042EE40*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432044 0042EE44*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432048 0042EE48*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8043204C 0042EE4C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432050 0042EE50*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*80432054 0042EE54*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*80432058 0042EE58*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8043205C 0042EE5C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*80432060 0042EE60*/ PPC::Runtime::ASM::b(.L_80432090);
RUNTIME_PPC_JUMP_LABEL(.L_80432064, 0x80432064) //this is a jump label
/*80432064 0042EE64*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*80432068 0042EE68*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5F88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043206C 0042EE6C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432070 0042EE70*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5F80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80432074 0042EE74*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*80432078 0042EE78*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5F7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043207C 0042EE7C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*80432080 0042EE80*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*80432084 0042EE84*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*80432088 0042EE88*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8043208C 0042EE8C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_80432090, 0x80432090) //this is a jump label
/*80432090 0042EE90*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*80432094 0042EE94*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80432098, 0x80432098) //this is a jump label
/*80432098 0042EE98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5F24 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8043209C 0042EE9C*/ PPC::Runtime::ASM::blr();
}