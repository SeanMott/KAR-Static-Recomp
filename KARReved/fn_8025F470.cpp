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



void fn_8025F470(PPC::Runtime::GCContext* context)
{
/*8025F470 0025C270*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F474 0025C274*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F478 0025C278*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F47C 0025C27C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F480 0025C280*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F484 0025C284*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025F488 0025C288*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F48C 0025C28C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F490 0025C290*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*8025F494 0025C294*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F498 0025C298*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025F49C 0025C29C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8025F4A0 0025C2A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F4A4 0025C2A4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025F4A8 0025C2A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8025F4AC 0025C2AC*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025F4B0 0025C2B0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*8025F4B4 0025C2B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F4B8 0025C2B8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025F4BC 0025C2BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8025F4C0 0025C2C0*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025F4C4 0025C2C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8025F4C8 0025C2C8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F4CC 0025C2CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025F4D0 0025C2D0*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8025F4D4 0025C2D4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025F4D8 0025C2D8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025F4DC 0025C2DC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025F4E0 0025C2E0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025F4E4 0025C2E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8025F4E8 0025C2E8*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025F4EC 0025C2EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F4F0 0025C2F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F4F4 0025C2F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F4F8 0025C2F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F4FC 0025C2FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F500 0025C300*/ PPC::Runtime::ASM::blr();
}