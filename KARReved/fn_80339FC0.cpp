//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80339FC0(PPC::Runtime::GCContext* context)
{
/*80339FC0 00336DC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4288 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80339FC4 00336DC4*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*80339FC8 00336DC8*/ PPC::Runtime::ASM::beq(.L_8033A404);
/*80339FCC 00336DCC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80339FD0 00336DD0*/ PPC::Runtime::ASM::bge(.L_8033A1F0);
/*80339FD4 00336DD4*/ PPC::Runtime::ASM::fneg(context->f3, context->f1);
/*80339FD8 00336DD8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80339FDC 00336DDC*/ PPC::Runtime::ASM::b(.L_80339FE8);
RUNTIME_PPC_JUMP_LABEL(.L_80339FE0, 0x80339FE0) //this is a jump label
/*80339FE0 00336DE0*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*80339FE4 00336DE4*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_80339FE8, 0x80339FE8) //this is a jump label
/*80339FE8 00336DE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80339FEC 00336DEC*/ PPC::Runtime::ASM::bgt(.L_80339FE0);
/*80339FF0 00336DF0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80339FF4 00336DF4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*80339FF8 00336DF8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*80339FFC 00336DFC*/ PPC::Runtime::ASM::bne(.L_8033A0F0);
/*8033A000 00336E00*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A004 00336E04*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8033A008 00336E08*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A00C 00336E0C*/ PPC::Runtime::ASM::bne(.L_8033A07C);
/*8033A010 00336E10*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A014 00336E14*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A018 00336E18*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A01C 00336E1C*/ PPC::Runtime::ASM::bne(.L_8033A04C);
/*8033A020 00336E20*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A024 00336E24*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A028 00336E28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A02C 00336E2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A030 00336E30*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A034 00336E34*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A038 00336E38*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A03C 00336E3C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A040 00336E40*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A044 00336E44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A048 00336E48*/ PPC::Runtime::ASM::b(.L_8033A1E8);
RUNTIME_PPC_JUMP_LABEL(.L_8033A04C, 0x8033A04C) //this is a jump label
/*8033A04C 00336E4C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033A050 00336E50*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A054 00336E54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A058 00336E58*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A05C 00336E5C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A060 00336E60*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A064 00336E64*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A068 00336E68*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A06C 00336E6C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A070 00336E70*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A074 00336E74*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8033A078 00336E78*/ PPC::Runtime::ASM::b(.L_8033A1E8);
RUNTIME_PPC_JUMP_LABEL(.L_8033A07C, 0x8033A07C) //this is a jump label
/*8033A07C 00336E7C*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8033A080 00336E80*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A084 00336E84*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8033A088 00336E88*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A08C 00336E8C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A090 00336E90*/ PPC::Runtime::ASM::bne(.L_8033A0C0);
/*8033A094 00336E94*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A098 00336E98*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A09C 00336E9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0A0 00336EA0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0A4 00336EA4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A0A8 00336EA8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0AC 00336EAC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A0B0 00336EB0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A0B4 00336EB4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A0B8 00336EB8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A0BC 00336EBC*/ PPC::Runtime::ASM::b(.L_8033A1E8);
RUNTIME_PPC_JUMP_LABEL(.L_8033A0C0, 0x8033A0C0) //this is a jump label
/*8033A0C0 00336EC0*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033A0C4 00336EC4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0C8 00336EC8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0CC 00336ECC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0D0 00336ED0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A0D4 00336ED4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0D8 00336ED8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A0DC 00336EDC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A0E0 00336EE0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A0E4 00336EE4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A0E8 00336EE8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8033A0EC 00336EEC*/ PPC::Runtime::ASM::b(.L_8033A1E8);
RUNTIME_PPC_JUMP_LABEL(.L_8033A0F0, 0x8033A0F0) //this is a jump label
/*8033A0F0 00336EF0*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*8033A0F4 00336EF4*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A0F8 00336EF8*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8033A0FC 00336EFC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8033A100 00336F00*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A104 00336F04*/ PPC::Runtime::ASM::bne(.L_8033A174);
/*8033A108 00336F08*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A10C 00336F0C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A110 00336F10*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A114 00336F14*/ PPC::Runtime::ASM::bne(.L_8033A144);
/*8033A118 00336F18*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A11C 00336F1C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A120 00336F20*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A124 00336F24*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A128 00336F28*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A12C 00336F2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A130 00336F30*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A134 00336F34*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A138 00336F38*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A13C 00336F3C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A140 00336F40*/ PPC::Runtime::ASM::b(.L_8033A1E4);
RUNTIME_PPC_JUMP_LABEL(.L_8033A144, 0x8033A144) //this is a jump label
/*8033A144 00336F44*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033A148 00336F48*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A14C 00336F4C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A150 00336F50*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A154 00336F54*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A158 00336F58*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A15C 00336F5C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A160 00336F60*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A164 00336F64*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A168 00336F68*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A16C 00336F6C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8033A170 00336F70*/ PPC::Runtime::ASM::b(.L_8033A1E4);
RUNTIME_PPC_JUMP_LABEL(.L_8033A174, 0x8033A174) //this is a jump label
/*8033A174 00336F74*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8033A178 00336F78*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A17C 00336F7C*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8033A180 00336F80*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A184 00336F84*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A188 00336F88*/ PPC::Runtime::ASM::bne(.L_8033A1B8);
/*8033A18C 00336F8C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A190 00336F90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A194 00336F94*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A198 00336F98*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A19C 00336F9C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A1A0 00336FA0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A1A4 00336FA4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A1A8 00336FA8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A1AC 00336FAC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A1B0 00336FB0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A1B4 00336FB4*/ PPC::Runtime::ASM::b(.L_8033A1E4);
RUNTIME_PPC_JUMP_LABEL(.L_8033A1B8, 0x8033A1B8) //this is a jump label
/*8033A1B8 00336FB8*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033A1BC 00336FBC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A1C0 00336FC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A1C4 00336FC4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A1C8 00336FC8*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A1CC 00336FCC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A1D0 00336FD0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A1D4 00336FD4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A1D8 00336FD8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A1DC 00336FDC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A1E0 00336FE0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8033A1E4, 0x8033A1E4) //this is a jump label
/*8033A1E4 00336FE4*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8033A1E8, 0x8033A1E8) //this is a jump label
/*8033A1E8 00336FE8*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8033A1EC 00336FEC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8033A1F0, 0x8033A1F0) //this is a jump label
/*8033A1F0 00336FF0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4318 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A1F4 00336FF4*/ PPC::Runtime::ASM::b(.L_8033A200);
RUNTIME_PPC_JUMP_LABEL(.L_8033A1F8, 0x8033A1F8) //this is a jump label
/*8033A1F8 00336FF8*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f0);
/*8033A1FC 00336FFC*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8033A200, 0x8033A200) //this is a jump label
/*8033A200 00337000*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033A204 00337004*/ PPC::Runtime::ASM::bgt(.L_8033A1F8);
/*8033A208 00337008*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4320 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A20C 0033700C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033A210 00337010*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A214 00337014*/ PPC::Runtime::ASM::bne(.L_8033A308);
/*8033A218 00337018*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A21C 0033701C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*8033A220 00337020*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A224 00337024*/ PPC::Runtime::ASM::bne(.L_8033A294);
/*8033A228 00337028*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A22C 0033702C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8033A230 00337030*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A234 00337034*/ PPC::Runtime::ASM::bne(.L_8033A264);
/*8033A238 00337038*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f1);
/*8033A23C 0033703C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A240 00337040*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A244 00337044*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A248 00337048*/ PPC::Runtime::ASM::fnmsubs(context->f2, context->f3, context->f4, context->f2);
/*8033A24C 0033704C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A250 00337050*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f2, context->f0);
/*8033A254 00337054*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A258 00337058*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*8033A25C 0033705C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8033A260 00337060*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8033A264, 0x8033A264) //this is a jump label
/*8033A264 00337064*/ PPC::Runtime::ASM::fsub(context->f3, context->f2, context->f1);
/*8033A268 00337068*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A26C 0033706C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A270 00337070*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A274 00337074*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A278 00337078*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A27C 0033707C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A280 00337080*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A284 00337084*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A288 00337088*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A28C 0033708C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*8033A290 00337090*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8033A294, 0x8033A294) //this is a jump label
/*8033A294 00337094*/ PPC::Runtime::ASM::fsub(context->f1, context->f0, context->f1);
/*8033A298 00337098*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A29C 0033709C*/ PPC::Runtime::ASM::frsp(context->f3, context->f1);
/*8033A2A0 003370A0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A2A4 003370A4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A2A8 003370A8*/ PPC::Runtime::ASM::bne(.L_8033A2D8);
/*8033A2AC 003370AC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A2B0 003370B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2B4 003370B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2B8 003370B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2BC 003370BC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A2C0 003370C0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2C4 003370C4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A2C8 003370C8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A2CC 003370CC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A2D0 003370D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*8033A2D4 003370D4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8033A2D8, 0x8033A2D8) //this is a jump label
/*8033A2D8 003370D8*/ PPC::Runtime::ASM::fsub(context->f3, context->f2, context->f3);
/*8033A2DC 003370DC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2E0 003370E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2E4 003370E4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2E8 003370E8*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A2EC 003370EC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A2F0 003370F0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A2F4 003370F4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A2F8 003370F8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A2FC 003370FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A300 00337100*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*8033A304 00337104*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8033A308, 0x8033A308) //this is a jump label
/*8033A308 00337108*/ PPC::Runtime::ASM::fsub(context->f2, context->f1, context->f0);
/*8033A30C 0033710C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E4310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A310 00337110*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8033A314 00337114*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8033A318 00337118*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A31C 0033711C*/ PPC::Runtime::ASM::bne(.L_8033A38C);
/*8033A320 00337120*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A324 00337124*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A328 00337128*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A32C 0033712C*/ PPC::Runtime::ASM::bne(.L_8033A35C);
/*8033A330 00337130*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A334 00337134*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A338 00337138*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A33C 0033713C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A340 00337140*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A344 00337144*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A348 00337148*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A34C 0033714C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A350 00337150*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A354 00337154*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A358 00337158*/ PPC::Runtime::ASM::b(.L_8033A3FC);
RUNTIME_PPC_JUMP_LABEL(.L_8033A35C, 0x8033A35C) //this is a jump label
/*8033A35C 0033715C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033A360 00337160*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A364 00337164*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A368 00337168*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A36C 0033716C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A370 00337170*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A374 00337174*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A378 00337178*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A37C 0033717C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A380 00337180*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A384 00337184*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8033A388 00337188*/ PPC::Runtime::ASM::b(.L_8033A3FC);
RUNTIME_PPC_JUMP_LABEL(.L_8033A38C, 0x8033A38C) //this is a jump label
/*8033A38C 0033718C*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8033A390 00337190*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E4348 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A394 00337194*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8033A398 00337198*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8033A39C 0033719C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8033A3A0 003371A0*/ PPC::Runtime::ASM::bne(.L_8033A3D0);
/*8033A3A4 003371A4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8033A3A8 003371A8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4330 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3AC 003371AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E432C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3B0 003371B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3B4 003371B4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8033A3B8 003371B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E42A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3BC 003371BC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8033A3C0 003371C0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8033A3C4 003371C4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8033A3C8 003371C8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A3CC 003371CC*/ PPC::Runtime::ASM::b(.L_8033A3FC);
RUNTIME_PPC_JUMP_LABEL(.L_8033A3D0, 0x8033A3D0) //this is a jump label
/*8033A3D0 003371D0*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8033A3D4 003371D4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4340 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3D8 003371D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E433C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3DC 003371DC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4338 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3E0 003371E0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8033A3E4 003371E4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E4334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033A3E8 003371E8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8033A3EC 003371EC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8033A3F0 003371F0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8033A3F4 003371F4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8033A3F8 003371F8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8033A3FC, 0x8033A3FC) //this is a jump label
/*8033A3FC 003371FC*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8033A400 00337200*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8033A404, 0x8033A404) //this is a jump label
/*8033A404 00337204*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*8033A408 00337208*/ PPC::Runtime::ASM::blr();
}