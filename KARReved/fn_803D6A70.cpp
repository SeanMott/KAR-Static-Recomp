//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DCStoreRange.hpp"



void fn_803D6A70(PPC::Runtime::GCContext* context)
{
/*803D6A70 003D3870*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D6A74 003D3874*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D6A78 003D3878*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803D6A7C 003D387C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DDEC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D6A80 003D3880*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*803D6A84 003D3884*/ PPC::Runtime::ASM::addi(context->r5, context->r6, 0x2c);
/*803D6A88 003D3888*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D6A8C 003D388C*/ PPC::Runtime::ASM::bne(.L_803D6C48);
/*803D6A90 003D3890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*803D6A94 003D3894*/ PPC::Runtime::ASM::srawi(context->r6, context->r0, 1);
/*803D6A98 003D3898*/ PPC::Runtime::ASM::addze(context->r6, context->r6);
/*803D6A9C 003D389C*/ PPC::Runtime::ASM::subi(context->r0, context->r6, 0x1);
/* 803D6AA0 003D38A0  7C 0A 03 79 */ mr. context->r10 , context->r0
/*803D6AA4 003D38A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*803D6AA8 003D38A8*/ PPC::Runtime::ASM::add(context->r8, context->r4, context->r0);
/*803D6AAC 003D38AC*/ PPC::Runtime::ASM::addi(context->r6, context->r10, 0x1);
/*803D6AB0 003D38B0*/ PPC::Runtime::ASM::blt(.L_803D6E00);
/* 803D6AB4 003D38B4  54 C0 F0 BF */ srwi. context->r0 , context->r6 , 2
/*803D6AB8 003D38B8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803D6ABC 003D38BC*/ PPC::Runtime::ASM::beq(.L_803D6BF0);
RUNTIME_PPC_JUMP_LABEL(.L_803D6AC0, 0x803D6AC0) //this is a jump label
/*803D6AC0 003D38C0*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r10);
/*803D6AC4 003D38C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6AC8 003D38C8*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*803D6ACC 003D38CC*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 24);
/*803D6AD0 003D38D0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6AD4 003D38D4*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6AD8 003D38D8*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6ADC 003D38DC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6AE0 003D38E0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6AE4 003D38E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6AE8 003D38E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6AEC 003D38EC*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r10);
/*803D6AF0 003D38F0*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*803D6AF4 003D38F4*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 28);
/*803D6AF8 003D38F8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6AFC 003D38FC*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6B00 003D3900*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6B04 003D3904*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6B08 003D3908*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6B0C 003D390C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*803D6B10 003D3910*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6B14 003D3914*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 24);
/*803D6B18 003D3918*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6B1C 003D391C*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6B20 003D3920*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6B24 003D3924*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6B28 003D3928*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6B2C 003D392C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2, context->r8));
/*803D6B30 003D3930*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6B34 003D3934*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r10);
/*803D6B38 003D3938*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*803D6B3C 003D393C*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 28);
/*803D6B40 003D3940*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6B44 003D3944*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6B48 003D3948*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6B4C 003D394C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6B50 003D3950*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6B54 003D3954*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r8));
/*803D6B58 003D3958*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6B5C 003D395C*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 24);
/*803D6B60 003D3960*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6B64 003D3964*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6B68 003D3968*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6B6C 003D396C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6B70 003D3970*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6B74 003D3974*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r8));
/*803D6B78 003D3978*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6B7C 003D397C*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r10);
/*803D6B80 003D3980*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*803D6B84 003D3984*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 28);
/*803D6B88 003D3988*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6B8C 003D398C*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6B90 003D3990*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6B94 003D3994*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6B98 003D3998*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6B9C 003D399C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x3, context->r8));
/*803D6BA0 003D39A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6BA4 003D39A4*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 24);
/*803D6BA8 003D39A8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6BAC 003D39AC*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6BB0 003D39B0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6BB4 003D39B4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6BB8 003D39B8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6BBC 003D39BC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x6, context->r8));
/*803D6BC0 003D39C0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6BC4 003D39C4*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 28);
/*803D6BC8 003D39C8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6BCC 003D39CC*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6BD0 003D39D0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6BD4 003D39D4*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6BD8 003D39D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6BDC 003D39DC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x5, context->r8));
/*803D6BE0 003D39E0*/ PPC::Runtime::ASM::subi(context->r8, context->r8, 0x8);
/*803D6BE4 003D39E4*/ PPC::Runtime::ASM::bdnz(.L_803D6AC0);
/*803D6BE8 003D39E8*/ PPC::Runtime::ASM::andi.(context->r6, context->r6, 0x3);
/*803D6BEC 003D39EC*/ PPC::Runtime::ASM::beq(.L_803D6E00);
RUNTIME_PPC_JUMP_LABEL(.L_803D6BF0, 0x803D6BF0) //this is a jump label
/*803D6BF0 003D39F0*/ PPC::Runtime::ASM::mtctr(context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_803D6BF4, 0x803D6BF4) //this is a jump label
/*803D6BF4 003D39F4*/ PPC::Runtime::ASM::add(context->r9, context->r3, context->r10);
/*803D6BF8 003D39F8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6BFC 003D39FC*/ PPC::Runtime::ASM::subi(context->r10, context->r10, 0x1);
/*803D6C00 003D3A00*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 24);
/*803D6C04 003D3A04*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6C08 003D3A08*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6C0C 003D3A0C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6C10 003D3A10*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6C14 003D3A14*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6C18 003D3A18*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6C1C 003D3A1C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*803D6C20 003D3A20*/ PPC::Runtime::ASM::extrwi(context->r7, context->r0, 2, 28);
/*803D6C24 003D3A24*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6C28 003D3A28*/ PPC::Runtime::ASM::lbzx(context->r7, context->r5, context->r7);
/*803D6C2C 003D3A2C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6C30 003D3A30*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 28);
/*803D6C34 003D3A34*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 0, 24, 27);
/*803D6C38 003D3A38*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r8));
/*803D6C3C 003D3A3C*/ PPC::Runtime::ASM::subi(context->r8, context->r8, 0x2);
/*803D6C40 003D3A40*/ PPC::Runtime::ASM::bdnz(.L_803D6BF4);
/*803D6C44 003D3A44*/ PPC::Runtime::ASM::b(.L_803D6E00);
RUNTIME_PPC_JUMP_LABEL(.L_803D6C48, 0x803D6C48) //this is a jump label
/*803D6C48 003D3A48*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*803D6C4C 003D3A4C*/ PPC::Runtime::ASM::bne(.L_803D6E00);
/*803D6C50 003D3A50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r6));
/*803D6C54 003D3A54*/ PPC::Runtime::ASM::srawi(context->r6, context->r0, 2);
/*803D6C58 003D3A58*/ PPC::Runtime::ASM::addze(context->r6, context->r6);
/* 803D6C5C 003D3A5C  35 26 FF FF */ subic. context->r9 , context->r6 , 0x1
/*803D6C60 003D3A60*/ PPC::Runtime::ASM::slwi(context->r0, context->r9, 2);
/*803D6C64 003D3A64*/ PPC::Runtime::ASM::add(context->r7, context->r4, context->r0);
/*803D6C68 003D3A68*/ PPC::Runtime::ASM::addi(context->r6, context->r9, 0x1);
/*803D6C6C 003D3A6C*/ PPC::Runtime::ASM::blt(.L_803D6E00);
/* 803D6C70 003D3A70  54 C0 F0 BF */ srwi. context->r0 , context->r6 , 2
/*803D6C74 003D3A74*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803D6C78 003D3A78*/ PPC::Runtime::ASM::beq(.L_803D6DAC);
RUNTIME_PPC_JUMP_LABEL(.L_803D6C7C, 0x803D6C7C) //this is a jump label
/*803D6C7C 003D3A7C*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r9);
/*803D6C80 003D3A80*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6C84 003D3A84*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*803D6C88 003D3A88*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 24);
/*803D6C8C 003D3A8C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6C90 003D3A90*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803D6C94 003D3A94*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6C98 003D3A98*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6C9C 003D3A9C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6CA0 003D3AA0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*803D6CA4 003D3AA4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6CA8 003D3AA8*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*803D6CAC 003D3AAC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6CB0 003D3AB0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*803D6CB4 003D3AB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6CB8 003D3AB8*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r9);
/*803D6CBC 003D3ABC*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*803D6CC0 003D3AC0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6CC4 003D3AC4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6CC8 003D3AC8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r7));
/*803D6CCC 003D3ACC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6CD0 003D3AD0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 24);
/*803D6CD4 003D3AD4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6CD8 003D3AD8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r7));
/*803D6CDC 003D3ADC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6CE0 003D3AE0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6CE4 003D3AE4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6CE8 003D3AE8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x3, context->r7));
/*803D6CEC 003D3AEC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6CF0 003D3AF0*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*803D6CF4 003D3AF4*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6CF8 003D3AF8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x2, context->r7));
/*803D6CFC 003D3AFC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D00 003D3B00*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r9);
/*803D6D04 003D3B04*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*803D6D08 003D3B08*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6D0C 003D3B0C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D10 003D3B10*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x1, context->r7));
/*803D6D14 003D3B14*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D18 003D3B18*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 24);
/*803D6D1C 003D3B1C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D20 003D3B20*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r7));
/*803D6D24 003D3B24*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D28 003D3B28*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6D2C 003D3B2C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D30 003D3B30*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x7, context->r7));
/*803D6D34 003D3B34*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D38 003D3B38*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*803D6D3C 003D3B3C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D40 003D3B40*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x6, context->r7));
/*803D6D44 003D3B44*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D48 003D3B48*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r9);
/*803D6D4C 003D3B4C*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*803D6D50 003D3B50*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6D54 003D3B54*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D58 003D3B58*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x5, context->r7));
/*803D6D5C 003D3B5C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D60 003D3B60*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 24);
/*803D6D64 003D3B64*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D68 003D3B68*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xc, context->r7));
/*803D6D6C 003D3B6C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D70 003D3B70*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6D74 003D3B74*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D78 003D3B78*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xb, context->r7));
/*803D6D7C 003D3B7C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D80 003D3B80*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*803D6D84 003D3B84*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D88 003D3B88*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xa, context->r7));
/*803D6D8C 003D3B8C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6D90 003D3B90*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6D94 003D3B94*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6D98 003D3B98*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x9, context->r7));
/*803D6D9C 003D3B9C*/ PPC::Runtime::ASM::subi(context->r7, context->r7, 0x10);
/*803D6DA0 003D3BA0*/ PPC::Runtime::ASM::bdnz(.L_803D6C7C);
/*803D6DA4 003D3BA4*/ PPC::Runtime::ASM::andi.(context->r6, context->r6, 0x3);
/*803D6DA8 003D3BA8*/ PPC::Runtime::ASM::beq(.L_803D6E00);
RUNTIME_PPC_JUMP_LABEL(.L_803D6DAC, 0x803D6DAC) //this is a jump label
/*803D6DAC 003D3BAC*/ PPC::Runtime::ASM::mtctr(context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_803D6DB0, 0x803D6DB0) //this is a jump label
/*803D6DB0 003D3BB0*/ PPC::Runtime::ASM::add(context->r8, context->r3, context->r9);
/*803D6DB4 003D3BB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6DB8 003D3BB8*/ PPC::Runtime::ASM::subi(context->r9, context->r9, 0x1);
/*803D6DBC 003D3BBC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 24);
/*803D6DC0 003D3BC0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6DC4 003D3BC4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*803D6DC8 003D3BC8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6DCC 003D3BCC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 26);
/*803D6DD0 003D3BD0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6DD4 003D3BD4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r7));
/*803D6DD8 003D3BD8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6DDC 003D3BDC*/ PPC::Runtime::ASM::extrwi(context->r0, context->r0, 2, 28);
/*803D6DE0 003D3BE0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6DE4 003D3BE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r7));
/*803D6DE8 003D3BE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*803D6DEC 003D3BEC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*803D6DF0 003D3BF0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r5, context->r0);
/*803D6DF4 003D3BF4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r7));
/*803D6DF8 003D3BF8*/ PPC::Runtime::ASM::subi(context->r7, context->r7, 0x4);
/*803D6DFC 003D3BFC*/ PPC::Runtime::ASM::bdnz(.L_803D6DB0);
RUNTIME_PPC_JUMP_LABEL(.L_803D6E00, 0x803D6E00) //this is a jump label
/*803D6E00 003D3C00*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDEC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D6E04 003D3C04*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803D6E08 003D3C08*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r5));
/*803D6E0C 003D3C0C*/ PPC::Runtime::ASM::bl(fn_DCStoreRange);
/*803D6E10 003D3C10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803D6E14 003D3C14*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803D6E18 003D3C18*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D6E1C 003D3C1C*/ PPC::Runtime::ASM::blr();
}