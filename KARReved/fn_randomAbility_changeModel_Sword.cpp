//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A6428.hpp"
#include "fn_80196DF4.hpp"
#include "fn_800550F4.hpp"



void fn_randomAbility_changeModel_Sword(PPC::Runtime::GCContext* context)
{
/*801A6C10 001A3A10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A6C14 001A3A14*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A6C18 001A3A18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A6C1C 001A3A1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A6C20 001A3A20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A6C24 001A3A24*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A6C28 001A3A28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r3));
/*801A6C2C 001A3A2C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A6C30 001A3A30*/ PPC::Runtime::ASM::bne(.L_801A6CCC);
/*801A6C34 001A3A34*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801A6C38 001A3A38*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559EE8 @ Get_MemoryOffset_HighBit);
/*801A6C3C 001A3A3C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559EE8 @ Get_MemoryOffset_LowBit);
/*801A6C40 001A3A40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A6C44 001A3A44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*801A6C48 001A3A48*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801A6C4C 001A3A4C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r30));
/*801A6C50 001A3A50*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801A6C54 001A3A54*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801A6C58 001A3A58*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6C5C 001A3A5C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A6C60 001A3A60*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A6C64 001A3A64*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A6C68 001A3A68*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A6C6C 001A3A6C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A6C70 001A3A70*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A6C74 001A3A74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6C78 001A3A78*/ PPC::Runtime::ASM::bl(fn_801A6428);
/*801A6C7C 001A3A7C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*801A6C80 001A3A80*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x910);
/*801A6C84 001A3A84*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A6C88 001A3A88*/ PPC::Runtime::ASM::bl(fn_80196DF4);
/*801A6C8C 001A3A8C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801A6C90 001A3A90*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801A6C94 001A3A94*/ PPC::Runtime::ASM::beq(.L_801A6CCC);
/*801A6C98 001A3A98*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6C9C 001A3A9C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A6CA0 001A3AA0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A6CA4 001A3AA4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A6CA8 001A3AA8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6CAC 001A3AAC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A6CB0 001A3AB0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A6CB4 001A3AB4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A6CB8 001A3AB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6CBC 001A3ABC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801A6CC0 001A3AC0*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A6CC4 001A3AC4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6CC8 001A3AC8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A6CCC, 0x801A6CCC) //this is a jump label
/*801A6CCC 001A3ACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A6CD0 001A3AD0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A6CD4 001A3AD4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A6CD8 001A3AD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A6CDC 001A3ADC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A6CE0 001A3AE0*/ PPC::Runtime::ASM::blr();
}