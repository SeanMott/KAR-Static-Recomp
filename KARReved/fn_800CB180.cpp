//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800B60BC.hpp"
#include "fn_800B6040.hpp"



void fn_800CB180(PPC::Runtime::GCContext* context)
{
/*800CB180 000C7F80*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800CB184 000C7F84*/ PPC::Runtime::ASM::mflr(context->r0);
/*800CB188 000C7F88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CB18C 000C7F8C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CB190 000C7F90*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800CB194 000C7F94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x184, context->r3));
/*800CB198 000C7F98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*800CB19C 000C7F9C*/ PPC::Runtime::ASM::bne(.L_800CB1EC);
/*800CB1A0 000C7FA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*800CB1A4 000C7FA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r31));
/*800CB1A8 000C7FA8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*800CB1AC 000C7FAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800CB1B0 000C7FB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*800CB1B4 000C7FB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*800CB1B8 000C7FB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r31));
/*800CB1BC 000C7FBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*800CB1C0 000C7FC0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*800CB1C4 000C7FC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*800CB1C8 000C7FC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*800CB1CC 000C7FCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r31));
/*800CB1D0 000C7FD0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*800CB1D4 000C7FD4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*800CB1D8 000C7FD8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*800CB1DC 000C7FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*800CB1E0 000C7FE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*800CB1E4 000C7FE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*800CB1E8 000C7FE8*/ PPC::Runtime::ASM::b(.L_800CB2AC);
RUNTIME_PPC_JUMP_LABEL(.L_800CB1EC, 0x800CB1EC) //this is a jump label
/*800CB1EC 000C7FEC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*800CB1F0 000C7FF0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*800CB1F4 000C7FF4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DF4F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800CB1F8 000C7FF8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB1FC 000C7FFC*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB200 000C8000*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r31));
/*800CB204 000C8004*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r31));
/*800CB208 000C8008*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800CB20C 000C800C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB210 000C8010*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB214 000C8014*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800CB218 000C8018*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc8, context->r31));
/*800CB21C 000C801C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*800CB220 000C8020*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB224 000C8024*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB228 000C8028*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*800CB22C 000C802C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcc, context->r31));
/*800CB230 000C8030*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*800CB234 000C8034*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB238 000C8038*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB23C 000C803C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r31));
/*800CB240 000C8040*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r31));
/*800CB244 000C8044*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*800CB248 000C8048*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB24C 000C804C*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB250 000C8050*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r31));
/*800CB254 000C8054*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r31));
/*800CB258 000C8058*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r31));
/*800CB25C 000C805C*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB260 000C8060*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB264 000C8064*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r31));
/*800CB268 000C8068*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r31));
/*800CB26C 000C806C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*800CB270 000C8070*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB274 000C8074*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB278 000C8078*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*800CB27C 000C807C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r31));
/*800CB280 000C8080*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*800CB284 000C8084*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB288 000C8088*/ PPC::Runtime::ASM::fmadds(context->f1, context->f0, context->f1, context->f2);
/*800CB28C 000C808C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*800CB290 000C8090*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r31));
/*800CB294 000C8094*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*800CB298 000C8098*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*800CB29C 000C809C*/ PPC::Runtime::ASM::fmadds(context->f0, context->f0, context->f1, context->f2);
/*800CB2A0 000C80A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*800CB2A4 000C80A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r31));
/*800CB2A8 000C80A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_800CB2AC, 0x800CB2AC) //this is a jump label
/*800CB2AC 000C80AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x94, context->r31));
/*800CB2B0 000C80B0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xe8);
/*800CB2B4 000C80B4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800CB2B8 000C80B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x14);
/*800CB2BC 000C80BC*/ PPC::Runtime::ASM::bl(fn_800B60BC);
/*800CB2C0 000C80C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800CB2C4 000C80C4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800CB2C8 000C80C8*/ PPC::Runtime::ASM::bl(fn_800B6040);
/*800CB2CC 000C80CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800CB2D0 000C80D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800CB2D4 000C80D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800CB2D8 000C80D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800CB2DC 000C80DC*/ PPC::Runtime::ASM::blr();
}