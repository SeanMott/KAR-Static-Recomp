//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254CD8.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8024F488.hpp"



void fn_8025FF10(PPC::Runtime::GCContext* context)
{
/*8025FF10 0025CD10*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025FF14 0025CD14*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025FF18 0025CD18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025FF1C 0025CD1C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025FF20 0025CD20*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025FF24 0025CD24*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025FF28 0025CD28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025FF2C 0025CD2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025FF30 0025CD30*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*8025FF34 0025CD34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025FF38 0025CD38*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025FF3C 0025CD3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8025FF40 0025CD40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025FF44 0025CD44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025FF48 0025CD48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8025FF4C 0025CD4C*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025FF50 0025CD50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*8025FF54 0025CD54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025FF58 0025CD58*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025FF5C 0025CD5C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8025FF60 0025CD60*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025FF64 0025CD64*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8025FF68 0025CD68*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025FF6C 0025CD6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025FF70 0025CD70*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8025FF74 0025CD74*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025FF78 0025CD78*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025FF7C 0025CD7C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025FF80 0025CD80*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025FF84 0025CD84*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8025FF88 0025CD88*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025FF8C 0025CD8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025FF90 0025CD90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025FF94 0025CD94*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025FF98 0025CD98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025FF9C 0025CD9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025FFA0 0025CDA0*/ PPC::Runtime::ASM::blr();
}