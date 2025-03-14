//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_StateInitTev.hpp"
#include "fn_HSD_SetMaterialColor.hpp"
#include "fn_HSD_SetMaterialShininess.hpp"
#include "fn_HSD_TObjSetup_ParseDatFile_ImageStructure.hpp"
#include "fn_HSD_TObjSetup_ParseDatFile_ImageStructureTextureCoordGen.hpp"
#include "fn_HSD_SetupRenderModeWithCustomPE?.hpp"



void fn_HSD_MObjSetup(PPC::Runtime::GCContext* context)
{
/*803FAC18 003F7A18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803FAC1C 003F7A1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FAC20 003F7A20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803FAC24 003F7A24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803FAC28 003F7A28*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803FAC2C 003F7A2C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803FAC30 003F7A30*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803FAC34 003F7A34*/ PPC::Runtime::ASM::bl(fn_HSD_StateInitTev);
/*803FAC38 003F7A38*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803FAC3C 003F7A3C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x10);
/*803FAC40 003F7A40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*803FAC44 003F7A44*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803FAC48 003F7A48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*803FAC4C 003F7A4C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*803FAC50 003F7A50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803FAC54 003F7A54*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803FAC58 003F7A58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803FAC5C 003F7A5C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FAC60 003F7A60*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803FAC64 003F7A64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*803FAC68 003F7A68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803FAC6C 003F7A6C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803FAC70 003F7A70*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*803FAC74 003F7A74*/ PPC::Runtime::ASM::bl(fn_HSD_SetMaterialColor);
/*803FAC78 003F7A78*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 28, 28);
/*803FAC7C 003F7A7C*/ PPC::Runtime::ASM::beq(.L_803FAC8C);
/*803FAC80 003F7A80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*803FAC84 003F7A84*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*803FAC88 003F7A88*/ PPC::Runtime::ASM::bl(fn_HSD_SetMaterialShininess);
RUNTIME_PPC_JUMP_LABEL(.L_803FAC8C, 0x803FAC8C) //this is a jump label
/*803FAC8C 003F7A8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803FAC90 003F7A90*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 5, 5);
/*803FAC94 003F7A94*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*803FAC98 003F7A98*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAC9C 003F7A9C*/ PPC::Runtime::ASM::beq(.L_803FACC8);
/*803FACA0 003F7AA0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE1F4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FACA4 003F7AA4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803FACA8 003F7AA8*/ PPC::Runtime::ASM::beq(.L_803FACC8);
/*803FACAC 003F7AAC*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x14);
/*803FACB0 003F7AB0*/ PPC::Runtime::ASM::b(.L_803FACB8);
RUNTIME_PPC_JUMP_LABEL(.L_803FACB4, 0x803FACB4) //this is a jump label
/*803FACB4 003F7AB4*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_803FACB8, 0x803FACB8) //this is a jump label
/*803FACB8 003F7AB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803FACBC 003F7ABC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FACC0 003F7AC0*/ PPC::Runtime::ASM::bne(.L_803FACB4);
/*803FACC4 003F7AC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803FACC8, 0x803FACC8) //this is a jump label
/*803FACC8 003F7AC8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r31, 0, 19, 19);
/*803FACCC 003F7ACC*/ PPC::Runtime::ASM::beq(.L_803FACF8);
/*803FACD0 003F7AD0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FACD4 003F7AD4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FACD8 003F7AD8*/ PPC::Runtime::ASM::beq(.L_803FACF8);
/*803FACDC 003F7ADC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*803FACE0 003F7AE0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803FACE4 003F7AE4*/ PPC::Runtime::ASM::beq(.L_803FACF8);
/*803FACE8 003F7AE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FACEC 003F7AEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803FACF0 003F7AF0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE1F0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FACF4 003F7AF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_803FACF8, 0x803FACF8) //this is a jump label
/*803FACF8 003F7AF8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FACFC 003F7AFC*/ PPC::Runtime::ASM::bl(fn_HSD_TObjSetup_ParseDatFile_ImageStructure);
/*803FAD00 003F7B00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAD04 003F7B04*/ PPC::Runtime::ASM::bl(fn_HSD_TObjSetup_ParseDatFile_ImageStructureTextureCoordGen);
/*803FAD08 003F7B08*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803FAD0C 003F7B0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803FAD10 003F7B10*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*803FAD14 003F7B14*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAD18 003F7B18*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r6));
/*803FAD1C 003F7B1C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FAD20 003F7B20*/ PPC::Runtime::ASM::bctrl();
/*803FAD24 003F7B24*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*803FAD28 003F7B28*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FAD2C 003F7B2C*/ PPC::Runtime::ASM::bl(fn_HSD_SetupRenderModeWithCustomPE?);
/*803FAD30 003F7B30*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803FAD34 003F7B34*/ PPC::Runtime::ASM::beq(.L_803FAD40);
/*803FAD38 003F7B38*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803FAD3C 003F7B3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_803FAD40, 0x803FAD40) //this is a jump label
/*803FAD40 003F7B40*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803FAD44 003F7B44*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803FAD48 003F7B48*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*803FAD4C 003F7B4C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803FAD50 003F7B50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FAD54 003F7B54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803FAD58 003F7B58*/ PPC::Runtime::ASM::blr();
}