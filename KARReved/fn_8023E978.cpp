//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_8023E978(PPC::Runtime::GCContext* context)
{
/*8023E978 0023B778*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023E97C 0023B77C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023E980 0023B780*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2AE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E984 0023B784*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8023E988 0023B788*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023E98C 0023B78C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023E990 0023B790*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023E994 0023B794*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8023E998 0023B798*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023E99C 0023B79C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r5));
/*8023E9A0 0023B7A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023E9A4 0023B7A4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8023E9A8 0023B7A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r31));
/*8023E9AC 0023B7AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8023E9B0 0023B7B0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8023E9B4 0023B7B4*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8023E9B8 0023B7B8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8023E9BC 0023B7BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*8023E9C0 0023B7C0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8023E9C4 0023B7C4*/ PPC::Runtime::ASM::bne(.L_8023E9D8);
/*8023E9C8 0023B7C8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72EC @ Get_MemoryOffset_SDA21);
/*8023E9CC 0023B7CC*/ PPC::Runtime::ASM::li(context->r4, 0x333);
/*8023E9D0 0023B7D0*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72F4 @ Get_MemoryOffset_SDA21);
/*8023E9D4 0023B7D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023E9D8, 0x8023E9D8) //this is a jump label
/*8023E9D8 0023B7D8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2AFC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8023E9DC 0023B7DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8023E9E0 0023B7E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8023E9E4 0023B7E4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8023E9E8 0023B7E8*/ PPC::Runtime::ASM::bne(.L_8023EA34);
/*8023E9EC 0023B7EC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8023E9F0 0023B7F0*/ PPC::Runtime::ASM::beq(.L_8023EA34);
/*8023E9F4 0023B7F4*/ PPC::Runtime::ASM::bne(.L_8023EA08);
/*8023E9F8 0023B7F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D72EC @ Get_MemoryOffset_SDA21);
/*8023E9FC 0023B7FC*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8023EA00 0023B800*/ PPC::Runtime::ASM::li(context->r5, lbl_805D72F4 @ Get_MemoryOffset_SDA21);
/*8023EA04 0023B804*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8023EA08, 0x8023EA08) //this is a jump label
/*8023EA08 0023B808*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8023EA0C 0023B80C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8023EA10 0023B810*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8023EA14 0023B814*/ PPC::Runtime::ASM::bne(.L_8023EA24);
/*8023EA18 0023B818*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8023EA1C 0023B81C*/ PPC::Runtime::ASM::beq(.L_8023EA24);
/*8023EA20 0023B820*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8023EA24, 0x8023EA24) //this is a jump label
/*8023EA24 0023B824*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8023EA28 0023B828*/ PPC::Runtime::ASM::bne(.L_8023EA34);
/*8023EA2C 0023B82C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8023EA30 0023B830*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8023EA34, 0x8023EA34) //this is a jump label
/*8023EA34 0023B834*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023EA38 0023B838*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8023EA3C 0023B83C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023EA40 0023B840*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8023EA44 0023B844*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8023EA48 0023B848*/ PPC::Runtime::ASM::blr();
}