//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A6428.hpp"
#include "fn_80196DF4.hpp"
#include "fn_800550F4.hpp"



void fn_ability_Sleep_giveHat(PPC::Runtime::GCContext* context)
{
/*801A6B38 001A3938*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A6B3C 001A393C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A6B40 001A3940*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A6B44 001A3944*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A6B48 001A3948*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A6B4C 001A394C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801A6B50 001A3950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r3));
/*801A6B54 001A3954*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*801A6B58 001A3958*/ PPC::Runtime::ASM::bne(.L_801A6BF4);
/*801A6B5C 001A395C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*801A6B60 001A3960*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559EE8 @ Get_MemoryOffset_HighBit);
/*801A6B64 001A3964*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80559EE8 @ Get_MemoryOffset_LowBit);
/*801A6B68 001A3968*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A6B6C 001A396C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*801A6B70 001A3970*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*801A6B74 001A3974*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x904, context->r30));
/*801A6B78 001A3978*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801A6B7C 001A397C*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*801A6B80 001A3980*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6B84 001A3984*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A6B88 001A3988*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801A6B8C 001A398C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A6B90 001A3990*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A6B94 001A3994*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 7, 24, 24);
/*801A6B98 001A3998*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa30, context->r30));
/*801A6B9C 001A399C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6BA0 001A39A0*/ PPC::Runtime::ASM::bl(fn_801A6428);
/*801A6BA4 001A39A4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*801A6BA8 001A39A8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x910);
/*801A6BAC 001A39AC*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x900);
/*801A6BB0 001A39B0*/ PPC::Runtime::ASM::bl(fn_80196DF4);
/*801A6BB4 001A39B4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*801A6BB8 001A39B8*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*801A6BBC 001A39BC*/ PPC::Runtime::ASM::beq(.L_801A6BF4);
/*801A6BC0 001A39C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6BC4 001A39C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A6BC8 001A39C8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A6BCC 001A39CC*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A6BD0 001A39D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6BD4 001A39D4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A6BD8 001A39D8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A6BDC 001A39DC*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A6BE0 001A39E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6BE4 001A39E4*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*801A6BE8 001A39E8*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A6BEC 001A39EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r30));
/*801A6BF0 001A39F0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A6BF4, 0x801A6BF4) //this is a jump label
/*801A6BF4 001A39F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A6BF8 001A39F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A6BFC 001A39FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801A6C00 001A3A00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A6C04 001A3A04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A6C08 001A3A08*/ PPC::Runtime::ASM::blr();
}