//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD6B0.hpp"
#include "fn_8018CB04.hpp"
#include "fn_802041B0.hpp"
#include "fn_802042FC.hpp"
#include "fn_800D2828.hpp"
#include "fn_801FD714.hpp"
#include "fn_801FC398.hpp"
#include "fn_801FC398.hpp"



void fn_8020E978(PPC::Runtime::GCContext* context)
{
/*8020E978 0020B778*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8020E97C 0020B77C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020E980 0020B780*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8020E984 0020B784*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020E988 0020B788*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020E98C 0020B78C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8020E990 0020B790*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r3));
/*8020E994 0020B794*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 3, 28, 28);
/*8020E998 0020B798*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb0b, context->r3));
/*8020E99C 0020B79C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8020E9A0 0020B7A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4c);
/*8020E9A4 0020B7A4*/ PPC::Runtime::ASM::bge(.L_8020EA30);
/*8020E9A8 0020B7A8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x908, context->r31));
/*8020E9AC 0020B7AC*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*8020E9B0 0020B7B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x410, context->r31));
/*8020E9B4 0020B7B4*/ PPC::Runtime::ASM::bl(fn_8018CB04);
/*8020E9B8 0020B7B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8020E9BC 0020B7BC*/ PPC::Runtime::ASM::bl(fn_802041B0);
/*8020E9C0 0020B7C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8020E9C4 0020B7C4*/ PPC::Runtime::ASM::bl(fn_802042FC);
/*8020E9C8 0020B7C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x534, context->r31));
/*8020E9CC 0020B7CC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2f8);
/*8020E9D0 0020B7D0*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x14);
/*8020E9D4 0020B7D4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8020E9D8 0020B7D8*/ PPC::Runtime::ASM::bl(fn_800D2828);
/*8020E9DC 0020B7DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E9E0 0020B7E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8020E9E4 0020B7E4*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8020E9E8 0020B7E8*/ PPC::Runtime::ASM::bl(fn_801FD714);
/*8020E9EC 0020B7EC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E24F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020E9F0 0020B7F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8020E9F4 0020B7F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E24FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020E9F8 0020B7F8*/ PPC::Runtime::ASM::li(context->r4, 0xd);
/*8020E9FC 0020B7FC*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020EA00 0020B800*/ PPC::Runtime::ASM::li(context->r5, 0x11);
/*8020EA04 0020B804*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*8020EA08 0020B808*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8020EA0C 0020B80C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8020EA10 0020B810*/ PPC::Runtime::ASM::beq(.L_8020EA30);
/*8020EA14 0020B814*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E24F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020EA18 0020B818*/ PPC::Runtime::ASM::li(context->r4, 0xe);
/*8020EA1C 0020B81C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8020EA20 0020B820*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8020EA24 0020B824*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8020EA28 0020B828*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E24FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020EA2C 0020B82C*/ PPC::Runtime::ASM::bl(fn_801FC398);
RUNTIME_PPC_JUMP_LABEL(.L_8020EA30, 0x8020EA30) //this is a jump label
/*8020EA30 0020B830*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8020EA34 0020B834*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8020EA38 0020B838*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8020EA3C 0020B83C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8020EA40 0020B840*/ PPC::Runtime::ASM::blr();
}