//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80057468.hpp"
#include "fn_80057598.hpp"
#include "fn_800D5FB0.hpp"
#include "fn_800D5FB0.hpp"
#include "fn_grGetStageScale.hpp"
#include "fn_80057620.hpp"
#include "fn_800D5F3C.hpp"
#include "fn_800D5F3C.hpp"



void fn_800D5FD0(PPC::Runtime::GCContext* context)
{
/*800D5FD0 000D2DD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D5FD4 000D2DD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D5FD8 000D2DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D5FDC 000D2DDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D5FE0 000D2DE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D5FE4 000D2DE4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800D5FE8 000D2DE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800D5FEC 000D2DEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800D5FF0 000D2DF0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800D5FF4 000D2DF4*/ PPC::Runtime::ASM::beq(.L_800D607C);
/*800D5FF8 000D2DF8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*800D5FFC 000D2DFC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*800D6000 000D2E00*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800D6004 000D2E04*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*800D6008 000D2E08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*800D600C 000D2E0C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800D6010 000D2E10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*800D6014 000D2E14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800D6018 000D2E18*/ PPC::Runtime::ASM::bl(fn_80057468);
/*800D601C 000D2E1C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800D6020 000D2E20*/ PPC::Runtime::ASM::bl(fn_80057598);
/*800D6024 000D2E24*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD6DC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D6028 000D2E28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D602C 000D2E2C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_29 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D6030 000D2E30*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*800D6034 000D2E34*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*800D6038 000D2E38*/ PPC::Runtime::ASM::lis(context->r4, fn_800D5FB0 @ Get_MemoryOffset_HighBit);
/*800D603C 000D2E3C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D6040 000D2E40*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800D5FB0 @ Get_MemoryOffset_LowBit);
/*800D6044 000D2E44*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800D6048 000D2E48*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*800D604C 000D2E4C*/ PPC::Runtime::ASM::bl(fn_GObj_AddGXLink);
/*800D6050 000D2E50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D6054 000D2E54*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800D6058 000D2E58*/ PPC::Runtime::ASM::bl(fn_HSD_LObjReqAnimAll);
/*800D605C 000D2E5C*/ PPC::Runtime::ASM::bl(fn_grGetStageScale);
/*800D6060 000D2E60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*800D6064 000D2E64*/ PPC::Runtime::ASM::bl(fn_80057620);
/*800D6068 000D2E68*/ PPC::Runtime::ASM::lis(context->r4, fn_800D5F3C @ Get_MemoryOffset_HighBit);
/*800D606C 000D2E6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D6070 000D2E70*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_800D5F3C @ Get_MemoryOffset_LowBit);
/*800D6074 000D2E74*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*800D6078 000D2E78*/ PPC::Runtime::ASM::bl(fn_804288A4);
RUNTIME_PPC_JUMP_LABEL(.L_800D607C, 0x800D607C) //this is a jump label
/*800D607C 000D2E7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D6080 000D2E80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D6084 000D2E84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800D6088 000D2E88*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D608C 000D2E8C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D6090 000D2E90*/ PPC::Runtime::ASM::blr();
}