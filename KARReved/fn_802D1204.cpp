//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D10BC.hpp"



void fn_802D1204(PPC::Runtime::GCContext* context)
{
/*802D1204 002CE004*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*802D1208 002CE008*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D120C 002CE00C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802D1210 002CE010*/ PPC::Runtime::ASM::mr(context->r0, context->r4);
/*802D1214 002CE014*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802D1218 002CE018*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*802D121C 002CE01C*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*802D1220 002CE020*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802D1224 002CE024*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802D1228 002CE028*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x14);
/*802D122C 002CE02C*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*802D1230 002CE030*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*802D1234 002CE034*/ PPC::Runtime::ASM::bl(fn_802D10BC);
/*802D1238 002CE038*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D123C 002CE03C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802D1240 002CE040*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D1244 002CE044*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D1248 002CE048*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*802D124C 002CE04C*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802D1250 002CE050*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*802D1254 002CE054*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*802D1258 002CE058*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D125C 002CE05C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D1260 002CE060*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*802D1264 002CE064*/ PPC::Runtime::ASM::beq(.L_802D1274);
/*802D1268 002CE068*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802D126C 002CE06C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802D1270 002CE070*/ PPC::Runtime::ASM::bl(fn_PSVECNormalize);
RUNTIME_PPC_JUMP_LABEL(.L_802D1274, 0x802D1274) //this is a jump label
/*802D1274 002CE074*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802D1278 002CE078*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*802D127C 002CE07C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*802D1280 002CE080*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D1284 002CE084*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*802D1288 002CE088*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802D128C 002CE08C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D1290 002CE090*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802D1294 002CE094*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D1298 002CE098*/ PPC::Runtime::ASM::bl(fn_PSVECSubtract);
/*802D129C 002CE09C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802D12A0 002CE0A0*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*802D12A4 002CE0A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802D12A8 002CE0A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*802D12AC 002CE0AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D12B0 002CE0B0*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802D12B4 002CE0B4*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D12B8 002CE0B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*802D12BC 002CE0BC*/ PPC::Runtime::ASM::bl(fn_PSVECDotProduct);
/*802D12C0 002CE0C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*802D12C4 002CE0C4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*802D12C8 002CE0C8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*802D12CC 002CE0CC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D12D0 002CE0D0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*802D12D4 002CE0D4*/ PPC::Runtime::ASM::blr();
}