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



void fn_8025ACFC(PPC::Runtime::GCContext* context)
{
/*8025ACFC 00257AFC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025AD00 00257B00*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025AD04 00257B04*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025AD08 00257B08*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025AD0C 00257B0C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025AD10 00257B10*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025AD14 00257B14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025AD18 00257B18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025AD1C 00257B1C*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*8025AD20 00257B20*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025AD24 00257B24*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025AD28 00257B28*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*8025AD2C 00257B2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025AD30 00257B30*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025AD34 00257B34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*8025AD38 00257B38*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025AD3C 00257B3C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*8025AD40 00257B40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025AD44 00257B44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025AD48 00257B48*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*8025AD4C 00257B4C*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*8025AD50 00257B50*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*8025AD54 00257B54*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025AD58 00257B58*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025AD5C 00257B5C*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*8025AD60 00257B60*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*8025AD64 00257B64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025AD68 00257B68*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025AD6C 00257B6C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025AD70 00257B70*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*8025AD74 00257B74*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025AD78 00257B78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025AD7C 00257B7C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025AD80 00257B80*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025AD84 00257B84*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025AD88 00257B88*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025AD8C 00257B8C*/ PPC::Runtime::ASM::blr();
}