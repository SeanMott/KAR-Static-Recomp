//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A6428.hpp"
#include "fn_80196DF4.hpp"
#include "fn_800550F4.hpp"
#include "fn_ability_Spike_changeNeedle.hpp"



void fn_randomAbility_changeModel_Spike(PPC::Runtime::GCContext* context)
{
/*801A719C 001A3F9C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A71A0 001A3FA0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A71A4 001A3FA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A71A8 001A3FA8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A71AC 001A3FAC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A71B0 001A3FB0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A71B4 001A3FB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r3));
/*801A71B8 001A3FB8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A71BC 001A3FBC*/ PPC::Runtime::ASM::bne(.L_801A7264);
/*801A71C0 001A3FC0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801A71C4 001A3FC4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559EE8 @ Get_MemoryOffset_HighBit);
/*801A71C8 001A3FC8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559EE8 @ Get_MemoryOffset_LowBit);
/*801A71CC 001A3FCC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A71D0 001A3FD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*801A71D4 001A3FD4*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801A71D8 001A3FD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r30));
/*801A71DC 001A3FDC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801A71E0 001A3FE0*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801A71E4 001A3FE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A71E8 001A3FE8*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A71EC 001A3FEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A71F0 001A3FF0*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A71F4 001A3FF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A71F8 001A3FF8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A71FC 001A3FFC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A7200 001A4000*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7204 001A4004*/ PPC::Runtime::ASM::bl(fn_801A6428);
/*801A7208 001A4008*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*801A720C 001A400C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x910);
/*801A7210 001A4010*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A7214 001A4014*/ PPC::Runtime::ASM::bl(fn_80196DF4);
/*801A7218 001A4018*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801A721C 001A401C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801A7220 001A4020*/ PPC::Runtime::ASM::beq(.L_801A7258);
/*801A7224 001A4024*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7228 001A4028*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A722C 001A402C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A7230 001A4030*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A7234 001A4034*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7238 001A4038*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A723C 001A403C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A7240 001A4040*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A7244 001A4044*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7248 001A4048*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801A724C 001A404C*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A7250 001A4050*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A7254 001A4054*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A7258, 0x801A7258) //this is a jump label
/*801A7258 001A4058*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A725C 001A405C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A7260 001A4060*/ PPC::Runtime::ASM::bl(fn_ability_Spike_changeNeedle);
RUNTIME_PPC_JUMP_LABEL(.L_801A7264, 0x801A7264) //this is a jump label
/*801A7264 001A4064*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7268 001A4068*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A726C 001A406C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A7270 001A4070*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A7274 001A4074*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A7278 001A4078*/ PPC::Runtime::ASM::blr();
}