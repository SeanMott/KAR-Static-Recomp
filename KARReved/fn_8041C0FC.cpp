//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8041C0FC(PPC::Runtime::GCContext* context)
{
/*8041C0FC 00418EFC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C100 00418F00*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8041C104 00418F04*/ PPC::Runtime::ASM::beq(.L_8041C540);
/*8041C108 00418F08*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8041C10C 00418F0C*/ PPC::Runtime::ASM::bge(.L_8041C32C);
/*8041C110 00418F10*/ PPC::Runtime::ASM::fneg(context->f3, context->f1);
/*8041C114 00418F14*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C118 00418F18*/ PPC::Runtime::ASM::b(.L_8041C124);
RUNTIME_PPC_JUMP_LABEL(.L_8041C11C, 0x8041C11C) //this is a jump label
/*8041C11C 00418F1C*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*8041C120 00418F20*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_8041C124, 0x8041C124) //this is a jump label
/*8041C124 00418F24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C128 00418F28*/ PPC::Runtime::ASM::bgt(.L_8041C11C);
/*8041C12C 00418F2C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C130 00418F30*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C134 00418F34*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C138 00418F38*/ PPC::Runtime::ASM::bne(.L_8041C22C);
/*8041C13C 00418F3C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5D70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C140 00418F40*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8041C144 00418F44*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C148 00418F48*/ PPC::Runtime::ASM::bne(.L_8041C1B8);
/*8041C14C 00418F4C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C150 00418F50*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C154 00418F54*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C158 00418F58*/ PPC::Runtime::ASM::bne(.L_8041C188);
/*8041C15C 00418F5C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C160 00418F60*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C164 00418F64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C168 00418F68*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C16C 00418F6C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C170 00418F70*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C174 00418F74*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C178 00418F78*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C17C 00418F7C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C180 00418F80*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C184 00418F84*/ PPC::Runtime::ASM::b(.L_8041C324);
RUNTIME_PPC_JUMP_LABEL(.L_8041C188, 0x8041C188) //this is a jump label
/*8041C188 00418F88*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8041C18C 00418F8C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C190 00418F90*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C194 00418F94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C198 00418F98*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C19C 00418F9C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C1A0 00418FA0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C1A4 00418FA4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C1A8 00418FA8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C1AC 00418FAC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C1B0 00418FB0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8041C1B4 00418FB4*/ PPC::Runtime::ASM::b(.L_8041C324);
RUNTIME_PPC_JUMP_LABEL(.L_8041C1B8, 0x8041C1B8) //this is a jump label
/*8041C1B8 00418FB8*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8041C1BC 00418FBC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C1C0 00418FC0*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8041C1C4 00418FC4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C1C8 00418FC8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C1CC 00418FCC*/ PPC::Runtime::ASM::bne(.L_8041C1FC);
/*8041C1D0 00418FD0*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C1D4 00418FD4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C1D8 00418FD8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C1DC 00418FDC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C1E0 00418FE0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C1E4 00418FE4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C1E8 00418FE8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C1EC 00418FEC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C1F0 00418FF0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C1F4 00418FF4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C1F8 00418FF8*/ PPC::Runtime::ASM::b(.L_8041C324);
RUNTIME_PPC_JUMP_LABEL(.L_8041C1FC, 0x8041C1FC) //this is a jump label
/*8041C1FC 00418FFC*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8041C200 00419000*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C204 00419004*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C208 00419008*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C20C 0041900C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C210 00419010*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C214 00419014*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C218 00419018*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C21C 0041901C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C220 00419020*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C224 00419024*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8041C228 00419028*/ PPC::Runtime::ASM::b(.L_8041C324);
RUNTIME_PPC_JUMP_LABEL(.L_8041C22C, 0x8041C22C) //this is a jump label
/*8041C22C 0041902C*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*8041C230 00419030*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5D70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C234 00419034*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8041C238 00419038*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8041C23C 0041903C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C240 00419040*/ PPC::Runtime::ASM::bne(.L_8041C2B0);
/*8041C244 00419044*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C248 00419048*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C24C 0041904C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C250 00419050*/ PPC::Runtime::ASM::bne(.L_8041C280);
/*8041C254 00419054*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C258 00419058*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C25C 0041905C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C260 00419060*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C264 00419064*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C268 00419068*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C26C 0041906C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C270 00419070*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C274 00419074*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C278 00419078*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C27C 0041907C*/ PPC::Runtime::ASM::b(.L_8041C320);
RUNTIME_PPC_JUMP_LABEL(.L_8041C280, 0x8041C280) //this is a jump label
/*8041C280 00419080*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8041C284 00419084*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C288 00419088*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C28C 0041908C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C290 00419090*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C294 00419094*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C298 00419098*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C29C 0041909C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C2A0 004190A0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C2A4 004190A4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C2A8 004190A8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8041C2AC 004190AC*/ PPC::Runtime::ASM::b(.L_8041C320);
RUNTIME_PPC_JUMP_LABEL(.L_8041C2B0, 0x8041C2B0) //this is a jump label
/*8041C2B0 004190B0*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8041C2B4 004190B4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C2B8 004190B8*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8041C2BC 004190BC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C2C0 004190C0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C2C4 004190C4*/ PPC::Runtime::ASM::bne(.L_8041C2F4);
/*8041C2C8 004190C8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C2CC 004190CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C2D0 004190D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C2D4 004190D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C2D8 004190D8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C2DC 004190DC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C2E0 004190E0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C2E4 004190E4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C2E8 004190E8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C2EC 004190EC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C2F0 004190F0*/ PPC::Runtime::ASM::b(.L_8041C320);
RUNTIME_PPC_JUMP_LABEL(.L_8041C2F4, 0x8041C2F4) //this is a jump label
/*8041C2F4 004190F4*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8041C2F8 004190F8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C2FC 004190FC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C300 00419100*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C304 00419104*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C308 00419108*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C30C 0041910C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C310 00419110*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C314 00419114*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C318 00419118*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C31C 0041911C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8041C320, 0x8041C320) //this is a jump label
/*8041C320 00419120*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8041C324, 0x8041C324) //this is a jump label
/*8041C324 00419124*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8041C328 00419128*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041C32C, 0x8041C32C) //this is a jump label
/*8041C32C 0041912C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C330 00419130*/ PPC::Runtime::ASM::b(.L_8041C33C);
RUNTIME_PPC_JUMP_LABEL(.L_8041C334, 0x8041C334) //this is a jump label
/*8041C334 00419134*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f0);
/*8041C338 00419138*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8041C33C, 0x8041C33C) //this is a jump label
/*8041C33C 0041913C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8041C340 00419140*/ PPC::Runtime::ASM::bgt(.L_8041C334);
/*8041C344 00419144*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C348 00419148*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8041C34C 0041914C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C350 00419150*/ PPC::Runtime::ASM::bne(.L_8041C444);
/*8041C354 00419154*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E5D70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C358 00419158*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*8041C35C 0041915C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C360 00419160*/ PPC::Runtime::ASM::bne(.L_8041C3D0);
/*8041C364 00419164*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C368 00419168*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8041C36C 0041916C*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C370 00419170*/ PPC::Runtime::ASM::bne(.L_8041C3A0);
/*8041C374 00419174*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f1);
/*8041C378 00419178*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C37C 0041917C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C380 00419180*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C384 00419184*/ PPC::Runtime::ASM::fnmsubs(context->f2, context->f3, context->f4, context->f2);
/*8041C388 00419188*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C38C 0041918C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f2, context->f0);
/*8041C390 00419190*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C394 00419194*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*8041C398 00419198*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8041C39C 0041919C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041C3A0, 0x8041C3A0) //this is a jump label
/*8041C3A0 004191A0*/ PPC::Runtime::ASM::fsub(context->f3, context->f2, context->f1);
/*8041C3A4 004191A4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3A8 004191A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3AC 004191AC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3B0 004191B0*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C3B4 004191B4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3B8 004191B8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C3BC 004191BC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C3C0 004191C0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C3C4 004191C4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C3C8 004191C8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*8041C3CC 004191CC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041C3D0, 0x8041C3D0) //this is a jump label
/*8041C3D0 004191D0*/ PPC::Runtime::ASM::fsub(context->f1, context->f0, context->f1);
/*8041C3D4 004191D4*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3D8 004191D8*/ PPC::Runtime::ASM::frsp(context->f3, context->f1);
/*8041C3DC 004191DC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C3E0 004191E0*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C3E4 004191E4*/ PPC::Runtime::ASM::bne(.L_8041C414);
/*8041C3E8 004191E8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C3EC 004191EC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3F0 004191F0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3F4 004191F4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C3F8 004191F8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C3FC 004191FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C400 00419200*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C404 00419204*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C408 00419208*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C40C 0041920C*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*8041C410 00419210*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041C414, 0x8041C414) //this is a jump label
/*8041C414 00419214*/ PPC::Runtime::ASM::fsub(context->f3, context->f2, context->f3);
/*8041C418 00419218*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C41C 0041921C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C420 00419220*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C424 00419224*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C428 00419228*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C42C 0041922C*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C430 00419230*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C434 00419234*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C438 00419238*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C43C 0041923C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*8041C440 00419240*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041C444, 0x8041C444) //this is a jump label
/*8041C444 00419244*/ PPC::Runtime::ASM::fsub(context->f2, context->f1, context->f0);
/*8041C448 00419248*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E5D70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C44C 0041924C*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8041C450 00419250*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8041C454 00419254*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C458 00419258*/ PPC::Runtime::ASM::bne(.L_8041C4C8);
/*8041C45C 0041925C*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C460 00419260*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C464 00419264*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C468 00419268*/ PPC::Runtime::ASM::bne(.L_8041C498);
/*8041C46C 0041926C*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C470 00419270*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C474 00419274*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C478 00419278*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C47C 0041927C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C480 00419280*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C484 00419284*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C488 00419288*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C48C 0041928C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C490 00419290*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C494 00419294*/ PPC::Runtime::ASM::b(.L_8041C538);
RUNTIME_PPC_JUMP_LABEL(.L_8041C498, 0x8041C498) //this is a jump label
/*8041C498 00419298*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8041C49C 0041929C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4A0 004192A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4A4 004192A4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4A8 004192A8*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C4AC 004192AC*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4B0 004192B0*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C4B4 004192B4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C4B8 004192B8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C4BC 004192BC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C4C0 004192C0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8041C4C4 004192C4*/ PPC::Runtime::ASM::b(.L_8041C538);
RUNTIME_PPC_JUMP_LABEL(.L_8041C4C8, 0x8041C4C8) //this is a jump label
/*8041C4C8 004192C8*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8041C4CC 004192CC*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E5D98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4D0 004192D0*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8041C4D4 004192D4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8041C4D8 004192D8*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8041C4DC 004192DC*/ PPC::Runtime::ASM::bne(.L_8041C50C);
/*8041C4E0 004192E0*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8041C4E4 004192E4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4E8 004192E8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D7C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4EC 004192EC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4F0 004192F0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8041C4F4 004192F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C4F8 004192F8*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8041C4FC 004192FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8041C500 00419300*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8041C504 00419304*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C508 00419308*/ PPC::Runtime::ASM::b(.L_8041C538);
RUNTIME_PPC_JUMP_LABEL(.L_8041C50C, 0x8041C50C) //this is a jump label
/*8041C50C 0041930C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8041C510 00419310*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E5D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C514 00419314*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E5D8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C518 00419318*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5D88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C51C 0041931C*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8041C520 00419320*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E5D84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8041C524 00419324*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8041C528 00419328*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8041C52C 0041932C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8041C530 00419330*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8041C534 00419334*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8041C538, 0x8041C538) //this is a jump label
/*8041C538 00419338*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8041C53C 0041933C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8041C540, 0x8041C540) //this is a jump label
/*8041C540 00419340*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*8041C544 00419344*/ PPC::Runtime::ASM::blr();
}