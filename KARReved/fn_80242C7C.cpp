//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80242C7C(PPC::Runtime::GCContext* context)
{
/*80242C7C 0023FA7C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80242C80 0023FA80*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80242C84 0023FA84*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80242C88 0023FA88*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80242C8C 0023FA8C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80242C90 0023FA90*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80242C94 0023FA94*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80242C98 0023FA98*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80242C9C 0023FA9C*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80242CA0 0023FAA0*/ PPC::Runtime::ASM::lfs(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80242CA4 0023FAA4*/ PPC::Runtime::ASM::fsubs(context->f6, context->f2, context->f3);
/*80242CA8 0023FAA8*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80242CAC 0023FAAC*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80242CB0 0023FAB0*/ PPC::Runtime::ASM::fmuls(context->f7, context->f29, context->f29);
/*80242CB4 0023FAB4*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80242CB8 0023FAB8*/ PPC::Runtime::ASM::fmuls(context->f5, context->f30, context->f30);
/*80242CBC 0023FABC*/ PPC::Runtime::ASM::lfs(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80242CC0 0023FAC0*/ PPC::Runtime::ASM::fsubs(context->f31, context->f9, context->f8);
/*80242CC4 0023FAC4*/ PPC::Runtime::ASM::lfs(context->f11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80242CC8 0023FAC8*/ PPC::Runtime::ASM::lfs(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80242CCC 0023FACC*/ PPC::Runtime::ASM::fmuls(context->f8, context->f28, context->f28);
/*80242CD0 0023FAD0*/ PPC::Runtime::ASM::fadds(context->f7, context->f7, context->f5);
/*80242CD4 0023FAD4*/ PPC::Runtime::ASM::lfs(context->f12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80242CD8 0023FAD8*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80242CDC 0023FADC*/ PPC::Runtime::ASM::fsubs(context->f13, context->f11, context->f10);
/*80242CE0 0023FAE0*/ PPC::Runtime::ASM::fmuls(context->f5, context->f31, context->f30);
/*80242CE4 0023FAE4*/ PPC::Runtime::ASM::lfs(context->f10, STRUCT_FLOAT_COUNT_1805E2B74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242CE8 0023FAE8*/ PPC::Runtime::ASM::fadds(context->f11, context->f8, context->f7);
/*80242CEC 0023FAEC*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E2B68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242CF0 0023FAF0*/ PPC::Runtime::ASM::fmuls(context->f8, context->f31, context->f31);
/*80242CF4 0023FAF4*/ PPC::Runtime::ASM::fsubs(context->f12, context->f12, context->f9);
/*80242CF8 0023FAF8*/ PPC::Runtime::ASM::fmadds(context->f9, context->f13, context->f29, context->f5);
/*80242CFC 0023FAFC*/ PPC::Runtime::ASM::fnmsubs(context->f5, context->f6, context->f6, context->f11);
/*80242D00 0023FB00*/ PPC::Runtime::ASM::fmadds(context->f8, context->f13, context->f13, context->f8);
/*80242D04 0023FB04*/ PPC::Runtime::ASM::fmadds(context->f9, context->f12, context->f28, context->f9);
/*80242D08 0023FB08*/ PPC::Runtime::ASM::fabs(context->f11, context->f5);
/*80242D0C 0023FB0C*/ PPC::Runtime::ASM::fmadds(context->f8, context->f12, context->f12, context->f8);
/*80242D10 0023FB10*/ PPC::Runtime::ASM::fmadds(context->f6, context->f2, context->f6, context->f9);
/*80242D14 0023FB14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f11, context->f7);
/*80242D18 0023FB18*/ PPC::Runtime::ASM::fnmsubs(context->f8, context->f2, context->f2, context->f8);
/*80242D1C 0023FB1C*/ PPC::Runtime::ASM::fmuls(context->f9, context->f10, context->f6);
/*80242D20 0023FB20*/ PPC::Runtime::ASM::bge(.L_80242D2C);
/*80242D24 0023FB24*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80242D28 0023FB28*/ PPC::Runtime::ASM::b(.L_80242DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80242D2C, 0x80242D2C) //this is a jump label
/*80242D2C 0023FB2C*/ PPC::Runtime::ASM::lfs(context->f7, STRUCT_FLOAT_COUNT_1805E2B70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242D30 0023FB30*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242D34 0023FB34*/ PPC::Runtime::ASM::fmuls(context->f7, context->f7, context->f5);
/*80242D38 0023FB38*/ PPC::Runtime::ASM::fmuls(context->f7, context->f7, context->f8);
/*80242D3C 0023FB3C*/ PPC::Runtime::ASM::fmsubs(context->f8, context->f9, context->f9, context->f7);
/*80242D40 0023FB40*/ PPC::Runtime::ASM::fcmpo(cr0, context->f8, context->f6);
/*80242D44 0023FB44*/ PPC::Runtime::ASM::bge(.L_80242D50);
/*80242D48 0023FB48*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80242D4C 0023FB4C*/ PPC::Runtime::ASM::b(.L_80242DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80242D50, 0x80242D50) //this is a jump label
/*80242D50 0023FB50*/ PPC::Runtime::ASM::ble(.L_80242DA0);
/*80242D54 0023FB54*/ PPC::Runtime::ASM::frsqrte(context->f4, context->f8);
/*80242D58 0023FB58*/ PPC::Runtime::ASM::lfd(context->f7, STRUCT_DOUBLE_COUNT_1805E2B58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242D5C 0023FB5C*/ PPC::Runtime::ASM::lfd(context->f6, STRUCT_DOUBLE_COUNT_1805E2B60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242D60 0023FB60*/ PPC::Runtime::ASM::fmul(context->f0, context->f4, context->f4);
/*80242D64 0023FB64*/ PPC::Runtime::ASM::fmul(context->f4, context->f7, context->f4);
/*80242D68 0023FB68*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f8, context->f0, context->f6);
/*80242D6C 0023FB6C*/ PPC::Runtime::ASM::fmul(context->f4, context->f4, context->f0);
/*80242D70 0023FB70*/ PPC::Runtime::ASM::fmul(context->f0, context->f4, context->f4);
/*80242D74 0023FB74*/ PPC::Runtime::ASM::fmul(context->f4, context->f7, context->f4);
/*80242D78 0023FB78*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f8, context->f0, context->f6);
/*80242D7C 0023FB7C*/ PPC::Runtime::ASM::fmul(context->f4, context->f4, context->f0);
/*80242D80 0023FB80*/ PPC::Runtime::ASM::fmul(context->f0, context->f4, context->f4);
/*80242D84 0023FB84*/ PPC::Runtime::ASM::fmul(context->f4, context->f7, context->f4);
/*80242D88 0023FB88*/ PPC::Runtime::ASM::fnmsub(context->f0, context->f8, context->f0, context->f6);
/*80242D8C 0023FB8C*/ PPC::Runtime::ASM::fmul(context->f0, context->f4, context->f0);
/*80242D90 0023FB90*/ PPC::Runtime::ASM::fmul(context->f0, context->f8, context->f0);
/*80242D94 0023FB94*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*80242D98 0023FB98*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80242D9C 0023FB9C*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_80242DA0, 0x80242DA0) //this is a jump label
/*80242DA0 0023FBA0*/ PPC::Runtime::ASM::fneg(context->f4, context->f9);
/*80242DA4 0023FBA4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242DA8 0023FBA8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80242DAC 0023FBAC*/ PPC::Runtime::ASM::fmuls(context->f5, context->f5, context->f0);
/*80242DB0 0023FBB0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f8);
/*80242DB4 0023FBB4*/ PPC::Runtime::ASM::fadds(context->f4, context->f4, context->f8);
/*80242DB8 0023FBB8*/ PPC::Runtime::ASM::fdivs(context->f0, context->f0, context->f5);
/*80242DBC 0023FBBC*/ PPC::Runtime::ASM::fdivs(context->f4, context->f4, context->f5);
RUNTIME_PPC_JUMP_LABEL(.L_80242DC0, 0x80242DC0) //this is a jump label
/*80242DC0 0023FBC0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80242DC4 0023FBC4*/ PPC::Runtime::ASM::bne(.L_80242DD0);
/*80242DC8 0023FBC8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80242DCC 0023FBCC*/ PPC::Runtime::ASM::b(.L_80242F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80242DD0, 0x80242DD0) //this is a jump label
/*80242DD0 0023FBD0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f3);
/*80242DD4 0023FBD4*/ PPC::Runtime::ASM::bne(.L_80242EA4);
/*80242DD8 0023FBD8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f0);
/*80242DDC 0023FBDC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242DE0 0023FBE0*/ PPC::Runtime::ASM::fmuls(context->f5, context->f1, context->f4);
/*80242DE4 0023FBE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f3);
/*80242DE8 0023FBE8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242DEC 0023FBEC*/ PPC::Runtime::ASM::bne(.L_80242E04);
/*80242DF0 0023FBF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*80242DF4 0023FBF4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242DF8 0023FBF8*/ PPC::Runtime::ASM::bne(.L_80242E04);
/*80242DFC 0023FBFC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E00 0023FC00*/ PPC::Runtime::ASM::b(.L_80242E08);
RUNTIME_PPC_JUMP_LABEL(.L_80242E04, 0x80242E04) //this is a jump label
/*80242E04 0023FC04*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80242E08, 0x80242E08) //this is a jump label
/*80242E08 0023FC08*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E0C 0023FC0C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f3, context->f2);
/*80242E10 0023FC10*/ PPC::Runtime::ASM::beq(.L_80242E60);
/*80242E14 0023FC14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f4);
/*80242E18 0023FC18*/ PPC::Runtime::ASM::blt(.L_80242E50);
/*80242E1C 0023FC1C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E20 0023FC20*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f5);
/*80242E24 0023FC24*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242E28 0023FC28*/ PPC::Runtime::ASM::bne(.L_80242E40);
/*80242E2C 0023FC2C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f1);
/*80242E30 0023FC30*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242E34 0023FC34*/ PPC::Runtime::ASM::bne(.L_80242E40);
/*80242E38 0023FC38*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E3C 0023FC3C*/ PPC::Runtime::ASM::b(.L_80242E44);
RUNTIME_PPC_JUMP_LABEL(.L_80242E40, 0x80242E40) //this is a jump label
/*80242E40 0023FC40*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80242E44, 0x80242E44) //this is a jump label
/*80242E44 0023FC44*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E48 0023FC48*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f1);
/*80242E4C 0023FC4C*/ PPC::Runtime::ASM::bne(.L_80242E58);
RUNTIME_PPC_JUMP_LABEL(.L_80242E50, 0x80242E50) //this is a jump label
/*80242E50 0023FC50*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80242E54 0023FC54*/ PPC::Runtime::ASM::b(.L_80242F68);
RUNTIME_PPC_JUMP_LABEL(.L_80242E58, 0x80242E58) //this is a jump label
/*80242E58 0023FC58*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80242E5C 0023FC5C*/ PPC::Runtime::ASM::b(.L_80242F68);
RUNTIME_PPC_JUMP_LABEL(.L_80242E60, 0x80242E60) //this is a jump label
/*80242E60 0023FC60*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E64 0023FC64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f5);
/*80242E68 0023FC68*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242E6C 0023FC6C*/ PPC::Runtime::ASM::bne(.L_80242E84);
/*80242E70 0023FC70*/ PPC::Runtime::ASM::fcmpo(cr0, context->f5, context->f1);
/*80242E74 0023FC74*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242E78 0023FC78*/ PPC::Runtime::ASM::bne(.L_80242E84);
/*80242E7C 0023FC7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E80 0023FC80*/ PPC::Runtime::ASM::b(.L_80242E88);
RUNTIME_PPC_JUMP_LABEL(.L_80242E84, 0x80242E84) //this is a jump label
/*80242E84 0023FC84*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80242E88, 0x80242E88) //this is a jump label
/*80242E88 0023FC88*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242E8C 0023FC8C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80242E90 0023FC90*/ PPC::Runtime::ASM::beq(.L_80242E9C);
/*80242E94 0023FC94*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80242E98 0023FC98*/ PPC::Runtime::ASM::b(.L_80242F68);
RUNTIME_PPC_JUMP_LABEL(.L_80242E9C, 0x80242E9C) //this is a jump label
/*80242E9C 0023FC9C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80242EA0 0023FCA0*/ PPC::Runtime::ASM::b(.L_80242F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80242EA4, 0x80242EA4) //this is a jump label
/*80242EA4 0023FCA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242EA8 0023FCA8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80242EAC 0023FCAC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242EB0 0023FCB0*/ PPC::Runtime::ASM::bne(.L_80242EC8);
/*80242EB4 0023FCB4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242EB8 0023FCB8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80242EBC 0023FCBC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242EC0 0023FCC0*/ PPC::Runtime::ASM::bne(.L_80242EC8);
/*80242EC4 0023FCC4*/ PPC::Runtime::ASM::b(.L_80242ECC);
RUNTIME_PPC_JUMP_LABEL(.L_80242EC8, 0x80242EC8) //this is a jump label
/*80242EC8 0023FCC8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80242ECC, 0x80242ECC) //this is a jump label
/*80242ECC 0023FCCC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242ED0 0023FCD0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f1);
/*80242ED4 0023FCD4*/ PPC::Runtime::ASM::beq(.L_80242F24);
/*80242ED8 0023FCD8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f4);
/*80242EDC 0023FCDC*/ PPC::Runtime::ASM::blt(.L_80242F14);
/*80242EE0 0023FCE0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242EE4 0023FCE4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f4);
/*80242EE8 0023FCE8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242EEC 0023FCEC*/ PPC::Runtime::ASM::bne(.L_80242F04);
/*80242EF0 0023FCF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242EF4 0023FCF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f2);
/*80242EF8 0023FCF8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242EFC 0023FCFC*/ PPC::Runtime::ASM::bne(.L_80242F04);
/*80242F00 0023FD00*/ PPC::Runtime::ASM::b(.L_80242F08);
RUNTIME_PPC_JUMP_LABEL(.L_80242F04, 0x80242F04) //this is a jump label
/*80242F04 0023FD04*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80242F08, 0x80242F08) //this is a jump label
/*80242F08 0023FD08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242F0C 0023FD0C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f2, context->f1);
/*80242F10 0023FD10*/ PPC::Runtime::ASM::bne(.L_80242F1C);
RUNTIME_PPC_JUMP_LABEL(.L_80242F14, 0x80242F14) //this is a jump label
/*80242F14 0023FD14*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80242F18 0023FD18*/ PPC::Runtime::ASM::b(.L_80242F68);
RUNTIME_PPC_JUMP_LABEL(.L_80242F1C, 0x80242F1C) //this is a jump label
/*80242F1C 0023FD1C*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80242F20 0023FD20*/ PPC::Runtime::ASM::b(.L_80242F68);
RUNTIME_PPC_JUMP_LABEL(.L_80242F24, 0x80242F24) //this is a jump label
/*80242F24 0023FD24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242F28 0023FD28*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f4);
/*80242F2C 0023FD2C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242F30 0023FD30*/ PPC::Runtime::ASM::bne(.L_80242F48);
/*80242F34 0023FD34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242F38 0023FD38*/ PPC::Runtime::ASM::fcmpo(cr0, context->f4, context->f1);
/*80242F3C 0023FD3C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80242F40 0023FD40*/ PPC::Runtime::ASM::bne(.L_80242F48);
/*80242F44 0023FD44*/ PPC::Runtime::ASM::b(.L_80242F4C);
RUNTIME_PPC_JUMP_LABEL(.L_80242F48, 0x80242F48) //this is a jump label
/*80242F48 0023FD48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80242F4C, 0x80242F4C) //this is a jump label
/*80242F4C 0023FD4C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80242F50 0023FD50*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80242F54 0023FD54*/ PPC::Runtime::ASM::beq(.L_80242F60);
/*80242F58 0023FD58*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80242F5C 0023FD5C*/ PPC::Runtime::ASM::b(.L_80242F68);
RUNTIME_PPC_JUMP_LABEL(.L_80242F60, 0x80242F60) //this is a jump label
/*80242F60 0023FD60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80242F64 0023FD64*/ PPC::Runtime::ASM::b(.L_80242F6C);
RUNTIME_PPC_JUMP_LABEL(.L_80242F68, 0x80242F68) //this is a jump label
/*80242F68 0023FD68*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80242F6C, 0x80242F6C) //this is a jump label
/*80242F6C 0023FD6C*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80242F70 0023FD70*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80242F74 0023FD74*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80242F78 0023FD78*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80242F7C 0023FD7C*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*80242F80 0023FD80*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80242F84 0023FD84*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*80242F88 0023FD88*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80242F8C 0023FD8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80242F90 0023FD90*/ PPC::Runtime::ASM::blr();
}