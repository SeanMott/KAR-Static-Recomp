//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_plGetPlayerKind.hpp"



void fn_800109F8(PPC::Runtime::GCContext* context)
{
/*800109F8 0000D7F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800109FC 0000D7FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80010A00 0000D800*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80010A04 0000D804*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80010A08 0000D808*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80010A0C 0000D80C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80010A10 0000D810*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x830);
/*80010A14 0000D814*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*80010A18 0000D818*/ PPC::Runtime::ASM::mr(context->r30, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_80010A1C, 0x80010A1C) //this is a jump label
/*80010A1C 0000D81C*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80010A20 0000D820*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*80010A24 0000D824*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80010A28 0000D828*/ PPC::Runtime::ASM::beq(.L_80010AA0);
/*80010A2C 0000D82C*/ PPC::Runtime::ASM::add(context->r29, context->r28, context->r27);
/*80010A30 0000D830*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x200, context->r29));
/*80010A34 0000D834*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80010A38 0000D838*/ PPC::Runtime::ASM::bne(.L_80010AA0);
/*80010A3C 0000D83C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80010A40 0000D840*/ PPC::Runtime::ASM::mr(context->r31, context->r28);
/*80010A44 0000D844*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80010A48 0000D848*/ PPC::Runtime::ASM::li(context->r26, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80010A4C, 0x80010A4C) //this is a jump label
/*80010A4C 0000D84C*/ PPC::Runtime::ASM::cmpw(context->r27, context->r26);
/*80010A50 0000D850*/ PPC::Runtime::ASM::beq(.L_80010A90);
/*80010A54 0000D854*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80010A58 0000D858*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*80010A5C 0000D85C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80010A60 0000D860*/ PPC::Runtime::ASM::beq(.L_80010A90);
/*80010A64 0000D864*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x200);
/*80010A68 0000D868*/ PPC::Runtime::ASM::lbzx(context->r0, context->r28, context->r0);
/*80010A6C 0000D86C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80010A70 0000D870*/ PPC::Runtime::ASM::bne(.L_80010A90);
/*80010A74 0000D874*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r30));
/*80010A78 0000D878*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r31));
/*80010A7C 0000D87C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*80010A80 0000D880*/ PPC::Runtime::ASM::bge(.L_80010A90);
/*80010A84 0000D884*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*80010A88 0000D888*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80010A8C 0000D88C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_80010A90, 0x80010A90) //this is a jump label
/*80010A90 0000D890*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*80010A94 0000D894*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*80010A98 0000D898*/ PPC::Runtime::ASM::cmpwi(context->r26, 0x5);
/*80010A9C 0000D89C*/ PPC::Runtime::ASM::blt(.L_80010A4C);
RUNTIME_PPC_JUMP_LABEL(.L_80010AA0, 0x80010AA0) //this is a jump label
/*80010AA0 0000D8A0*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80010AA4 0000D8A4*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*80010AA8 0000D8A8*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x5);
/*80010AAC 0000D8AC*/ PPC::Runtime::ASM::blt(.L_80010A1C);
/*80010AB0 0000D8B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80010AB4 0000D8B4*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80010AB8 0000D8B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80010ABC 0000D8BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80010AC0 0000D8C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80010AC4 0000D8C4*/ PPC::Runtime::ASM::blr();
}